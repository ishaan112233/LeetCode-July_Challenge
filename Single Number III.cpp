class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.empty()){
            return {};
        }
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i: mp){
            if(i.second == 1){
                ans.emplace_back(i.first);
            }
        }
        return ans;
    }
};