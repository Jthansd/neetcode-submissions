class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> num_count;
        for(auto& num : nums){
            if(num_count[num]++ == 1){
                return true;
            }
        }
        return false;
    }
};