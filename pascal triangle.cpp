/////////////////////////////////////////////solution/////////////////////
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
    
    if (numRows <= 0) {
        return triangle; 
        // Return an empty triangle for invalid numRows
    }
    
    triangle.push_back({1});
     // First row is always 1
    
    for (int i = 1; i < numRows; ++i) {
     vector<int> row(i + 1, 1); 
     // Initialize new row with 1s
        for (int j = 1; j < i; ++j) {
            // Calculate value using the formula: C(i, j) = C(i-1, j-1) + C(i-1, j)
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle.push_back(row);
    }
    
    return triangle;
}
    
};
