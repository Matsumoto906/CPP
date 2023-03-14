#include <iostream>
#include <string>
#include <bitset>
 
int main()
{
    unsigned int decimal = 15;
    const int n = 8;
 
    std::string binary = std::bitset<n>(decimal).to_string();
 
    std::cout << binary << std::endl;
 
    return 0;
}