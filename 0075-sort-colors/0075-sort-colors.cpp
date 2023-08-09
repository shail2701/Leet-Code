class Solution {
public:
    void sortColors(vector<int>& nums) {

        int count1 = 0;
        int count2 = 0;
        int count3 = 0;

        for(int i=0;i<nums.size();i++) {
            if(nums[i] == 0) {
                count1++;
            } else if(nums[i] == 1) {
                count2++;
            } else {
                count3++;
            }
        }

        int index = 0;
        int reCount1 = 0;
        int reCount2 = 0;
        int reCount3 = 0;

        while(reCount1 < count1) {
            nums[index++] = 0;
            reCount1++; 
        }

        while(reCount2 < count2) {
            nums[index++] = 1;
            reCount2++; 
        }

        while(reCount3 < count3) {
            nums[index++] = 2;
            reCount3++; 
        }
        
    }
};