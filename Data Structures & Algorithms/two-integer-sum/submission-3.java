class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        int left = 0, right = 1;

        while(nums[left] + nums[right] != target){
            if(right < nums.length -1){
                right++;
            }
            else{
                left++;
                right = left + 1;
            }
        }
        
        return new int[] {left, right};

    }
}
