/*
  Single Number III


Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

Example:

Input:  [1,2,1,3,2,5]
Output: [3,5]
Note:

The order of the result is not important. So in the above example, [5, 3] is also correct.
Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?
*/

// Simple O(N) & O(N) solution using hashmap
class Solution {
   public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> frequencyTable;

        for (int elt : nums) {
            frequencyTable[elt] += 1;
        }

        vector<int> answer(2, 0);
        int idx = 0;
        for (auto& map : frequencyTable) {
            if (map.second == 1) {
                answer[idx] = map.first;
                idx += 1;
            }

            if (idx == 2) break;
        }

        return answer;
    }
};