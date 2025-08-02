class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> duplicates;
        for (int i = 0; i < arr.size(); ++i) {
            int index = abs(arr[i]) - 1; 
            if (arr[index] < 0) {
                duplicates.push_back(abs(arr[i]));
            } else {
                arr[index] *= -1;
            }
        }
        return duplicates;
    }
}; 
/* Quesoion
Given an array arr[] of size n, containing elements from the range 1 to n, and each element appears at most twice, return an array of all the integers that appears twice.

Note: You can return the elements in any order but the driver code will print them in sorted order.

Examples:

Input: arr[] = [2, 3, 1, 2, 3]
Output: [2, 3] 
Explanation: 2 and 3 occur more than once in the given array.
Input: arr[] = [3, 1, 2] 
Output: []
Explanation: There is no repeating element in the array, so the output is empty.
Constraints:
1 ≤ n ≤ 106
1 ≤ arr[i] ≤ n*/
