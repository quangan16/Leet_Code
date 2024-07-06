#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<sstream>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> map;

        for (int i = 0; i < strs.size(); i++) {
            map[GetSignature(strs[i])].push_back(strs[i]);
        }
        for (auto i : map) {
            res.push_back(i.second);
        }
        return res;
    }

    string GetSignature(string str) {
        vector<int> count(26, 0);

        for (char i : str) {
            count[i - 'a']++;
        }
        stringstream ss;
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                ss << (char)(i + 'a') << count[i];
            }
        }

        return ss.str();
    }

    
};

int main(){
    Solution newSolution;
    vector<string> v = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> temp = newSolution.groupAnagrams(v);
    for(auto i : temp){
        cout<<"[";
        for(auto j : i){
            cout<<j<<",";
        }
        cout<<"]";
    }

}


