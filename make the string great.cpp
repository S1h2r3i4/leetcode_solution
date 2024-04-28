<-----------------------------------solution-------------------->

class Solution {
public:
    string makeGood(string s) {
    stack<char> stk;
    
    for (char c : s) {
        if (!stk.empty() && std::abs(c - stk.top()) == 32) { // ASCII difference between upper and lower case is 32
            stk.pop();
        } else {
            stk.push(c);
        }
    }
    
    std::string result;
    while (!stk.empty()) {
        result = stk.top() + result;
        stk.pop();
    }
    
    return result;
}
