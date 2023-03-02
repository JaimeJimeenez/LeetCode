/*
    Given an array of integers nums, sort the array in ascending order and return it.

    You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

    Example 1:

        Input: nums = [5,2,3,1]
        Output: [1,2,3,5]
        Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).
    
    Example 2:

        Input: nums = [5,1,1,2,0,0]
        Output: [0,0,1,1,2,5]
        Explanation: Note that the values of nums are not necessairly unique.

*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Solution {
public:

    vector<int> sortArray(vector<int>& nums) {
        std::vector<int> result;
        std::priority_queue<int, std::vector<int>, std::greater<int>> queue;
        for (int i : nums) queue.push(i);
        while (!queue.empty()) {
            result.push_back(queue.top());
            queue.pop();
        }
        return result;
    }
};