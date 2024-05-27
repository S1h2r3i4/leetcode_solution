<-------------------------solution-------------------------->
  class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int lastNonZeroIndex = 0;
    for (int current = 0; current < nums.size(); ++current) {
        if (nums[current] != 0) {
            nums[lastNonZeroIndex++] = nums[current];
        }
    }

    
    for (int i = lastNonZeroIndex; i < nums.size(); ++i) {
        nums[i] = 0;
    }
}

int main() {
       vector<int> nums1 = {0, 1, 0, 3, 12};
    moveZeroes(nums1);
    for (int num : nums1) {
         cout << num << " ";
    }
          cout << endl;

        vector<int> nums2 = {0};
    moveZeroes(nums2);
    for (int num : nums2) {
          cout << num << " ";
    }
        cout <<endl;

    return 0;
}

};
