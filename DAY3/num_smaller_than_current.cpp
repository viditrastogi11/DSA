//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res=nums;
        vector<int> num;
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++)
        {
            auto a=lower_bound(res.begin(),res.end(),nums[i]);
            num.push_back(a-res.begin());


        }
        return num;
    }
};
