class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> my_set(nums.begin(), nums.end());
        int longest = 0;
        int length;

        for(int i : my_set){
            if(!my_set.contains(i - 1)){
                length = 1;
                while(my_set.contains(i + length)){
                    length++;
                }
                if(longest < length){
                    longest = length;
                }
            }

        }
        return longest;
        
    
    }
};
