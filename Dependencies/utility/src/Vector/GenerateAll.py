from pathlib import Path

letters = [ "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "x", "y", "z" ]

def ReplaceBoolOperators(data):
	operator = ["++", "--", "+=", "-=", "*=", "/="]
	for i in range(len(letters)):
		for k in range(len(operator)):
			data = data.replace(operator[k] + letters[i] + ";", "")
			data = data.replace(letters[i] + " " + operator[k] + " right." + letters[i] + ";", "")
			data = data.replace(letters[i] + " " + operator[k] + " number;", "")

		# replace the division operator
		data = data.replace(letters[i] + " / number,", "")
		data = data.replace(letters[i] + " / number", "")

		data = data.replace(letters[i] + " / v." + letters[i] + ",", "")
		data = data.replace(letters[i] + " / v." + letters[i], "")
	
	return data


def ReplaceWithCast(data, data_type):
	operator = [ "/", "*", "+", "-", "+=", "-=", "*=", "/=" ]

	for i in range(len(letters)):
		for k in range(len(operator)):
			to_replace = letters[i] + " " + operator[k] + " v." + letters[i]
			cast_s = "static_cast<" + data_type + ">(" + to_replace + ")"
			data = data.replace(to_replace, cast_s)

			to_replace = letters[i] + " " + operator[k] + " number"
			cast_s = "static_cast<" + data_type + ">(" + to_replace + ")"
			data = data.replace(to_replace, cast_s)

			to_replace = letters[i] + " " + operator[k] + " right." + letters[i]
			cast_s = "static_cast<" + data_type + ">(" + to_replace + ")"
			data = data.replace(to_replace, cast_s)

	return data


def ReplaceOstream(data):
	for i in range(len(letters)):
		to_replace = "<< v." + letters[i]
		replace_with = "<< static_cast<std::int32_t>(v." + letters[i] + ")"
		data = data.replace(to_replace, replace_with)
	
	return data


def GetBytesList() -> list:
	bytes_c = [ "4", "4", "1", "1", "1", "2", "2", "4", "4", "8", "8",  "4", "2", "8"]
	for i in range(len(bytes_c)):
		bytes_c[i] = "Bytes: " + bytes_c[i]
	return bytes_c


def GetIncludeList(file_type) -> list:
	include:list = []
	for i in range(len(file_type)):
		include.append("Vector" + file_type[i] + ".h")
	return include


class VectorInfo:
    dataType = ["std::int32_t", "std::uint32_t", "bool", "std::int8_t", "std::uint8_t", "std::int16_t",
            "std::uint16_t", "long", "unsigned long", "std::int64_t", "std::uint64_t", "std::float_t", "wchar_t", "long double"]
            
    vectorEnding = [ "i32", "ui32", "b", "i8", "ui8", "i16", "ui16", "l", "Ul", "i64", "ui64", "f", "Wc", "Ld"]
    fileType = [ "i32", "Ui32", "B", "i8", "Ui8", "i16", "Ui16", "L", "Ul", "i64", "Ui64", "F", "Wc", "Ld"]
    fileTypeCxpr = [s + "Cxpr" for s in fileType] # append Cxpr to all

    fileEndings = [ ".h", ".h", ".cpp" ]
    range_c = [ "-2.147.483.648 to 2.147.483.647", "0 to 4.294.967.295", "true or false", "-128 to 127", "0 to 255", "-32.768 to 32.767",
            "0 to 65.535", "-2.147.483.648 to 2.147.483.647", "0 to 4.294.967.295", "-9.223.372.036.854.775.808 to 9.223.372.036.854.775.807",
            "0 to 18.446.744.073.709.551.615", "3.4E +/- 38  precision: (7 digits)", "0 to 65.535", "1.7E +/- 308  precision: (15 digits)"]
    newStandartValues = [ "0", "0U", "false", "0", "0", "0", "0", "0L", "0Ul", "0ll", "0Ull", "0.f", "0", "0.0L"]
    dataTypesToCast = ["bool", "unsigned char", "wchar_t", "unsigned short", "std::uint16_t", "std::uint8_t", "std::int8_t", "std::int16_t"]

    bytes_c = GetBytesList()
    include = GetIncludeList(fileType)

    oldDataType = "std::double_t"
    oldVectorEnd = "d"
    oldStandartValue = "0.0"
    oldBytes = "Bytes: 8"
    oldRange = "1.7E +/- 308  precision: (15 digits)"
    oldInclude = "VectorD.h"


def GenerateDataTypeVector(info:VectorInfo, fileData:list):
    for i in range(len(info.dataType)):
        newDataType = info.dataType[i]

        for k in range(len(fileData)): # .h and .cpp
            data = fileData[k]
            data = data.replace(info.oldDataType, newDataType)
            data = data.replace(info.oldStandartValue, info.newStandartValues[i])

            for j in range(2,11):
                vec = "Vector" + str(j) + info.vectorEnding[i]
                old_vec = "Vector" + str(j) + info.oldVectorEnd
                data = data.replace(old_vec, vec)

            data = data.replace(info.oldBytes, info.bytes_c[i])
            data = data.replace(info.oldRange, info.range_c[i])
            data = data.replace(info.oldInclude, info.include[i])

            if newDataType == "bool":
                data = ReplaceBoolOperators(data)

            if newDataType in info.dataTypesToCast and (k == 1 or k == 2):
                data = ReplaceWithCast(data, info.dataType[i])

            if newDataType == "wchar_t":
                data = data.replace("std::ostream&", "std::wostream&")
                data = ReplaceOstream(data) # cast to int
                
            elif newDataType == "std::uint8_t" or newDataType == "std::int8_t":
                data = ReplaceOstream(data)

            # create folder for new vector files
            Path("NewVectors").mkdir(parents=True, exist_ok=True)
            Path("NewVectors/Cxpr").mkdir(parents=True, exist_ok=True)
            if k == 1:
                file = open("NewVectors/Cxpr/" + "Vector" + info.fileTypeCxpr[i] + info.fileEndings[k], 'w')
            else:
                file = open("NewVectors/" + "Vector" + info.fileType[i] + info.fileEndings[k], 'w')
            file.write(data)
            file.close()


def ReadFile(file_name):
    with open(file_name, "r") as file:
        data = file.read()
    return data


def CreateTemplateVector(data:str, isCxpr:bool):
    for i in range(2,11):
        if not isCxpr:
            old_vec = "Vector" + str(i) + "dCxpr"
        else:
            old_vec = "Vector" + str(i) + "d"
        vec = "Vector" + str(i)

        data = data.replace(old_vec, vec)
        data = data.replace("class " + vec, "template<class T>\n\tclass " + vec)
        data = data.replace("std::double_t", "T")
        data = data.replace("stnd_value = 0.0", "stnd_value")
        data = data.replace("0.0", "")
        if isCxpr:
            data = data.replace("std::ostream& os, const Vector" + str(i) + "Cxpr& v", "std::ostream& os, const " + vec + "Cxpr<T>& v")
        else:
            data = data.replace("std::ostream& os, const Vector" + str(i) + "& v", "std::ostream& os, const " + vec + "<T>& v")

    data = data.replace("static inline", "template<class T>\n\tstatic inline")
    data = data.replace("#pragma once\n#include <iostream>\n#include <cstdint>\n#include <cfloat>\n#include <cmath>", "#pragma once\n#include <iostream>")
    data = data.replace("\t/*\n\t\tAccording to the MSVC C++ specification for Windows 10.\n\t\tBytes and the associated Range may differ with other specifications\n\t\tbut are also dependent on the compiler and platform.\n\n\t\tType : T\n\t\tBytes: 8\n\t\tRange: 1.7E +/- 308  precision: (15 digits)\n\t*/", "")
    data = data.replace("{\n\n", "{")

    if isCxpr:
        file = open("NewVectors/Cxpr/VectorTCxpr.h", 'w')
        file.write(data)
        file.close()
    else:
        file = open("NewVectors/VectorT.h", 'w')
        file.write(data)
        file.close()


def main():
    info = VectorInfo()
    fileData = []
    fileData.append(ReadFile("VectorD.h"))
    fileData.append(ReadFile("VectorDCxpr.h"))
    fileData.append(ReadFile("VectorD.cpp"))

    GenerateDataTypeVector(info, fileData)
    CreateTemplateVector(fileData[1], True)
    CreateTemplateVector(fileData[1], False)

    file = open("NewVectors/VectorAll.h", 'w')
    file.write("#pragma once")
    for i in info.include:
        file.write("\n#include \"" + i + "\"")
    file.write("\n#include \"VectorT.h\"")
    file.close()

    file = open("NewVectors/Cxpr/VectorAllCxpr.h", 'w')
    file.write("#pragma once")
    for i in info.fileType:
        file.write("\n#include \"Vector" + i + "Cxpr.h\"")
    file.write("\n#include \"VectorTCxpr.h\"")
    file.close()

    file = open("NewVectors/VectorAllwCxpr.h", 'w')
    file.write("#pragma once\n#include \"VectorAll.h\"\n#include \"Cxpr/VectorAllCxpr.h\"")
    file.close()

if __name__ == "__main__":
    main()