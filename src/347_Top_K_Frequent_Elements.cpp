#include<iostream>
#include<vector>
#include<unordered_map> // Add missing include directive
#include<map>
using namespace std;



class Solution {
public:
   vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> frequency;
        map<int, vector<int>, std::greater<int>> reverse;
        for(int i : nums){
            frequency[i]++;
        }
        for(pair<int, int> p : frequency){
            reverse[p.second].push_back(p.first);
            
        }
        for(pair<int, vector<int>> p : reverse){
            res.insert(res.end(), p.second.begin(), p.second.end());
           
        }
        res.resize(k);
        return res;
        // std::max_element
    }
};