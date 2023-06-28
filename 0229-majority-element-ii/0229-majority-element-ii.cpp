class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int, int> mp;
        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        
        unordered_map<int, int> :: iterator itr;
        vector<int> ans;
        for(itr = mp.begin(); itr!=mp.end(); itr++){
            if(itr->second > floor(n/3)){
                ans.push_back(itr->first);
            }
        }
        
        return ans;
    }
};