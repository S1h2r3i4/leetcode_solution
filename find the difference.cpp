/////////////////////////////solution//////////////////find the difference//////////////
unordered_map<char, int> freq;

    // Count character frequencies in string s
    for (char c : s) {
        freq[c]++;
    }

    // Subtract character frequencies in string t
    for (char c : t) {
        if (--freq[c] < 0) {
            return c;
        }
    }

    // The loop should always return before reaching here
    return '\0';
}
