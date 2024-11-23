#include <iostream>
#include <cstring>

bool isPalindrome(const char* str) 
{
    const char* start = str; 
    const char* end = str + std::strlen(str) - 1;

    while (start < end) 
    {
        if (*start != *end) 
        {
            return false; 
        }
        start++; 
        end--;  
    }

    return true; 
}

int main() 
{
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];

    std::cout << "Enter the string: ";
    std::cin.getline(input, MAX_LENGTH);

    if (isPalindrome(input)) 
    {
        std::cout << "This string is a palindrome." << std::endl;
    } else 
    {
        std::cout << "This line is not a palindrome." << std::endl;
    }

    return 0;
}
