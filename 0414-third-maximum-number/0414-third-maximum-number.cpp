#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long max1 = LLONG_MIN, max2 = LLONG_MIN, max3 = LLONG_MIN;
        for (int x : nums) {
            if (x > max1) max1 = x;
        }
        for (int x : nums) {
            if (x > max2 && x != max1) max2 = x;
        }
        for (int x : nums) {
            if (x > max3 && x != max1 && x != max2) max3 = x;
        }

        return (max3 == LLONG_MIN) ? (int)max1 : (int)max3;
    }
};
