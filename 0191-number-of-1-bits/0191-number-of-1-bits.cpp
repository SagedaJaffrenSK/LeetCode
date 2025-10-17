class Solution {
public:
    int hammingWeight(int n) {
        long long int count=0;
        while(n>0){
            long long int rem=n%2;
            if(rem==1){
                count++;
            }
            n/=2;
        }
        return count;
    }
};