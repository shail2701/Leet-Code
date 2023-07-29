class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

       vector<int> result;
        int sum = 0;
        unordered_map<int,int> map;

        for(int i=0;i<nums.size();i++)
        {
            sum = target - nums[i];
            if(map.find(sum)!=map.end())
            {
                result.push_back(map[sum]);
                result.push_back(i);
                return result;
            }

            map[nums[i]] = i;
        }

        return result;
        
    }
};