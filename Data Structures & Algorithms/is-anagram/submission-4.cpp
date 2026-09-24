class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;
        for(auto& c : s){
            s_map[c]++;
        }
        for(auto& c : t){
            t_map[c]++;
        }
        for(auto& c : s){
            if(s_map.count(c) && t_map.count(c)){
                int s_map_count = s_map.find(c)->second;
                int t_map_count = t_map.find(c)->second;

                if(t_map_count != s_map_count){
                    return false;
                }
            }
            else{
                return false;
            }
            
        }
        return true;
    }
};
