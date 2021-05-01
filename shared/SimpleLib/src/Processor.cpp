#include <iostream>

#include "Processor.h"
#include "InternalProcessor.h"


void Concatenator(
    const std::string& inFirst, 
    const std::string& inSecond, 
    std::string& outCat)
{
    outCat = std::move(inFirst + inSecond);
}

void PrintSubstr(const std::string& inString)
{
    std::cout << Substr(inString) << std::endl;
}
