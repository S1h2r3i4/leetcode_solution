<----------------------------solution---------------------------->
  class Solution {
public:
    int minimumSum(vector<int>& nums) {
      int n = nums.size();
       if (n < 3) 
       return -1;

    vector<int> left_min(n, INT_MAX);
    vector<int> right_min(n, INT_MAX);

    
    for (int i = 1; i < n; ++i) {
        left_min[i] = min(left_min[i - 1], nums[i - 1]);
    }

    
    for (int i = n - 2; i >= 0; --i) {
        right_min[i] = min(right_min[i + 1], nums[i + 1]);
    }

    
    int min_sum = INT_MAX;
    for (int j = 1; j < n - 1; ++j) {
        if (left_min[j] < nums[j] && right_min[j] < nums[j]) {
            min_sum = min(min_sum, left_min[j] + nums[j] + right_min[j]);
        }
    }


    return (min_sum == INT_MAX) ? -1 : min_sum;
}
};

