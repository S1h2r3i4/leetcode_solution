<--------------------------------Solution------------------------->
  class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
     int n = arr.size();
    int sum = 0;

    for (int start = 0; start < n; ++start) {
        for (int end = start; end < n; ++end) {
            if ((end - start + 1) % 2 == 1) {
                 // Check if length is odd
                for (int i = start; i <= end; ++i) {
                    sum += arr[i];
                }
            }
        }
    }

    return sum;
}   

};
