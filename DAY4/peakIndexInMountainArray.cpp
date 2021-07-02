//https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        for(int i=1;i<arr.size();i++)
        {
            if(arr[i-1]<arr[i]&&arr[i]>arr[i+1])
            {
                return i;
            }
        }
        return 0;
    }
};
