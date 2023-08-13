class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> res;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++) {
            int sum = target - nums[i];
            if(map.find(sum) != map.end()) {
                res.push_back(map[sum]);
                res.push_back(i);
                return res;
            }
            map[nums[i]] = i;
        }

        return res;
        
    }
};