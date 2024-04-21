/////////////////////////////////////SOLUTION//////////////////////

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
      string shuffled(s.size(), ' '); // Create a string of the same size as s
    
    // Iterate over the indices array
    for (int i = 0; i < indices.size(); ++i) {
        shuffled[indices[i]] = s[i]; // Place the character at its corresponding index
    }
    
    return shuffled;
}  
    
};
