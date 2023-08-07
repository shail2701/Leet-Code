class Solution {
public:
    int search(vector<int>& nums, int target) {

        int beg = 0;
        int end = nums.size()-1;

        while(beg <= end) {

            int mid = (beg+end)/2;
            if(nums[mid] == target) {
                return mid;
            }

            // check in the first half
            else if(nums[mid] >= nums[beg]) {
                if(target >= nums[beg] && target <= nums[mid]) {
                    end = mid-1;
                }
                else {
                    beg = mid+1;
                }
            }

            // check in the second half
            else {
                if(target >= nums[mid] && target <= nums[end]) {
                    beg = mid+1;
                }
                else {
                    end = mid-1;
                }
            }
        }

        return -1;
        
    }
};