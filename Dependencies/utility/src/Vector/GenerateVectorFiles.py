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


def ReplaceWithCast(data):
	operator = [ "/", "*", "+", "-", "+=", "-=", "*=", "/=" ]

	for i in range(len(letters)):
		for k in range(len(operator)):
			to_replace = letters[i] + " " + operator[k] + " v." + letters[i]
			cast_s = "cast(" + to_replace + ")"
			data = data.replace(to_replace, cast_s)

			to_replace = letters[i] + " " + operator[k] + " number"
			cast_s = "cast(" + to_replace + ")"
			data = data.replace(to_replace, cast_s)

			to_replace = letters[i] + " " + operator[k] + " right." + letters[i]
			cast_s = "cast(" + to_replace + ")"
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


dataType = ["std::int32_t", "std::uint32_t", "bool", "std::int8_t", "std::uint8_t", "std::int16_t",
		"std::uint16_t", "long", "unsigned long", "std::int64_t", "std::uint64_t", "std::float_t", "wchar_t", "long double"]
		
vectorEnding = [ "i32", "ui32", "b", "i8", "ui8", "i16", "ui16", "l", "Ul", "i64", "ui64", "f", "Wc", "Ld"]
fileType = [ "i32", "Ui32", "B", "i8", "Ui8", "i16", "Ui16", "L", "Ul", "i64", "Ui64", "F", "Wc", "Ld"]
fileEndings = [ ".h", ".cpp" ]
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

# Read the old vector files
fileData:list = []
for i in range(len(fileEndings)):
	file = open("VectorD" + fileEndings[i], "r")
	fileData.append(file.read())
	file.close()

for i in range(len(dataType)):
	newDataType = dataType[i]

	for k in range(len(fileEndings)): # .h and .cpp
		data = fileData[k]
		data = data.replace(oldDataType, newDataType)
		data = data.replace(oldStandartValue, newStandartValues[i])

		for j in range(2,11):
			vec = "Vector" + str(j) + vectorEnding[i]
			old_vec = "Vector" + str(j) + oldVectorEnd
			data = data.replace(old_vec, vec)

		data = data.replace(oldBytes, bytes_c[i])
		data = data.replace(oldRange, range_c[i])
		data = data.replace(oldInclude, include[i])

		if newDataType == "bool":
			data = ReplaceBoolOperators(data)

		if newDataType in dataTypesToCast and fileEndings[k] == ".cpp":
			data = ReplaceWithCast(data)
			data = data[:13 + len(include[i])] + "#define cast(x) static_cast<" + newDataType + ">(x)\n\n" + data[13 + len(include[i]):]

		if newDataType == "wchar_t":
			data = data.replace("std::ostream&", "std::wostream&")
			data = ReplaceOstream(data) # cast to int

		elif newDataType == "std::uint8_t" or newDataType == "std::int8_t":
			data = ReplaceOstream(data)

		# create folder for new vector files
		Path("NewVectors").mkdir(parents=True, exist_ok=True)
		file = open("NewVectors/" + "Vector" + fileType[i] + fileEndings[k], 'w')
		file.write(data)
		file.close()



# create template header classes
data = fileData[1] # VectorD.cpp
file = open("VectorD.cpp", 'r');
data = file.read();
file.close();

Vec = []
Vec.append(data[data.find("// Vector2d"):data.find("// Vector3d") - 4])
Vec.append(data[data.find("// Vector3d"):data.find("// Vector4d") - 4])
Vec.append(data[data.find("// Vector4d"):data.find("// Vector5d") - 4])
Vec.append(data[data.find("// Vector5d"):data.find("// Vector6d") - 4])
Vec.append(data[data.find("// Vector6d"):data.find("// Vector7d") - 4])
Vec.append(data[data.find("// Vector7d"):data.find("// Vector8d") - 4])
Vec.append(data[data.find("// Vector8d"):data.find("// Vector9d") - 4])
Vec.append(data[data.find("// Vector9d"):data.find("// Vector10d") - 4])
Vec.append(data[data.find("// Vector10d"):data.find("// End")])

classes = []

