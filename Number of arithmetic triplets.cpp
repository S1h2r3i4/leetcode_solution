<-------------------------------------solution------------------------------------------>
  class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int, int> freq;
    int count = 0;
    
    for (int num : nums) {
        freq[num]++;
    }
    for (int num : nums) {
        int prev = num - diff;
        int next = num + diff;
        count += freq[prev] * freq[next];
    }

    return count;
}
    
};
