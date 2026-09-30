class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, int> seen;
        seen.reserve(strs.size());
        for(const string& str : strs){
            string s = str;
            sort(s.begin(), s.end());

            auto [it, inserted] = seen.try_emplace(s, result.size());

            if(inserted){
                result.emplace_back();
            }
            result[it -> second].push_back(str);
        }
        return result;
    }
};
