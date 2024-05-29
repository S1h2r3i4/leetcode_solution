<----------------------solutionn---------------------------------->
class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorResult = x ^ y; 
         int distance = 0;

    
    while (xorResult) {
        distance += xorResult & 1; 
        xorResult >>= 1; 
    }

    return distance;
}

int main() {
    int x = 1;
    int y = 4;
    cout << "Hamming distance between " << x << " and " << y << " is: " << hammingDistance(x, y) << std::endl;
    return 0;
}

};
