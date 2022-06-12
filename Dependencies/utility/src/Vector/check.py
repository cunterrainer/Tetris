from termcolor import colored
import os
import shutil
import sys

def ReadFile(filePath:str) -> str:
    try:
        f = open(filePath, "r")
        data = f.read()
        f.close()
        return data
    except FileNotFoundError:
        print(colored("Error: Could not open file: " + filePath, "red"))
        return ""
    except Exception as e:
        print(colored("Error: " + str(e), "red"))
        return ""

def CompareFiles(filesList:list, newFolder:str, oldFolder:str) -> tuple[int, int]:
    counter = 0
    failedCounter = 0
    for header in filesList:
        counter += 1
        newData = ReadFile(newFolder + header)
        oldData = ReadFile(oldFolder + header)

        if newData == oldData:
            print(colored(str(counter) + " Check passed: " + header, 'green'))
        else:
            print(colored(str(counter) + " Check failed: " + header, 'red'))
            failedCounter += 1
    return failedCounter, counter - failedCounter


def CheckFiles(filesList, newFolder, oldFolder, filesType) -> bool:
    print(colored("Checking " + filesType +  " files", "yellow"))
    failedChecks, passedChecks = CompareFiles(filesList, newFolder, oldFolder)
    color = "yellow"
    if failedChecks != 0:
        color = "red"
    print(colored("Summary: failed tests: " + str(failedChecks) + " passed tests: " + str(passedChecks), color) + "\n")
    return failedChecks == 0


def main():
    deleteFolder = True
    if len(sys.argv) > 1:
        if sys.argv[1].lower() == "-nodelete":
            deleteFolder = False

    os.system("color")
    headerFiles:list = ["VectorB.h", "VectorF.h", "Vectori8.h", "Vectori16.h", "Vectori32.h", "Vectori64.h", "VectorUi8.h", "VectorUi16.h", "VectorUi32.h", "VectorUi64.h", "VectorL.h", "VectorUl.h", "VectorLd.h", "VectorT.h", "VectorWc.h"]
    cppFiles:list = ["VectorB.cpp", "VectorF.cpp", "Vectori8.cpp", "Vectori16.cpp", "Vectori32.cpp", "Vectori64.cpp", "VectorUi8.cpp", "VectorUi16.cpp", "VectorUi32.cpp", "VectorUi64.cpp", "VectorL.cpp", "VectorUl.cpp", "VectorLd.cpp", "VectorWc.cpp"]
    headerFilesCxpr:list = ["VectorBCxpr.h", "VectorFCxpr.h", "Vectori8Cxpr.h", "Vectori16Cxpr.h", "Vectori32Cxpr.h", "Vectori64Cxpr.h", "VectorUi8Cxpr.h", "VectorUi16Cxpr.h", "VectorUi32Cxpr.h", "VectorUi64Cxpr.h", "VectorLCxpr.h", "VectorUlCxpr.h", "VectorLdCxpr.h", "VectorTCxpr.h", "VectorWcCxpr.h"]
    
    newFolder:str = "NewVectors/"
    oldFolder:str = "old/"
    newFolderCxpr:str = "NewVectors/Cxpr/"
    oldFolderCxpr:str = "old/Cxpr/"

    allPassedHeader = CheckFiles(headerFiles, newFolder, oldFolder, "header")
    allPassedCpp = CheckFiles(cppFiles, newFolder, oldFolder, "cpp")
    allPassedHeaderCxpr = CheckFiles(headerFilesCxpr, newFolderCxpr, oldFolderCxpr, "constexpr header")

    if allPassedHeader and allPassedCpp and allPassedHeaderCxpr:
        print(colored("Passed all aviable test", "green"), end="")
    else:
        print(colored("Failed some test", "red"), end="")

    if os.path.exists("NewVectors") and allPassedHeader and allPassedCpp and allPassedHeaderCxpr and deleteFolder:
        shutil.rmtree("NewVectors")


if __name__ == "__main__":
    main()