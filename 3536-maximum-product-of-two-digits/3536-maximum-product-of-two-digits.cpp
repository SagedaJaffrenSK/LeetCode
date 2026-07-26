class Solution {
public:
    int maxProduct(int n) {
        vector<int>res;
        while(n!=0){
            int rem=n%10;
            res.push_back(rem);
            n /= 10;
        }
        sort(res.begin(), res.end());
        int m=res.size();
        int prod1 = res[0]*res[m-1];
        int prod2 = res[m-1]*res[m-2];
        int maxNum = max(prod1, prod2);
        return maxNum;
    }
};