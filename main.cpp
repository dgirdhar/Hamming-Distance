class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = x ^ y;
        int temp = 1;
        int count = 0;
        
        for (int i = 0; i < 31; ++i) {
            if ((temp & result) > 0) {
                count++;
            }
            temp <<= 1;
        }
        
        return count;
    }
};
