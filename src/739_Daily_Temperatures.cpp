#include "..\globalInclude.h"

using namespace std;


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> monoDecStack;
        vector<int> res(temperatures.size(), 0);
        pair<int, int> p;
        for(int i = 0 ; i < temperatures.size(); i++){
            
           
            while(!monoDecStack.empty() &&  temperatures[i] > monoDecStack.top().first){
                int offset = i - monoDecStack.top().second;
                res[i - offset] = offset;
                monoDecStack.pop();
            }
            monoDecStack.push({temperatures[i], i});
            

        }
        return res;
    }
};

int main(){
    Solution newSolution;
    vector<int> temeratures = {73,74,75,71,69,72,76,73};
    for(auto i: newSolution.dailyTemperatures(temeratures)){
        cout<<i<<" ";
    }
}