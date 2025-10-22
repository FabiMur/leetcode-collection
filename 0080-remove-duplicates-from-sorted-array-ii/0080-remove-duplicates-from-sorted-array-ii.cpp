class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if ( nums.size() <= 2) {
            return nums.size();
        }

        int write_index = 2;
        int read_index = 2;

        while(read_index < nums.size()){
            if (nums[read_index] != nums[write_index- 2]) {
                nums[write_index] = nums[read_index];
                write_index = write_index + 1;
            }

            read_index++;
        }
        return write_index;
    }
};