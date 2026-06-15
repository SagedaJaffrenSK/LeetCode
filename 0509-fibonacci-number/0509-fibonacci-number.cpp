class Solution {
public:
    int fib(int n) {
        int a=0, b=1;
        int c=a+b;
        int temp=0;
        if(n==0){
            return 0;
        }
        for(int i=1; i<=n-2; i++){
            a=b;
            b=c;
            c=a+b;
        }
        return c;
    }
};