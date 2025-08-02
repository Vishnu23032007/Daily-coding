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