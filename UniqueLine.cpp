#include <iostream>
#include <fstream>
#include <unordered_set>
#include <cstring>

void loadAndOutput(std::string inputFile, short outputType, std::string outPutFile); // load file and make output, outputType is between 0 to 2, (0: print only, 1: write only, 2: write and print)

int main(int argc, char **argv)
{ // argc will be number of argument, including shell name
    if (argc == 2)
    {
        loadAndOutput(argv[1], 0, "");
    }
    else if (argc == 1)
    {
        std::cout << "Enter fileName: ";
        std::string line;
        std::getline(std::cin, line);
        loadAndOutput(line, 0, "");
    }
    else if (argc == 3)
    {
        loadAndOutput(argv[1], 1, argv[2]);
    }
    else if (argc == 4)
    {
        const char* pw = "-pw";
        const char* w = "-w";

        if (strcmp(pw, argv[3]) == 0)
        {
            loadAndOutput(argv[1], 2, argv[2]);
        }
        else if (strcmp(w, argv[3]) == 0) //argv[3] == "-w" not works as it compare address instead of value
        {
            loadAndOutput(argv[1], 1, argv[2]);
        }
        else
        {
            std::cout << argv[0] << " <input filename> <output filename> -pw : read <input filename> and write output file, with print output to console" << std::endl;
            std::cout << argv[0] << " <input filename> <output filename> -w : read <input filename> and write output file, no print" << std::endl;
            std::cout << "Note: If filename have space then it should be enclosed with \"" << std::endl;
        }
    }
    else
    {
        std::cout << argv[0] << std::endl;
        std::cout << argv[0] << " <input filename> : read <input filename> and print output to console, no write file" << std::endl;
        std::cout << argv[0] << " <input filename> <output filename>  : read <input filename> and write output file, no print" << std::endl;
        std::cout << argv[0] << " <input filename> <output filename> -pw : read <input filename> and write output file, with print output to console" << std::endl;
        std::cout << argv[0] << " <input filename> <output filename> -w : read <input filename> and write output file, no print" << std::endl;
        std::cout << "Note: If filename have space then it should be enclosed with \"" << std::endl;
    }

    return 0;
}

void loadAndOutput(std::string inputFileName, short outputType, std::string outPutFileName)
{
    std::ifstream inputfile;
    inputfile.open(inputFileName);
    if (inputfile.is_open())
    {
        std::unordered_set<std::string> stringSet;
        std::string line;
        if (outputType == 0)
        {
            while (getline(inputfile, line))
            {
                if (stringSet.find(line) == stringSet.end())
                {
                    stringSet.insert(line);
                    std::cout << line << std::endl;
                }
            }
        }
        else
        {
            std::ofstream outputFile;
            outputFile.open(outPutFileName);
            if (outputType == 1)
            {
                if (outputFile.is_open())
                {
                    while (getline(inputfile, line))
                    {
                        if (stringSet.find(line) == stringSet.end())
                        {
                            stringSet.insert(line);
                            outputFile << line << std::endl;
                        }
                    }
                }
                else
                {
                    std::cout << "Failed to write file " << outPutFileName << std::endl;
                }
            }
            else if (outputType == 2)
            {
                if (outputFile.is_open())
                {
                    while (getline(inputfile, line))
                    {
                        if (stringSet.find(line) == stringSet.end())
                        {
                            stringSet.insert(line);
                            outputFile << line << std::endl;
                            std::cout<< line << std::endl;
                        }
                    }
                }
                else
                {
                    std::cout << "Failed to write file " << outPutFileName << std::endl;
                }
            }

            outputFile.close();
        }

        inputfile.close();
    }
    else
    {
        std::cout << "Failed to load file " << inputFileName << std::endl;
    }
}