class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> result(n);

        int idx = 0;

        // 1st pass: elements < pivot
        for (int x : nums) {
            if (x < pivot) {
                result[idx++] = x;
            }
        }

        // 2nd pass: elements == pivot
        for (int x : nums) {
            if (x == pivot) {
                result[idx++] = x;
            }
        }

        // 3rd pass: elements > pivot
        for (int x : nums) {
            if (x > pivot) {
                result[idx++] = x;
            }
        }

        return result;
    }
};