for i in range(len(Vec)):
	Vector = "Vector" + str(i + 2)
	Vec[i] = Vec[i].replace("\t", "\t\t")
	Vec[i] = Vec[i].replace("\t\t\t\t", "\t\t\t")
	Vec[i] = "\t\t" + Vec[i]
	Vec[i] = Vec[i].replace(Vector + "d::", "")
	Vec[i] = Vec[i].replace(Vector + "d", Vector)
	Vec[i] = Vec[i].replace(oldDataType, "T") # old_type == "std::double_t"
	Vec[i] = Vec[i].replace("// " + Vector, "// " + Vector + "\n" + "\t\t" + Vector + "() noexcept {}")
	Vec[i] = Vec[i].replace(Vector, "constexpr inline " + Vector)
	Vec[i] = Vec[i].replace("const constexpr inline " + Vector, "const " + Vector)
	Vec[i] = Vec[i].replace("constexpr inline " + Vector + "&&", Vector + "&&")
	Vec[i] = Vec[i].replace("constexpr inline " + Vector + " operator++ (int)", "inline " + Vector + " operator++ (int)")
	Vec[i] = Vec[i].replace("constexpr inline " + Vector + " operator-- (int)", "inline " + Vector + " operator-- (int)")
	Vec[i] = Vec[i].replace("constexpr inline " + Vector + "(const " + Vector + "& other)", "inline " + Vector + "(const " + Vector + "& other)")
	Vec[i] = Vec[i].replace("constexpr inline " + Vector + "(" + Vector + "&& other)", "inline " + Vector + "(" + Vector + "&& other)")


	# 4 spaces
	class_def = "\ttemplate<class T>\n"
	class_def += "\tclass Vector" + str(i + 2) + "\n\t{\n\tpublic:\n\t\tTEMPLATE_TYPE\n\tpublic:\n"
	class_def += Vec[i] + "\t};"
	classes.append(class_def)

classes[0] = classes[0].replace("TEMPLATE_TYPE", "T x, y;")
classes[1] = classes[1].replace("TEMPLATE_TYPE", "T x, y, z;")
classes[2] = classes[2].replace("TEMPLATE_TYPE", "T a, b, c, d;")
classes[3] = classes[3].replace("TEMPLATE_TYPE", "T a, b, c, d, e;")
classes[4] = classes[4].replace("TEMPLATE_TYPE", "T a, b, c, d, e, f;")
classes[5] = classes[5].replace("TEMPLATE_TYPE", "T a, b, c, d, e, f, g;")
classes[6] = classes[6].replace("TEMPLATE_TYPE", "T a, b, c, d, e, f, g, h;")
classes[7] = classes[7].replace("TEMPLATE_TYPE", "T a, b, c, d, e, f, g, h, i;")
classes[8] = classes[8].replace("TEMPLATE_TYPE", "T a, b, c, d, e, f, g, h, i, j;")


final_data = "#pragma once\n#include <iostream>\n\nnamespace util::math {\n\n"

for i in range(len(classes)):
	classes[i] = classes[i].replace("\t\t\t};", "\t};")
	if i != len(classes) - 1:
		final_data += classes[i] + "\n\n\n"
	else:
		final_data += classes[i] + "\n"

final_data += "\n\n"


file = open("VectorD.h", 'r');
data = file.read();
file.close();

ostream_funcs = data[data.find("// overloads for the << operator"):data.find("// End")]
ostream_funcs = "\t" + ostream_funcs
ostream_funcs = ostream_funcs.replace("static inline", "template<class T>\n\tstatic inline")

for i in range(len(classes)):
	ostream_funcs = ostream_funcs.replace("Vector" + str(i + 2) + "d", "Vector" + str(i + 2) + "<T>")

final_data += ostream_funcs + "END_OF_FINAL_DATA_PFO_PYTHON"
final_data = final_data.replace("\tEND_OF_FINAL_DATA_PFO_PYTHON", "}")
#final_data = ReplaceWithCast(final_data)
#final_data = final_data[:34] + "#define cast(x) static_cast<T>(x)\n\n" + final_data[34:]

file = open("NewVectors/VectorT.h", 'w')
file.write(final_data)
file.close()