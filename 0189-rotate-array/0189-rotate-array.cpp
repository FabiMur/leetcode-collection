class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        if(nums.size() == 0 || nums.size()== 0){
            return;
        }




        vector<int> last(nums.end()-k, nums.end());

        for(int i = nums.size() - 1; i >= k ; --i){
            nums[i] = nums[i-k];
        }

        for(int i = 0; i < k; i++){
            nums[i] = last[i];
        }
    }
};