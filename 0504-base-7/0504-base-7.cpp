class Solution {
public:
    string convertToBase7(int num) {
        int ans=0;
        int pow=1;
        while(num!=0){
            int rem = num%7;
            ans += (rem*pow);
            pow *= 10;
            num/=7;
        }
        return to_string(ans);
    }
};