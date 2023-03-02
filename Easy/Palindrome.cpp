/*
    Given an integer x, return true if x is a palindrome, and false otherwise.

    Example 1:

        Input: x = 121
        Output: true
        Explanation: 121 reads as 121 from left to right and from right to left.
    
    Example 2:

        Input: x = -121
        Output: false
        Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
    
    Example 3:

        Input: x = 10
        Output: false
        Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

*/

#include <iostream>
#include <string>
#include <sstream>

class Solution {
public:
    bool isPalindrome(int x) {
        std::stringstream ss;
        ss << x;
        std::string s = ss.str();
        std::string palindrome;
        
        for (int i = s.length() - 1; i >= 0; i--)
            palindrome.push_back(s.at(i));
        
        return palindrome == s;
    }
};

int main() {
    return 0;
}