////////////////////////Solution////////////////
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
    unordered_set<int>numSet(nums.begin(), nums.end()); 
    for (int i = 1; i <= nums.size(); ++i) {
        if (numSet.find(i) == numSet.end()) { 
        
            result.push_back(i);
        }
    }
    
    return result;
 } 
};
