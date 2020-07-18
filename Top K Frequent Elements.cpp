class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.empty()){
            return {};
        }    
        unordered_map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(auto i: mp){
            pq.push({i.second, i.first});
            if(pq.size() > mp.size() - k){
                ans.emplace_back(pq.top().second);
                pq.pop();
            }
        }
        return ans;
    }
};

