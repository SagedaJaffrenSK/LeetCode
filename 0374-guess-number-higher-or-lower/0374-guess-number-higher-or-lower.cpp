/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int low=1, high=n;
        long long int temp=n;
        while(low<=high){
            long long int mid = (low+high)/2;
            long long int res=guess(mid);
            if(res==0){
                return mid;
            }
        }
        return -1;
    }
};