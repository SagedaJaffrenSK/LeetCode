class Solution {
public:
    int Large(vector<int>& arr){
        int n=arr.size();
        int large=arr[0];
        for(int i=1; i<n; i++){
            if(large<arr[i]){
                large=arr[i];
            }
        }
        return large;
    }
    int Small(vector<int>& arr){
        int n=arr.size();
        int small=arr[0];
        for(int i=1; i<n; i++){
            if(arr[i]<small){
                small=arr[i];
            }
        }
        return small;
    }

    int findGCD(vector<int>& nums) {
        int largest=Large(nums);
        int smallest=Small(nums);
        int Gcd = gcd(largest, smallest);
        return Gcd;
    }
};