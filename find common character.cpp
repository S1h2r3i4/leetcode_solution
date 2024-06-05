<---------------------solution-------------------->
  class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
         vector<int> result(26, 0);
        for (char c : words[0]) {
        result[c - 'a']++;
    }

    
    for (int i = 1; i < words.size(); i++) {
        vector<int> temp(26, 0);
        for (char c : words[i]) {
            temp[c - 'a']++;
        }
        for (int j = 0; j < 26; j++) {
            result[j] = min(result[j], temp[j]);
        }
    }

    
    vector<string> finalResult;
    for (int i = 0; i < 26; i++) {
        while (result[i] > 0) {
            finalResult.push_back(string(1, i + 'a'));
            result[i]--;
        }
    }

    return finalResult;
}

int main() {
    vector<string> words = {"bella", "label", "roller"};
    vector<string> result = commonChars(words);

    for (const string& s : result) {
        cout << s << " ";
    }

    return 0;
}

};
