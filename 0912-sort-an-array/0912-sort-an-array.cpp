class Solution {
public:
    void merge(vector<int>& arr, int low, int mid, int high){
        int left=low;
        int right=mid+1;
        vector<int>res;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                res.push_back(arr[left]);
                left++;
            }
            else{
                res.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            res.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            res.push_back(arr[right]);
            right++;
        }
        for(int i=low; i<=high; i++){
            arr[i]=res[i-low];
        }
    }

    void mergeSort(vector<int>& arr, int low, int high){
        if(low==high){
            return;
        }
        int mid = low + (high-low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }

    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        mergeSort(nums, low, high);
        return nums;
    }
};