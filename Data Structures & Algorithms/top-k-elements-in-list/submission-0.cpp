class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> num_freq;
        vector<int> result;
        int highest = 0;
        num_freq.reserve(nums.size());
        for(int& num : nums){
            num_freq[num]++;
        }
        while(result.size() < k){
            highest = 0;
            int highest_key = 0;
            for(const auto& [key, value] : num_freq){
                if(value >= highest){
                    highest = value;
                    highest_key = key;
                }
                
            }
            result.push_back(highest_key);
            num_freq[highest_key] = 0;
        }
        return result;
    }
};
