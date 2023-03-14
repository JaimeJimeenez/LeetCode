/*
    Write a function to find the longest common prefix string amongst an array of strings.

    If there is no common prefix, return an empty string "".

 

    Example 1:

        Input: strs = ["flower","flow","flight"]
        Output: "fl"
    
    Example 2:

        Input: strs = ["dog","racecar","car"]
        Output: ""
    
    Explanation: There is no common prefix among the input strings.
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string word;
        for (int i = 0; i < strs[0].size(); i++) {
            bool correct = true;
            char character = strs[0][i];
            for (string elem : strs)
                if (elem[i] != character)
                    correct = false;
            
            if (correct) word.push_back(character);
            else break;
        }

        return word.size() == 0 ? "" : word;
    }
};

int main() {
    return 0;
}