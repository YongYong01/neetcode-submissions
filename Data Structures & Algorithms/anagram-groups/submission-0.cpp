class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> seen;

        for(auto s : strs){
            string key = s;
            sort(key.begin(), key.end());

            if(seen.find(key) == seen.end()){
                seen[key] = {s};  // Create new vector
            }
            else{
                seen[key].push_back(s);  // Add to existing vector
            }
        }

        vector<vector<string>> result;

        for(auto entry : seen){
            result.push_back(entry.second);
        }

        return result;
    }
};
