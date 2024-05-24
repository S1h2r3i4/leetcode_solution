<-------------------solution----------------------->

vector<int> charCount(26, 0);  // Array to store the frequency of each character
    
    // First pass: count the frequency of each character
    for (char c : s) {
        charCount[c - 'a']++;
    }
    
    // Second pass: find the first character with a count of 1
    for (int i = 0; i < s.length(); ++i) {
        if (charCount[s[i] - 'a'] == 1) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    string s = "leetcode";
    int index = firstUniqChar(s);
    
    if (index != -1) {
        cout << "The first non-repeating character is '" << s[index] << "' at index " << index << endl;
    } else {
        cout << "There is no non-repeating character in the string." << endl;
    }
    
    return 0;
}
