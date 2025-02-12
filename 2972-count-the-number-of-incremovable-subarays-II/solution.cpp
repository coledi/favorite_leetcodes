class Solution {
public:
    long long incremovableSubarrayCount(vector<int>& nums) {
        // pi = last index of prefix (inclusive)
        long long n = nums.size(), pi = 0;
        while (pi < n - 1 && nums[pi] < nums[pi + 1]) {
            pi++;
        }
        
        if (pi == n - 1) return n * (n + 1) / 2;

        // si = first index of suffix (inclusive)
        int si = n - 1;
        while (si > 0 && nums[si] > nums[si - 1]) {
            si--;
        }
        
        //subarrays that use NO Prefix := suffixes(nums[i in (si, n)]) = n - si (+ 1 for []) 
        long long count = n - si + 1; 

        for (int l = 0; l <= pi; l++) {
            // for index l of prefix, see how many suffixes are greater
            // pref[l + 1] > pref[l] (since its a valid pref), 
            // so if si is not valid for prefix it wont be valid for l + 1
            while (si < n && nums[si] <= nums[l]) {
                si++;
            }
            count += (n - si + 1);
        }
        return count;
    }
};
