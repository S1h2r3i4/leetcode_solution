<-------------------------------solution----------------------------------->
class Solution {
public:
    int findGCD(vector<int>& nums) {

    int min_num =min_element(nums.begin(), nums.end());
    int max_num =max_element(nums.begin(), nums.end());

    
    return gcd(min_num, max_num);
}

int main() {
    vector<int> nums1 = {2, 5, 6, 9, 10};
    vector<int> nums2 = {7, 5, 6, 8, 3};

    cout<<findGCD(nums1)<<endl;
    cout<<findGCD(nums2)<<endl;

    return 0;
} 
    
};
