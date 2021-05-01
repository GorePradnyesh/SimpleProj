#include "Processor.h"

void Concatenator(
    const std::string& inFirst, 
    const std::string& inSecond, 
    std::string& outCat)
{
    outCat = std::move(inFirst + inSecond);
}
