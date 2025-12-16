class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        int count = 0;
        while (n > 0) {
            int rem = n % 4;
            if (rem == 1) count++;
            else if (rem != 0) return false;
            n /= 4;
        }
        return count == 1;
    }
};
