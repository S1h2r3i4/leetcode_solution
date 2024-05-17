<------------------------------------solution---------------------------->
  class Solution {
public:
    int numberOfSpecialChars(string word){  
            unordered_set<char> lowercase;
            unordered_set<char> uppercase;
        
        // Traverse the string and populate the sets
        for (char c : word) {
            if (islower(c)) {
                lowercase.insert(c);
            } else if (isupper(c)) {
                uppercase.insert(c);
            }
        }
        
        int specialCount = 0;
        
        // Check for special letters
        for (char c : lowercase) {
            if (uppercase.find(toupper(c)) != uppercase.end()) {
                specialCount++;
            }
        }
        
        return specialCount;
            
        }
};
