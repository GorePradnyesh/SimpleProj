#include <iostream>
#include "Processor.h"


int main()
{
    std::cout << "Simple Proj" << std::endl;
    std::string concatenatedString;
    Concatenator("<--", " -->", concatenatedString);
    std::cout << concatenatedString << std::endl;
    
    PrintSubstr("Standard Concatenator");
    
    return 0;
}
