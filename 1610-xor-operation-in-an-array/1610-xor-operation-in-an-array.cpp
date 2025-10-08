class Solution {
public:
    int xorOperation(int n, int start) {
        int xorop=0;
        for(int i=0; i<n; i++){
            xorop ^= start + 2 * i;
        }
        return xorop;
    }
};