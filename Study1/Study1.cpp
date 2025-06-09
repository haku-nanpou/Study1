#include <iostream>
#include <string>
#include "define.h"

std::string splitedThreeDigits(u64 num)
{
    std::string result;
    result.reserve(32); // u64は20桁 + カンマは6個
    result = std::to_string(num);
    s32 len = result.length();

    for (s32 i = len - 3; i > 0; i -= 3)
        result.insert(i, ",");

    return result;
}

int main()
{
	std::string str1 = splitedThreeDigits(0);
    std::string str2 = splitedThreeDigits(-1);
    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;
}