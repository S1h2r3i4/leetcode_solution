/////////////////////////////Solution////////////////////
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int low = 0; // Pointer for elements equal to 0 (red)
       int high = nums.size() - 1; // Pointer for elements equal to 2 (blue)
      int i = 0; // Iterator pointer
    
    while (i <= high) {
        if (nums[i] == 0) {
            swap(nums[i], nums[low]);
            ++i;
            ++low;
        } else if (nums[i] == 1) {
            ++i;
        } else {
            swap(nums[i], nums[high]);
            --high;
        }
    }
}        
};
