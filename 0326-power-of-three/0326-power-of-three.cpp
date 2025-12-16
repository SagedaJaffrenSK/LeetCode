class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        int count=0;
        while(n>0){
            int rem=n%3;
            if(rem==1) count++;
            else if(rem!=0) return false;
            n/=3;
        }
        return count==1;
    }
};