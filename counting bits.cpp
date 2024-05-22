<------------------------------solution--------------------------->
  class Solution {
public:
    vector<int> countBits(int n) {
     vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        ans[i] = ans[i >> 1] + (i & 1);
    }
    return ans;
}

int main() {
    int n = 5;
    vector<int> result = countBits(n);
    
    cout << "Number of 1's in binary representation for each number from 0 to " << n << ": ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}   
    
};
