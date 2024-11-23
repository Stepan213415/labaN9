#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(const char* str) 
{
    const char* start = str; 
    const char* end = str; 
    
    while (*end != '\0') 
    {
        end++;
    }
    end--; 

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

    cout << "Enter the string: ";
    cin.getline(input, MAX_LENGTH);

    if (isPalindrome(input)) 
    {
        cout << "This string is a palindrome." << endl;
    } 
    else 
    {
        cout << "This string is not a palindrome." << endl;
    }

    return 0;
}
