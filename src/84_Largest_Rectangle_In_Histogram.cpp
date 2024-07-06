#include "..\globalInclude.h"

using namespace std;

class Solution{
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.size()  == 1){
            return heights[0];
        }

        stack<pair<int, int>> stack;
        int res = 0;
        int maxLeftIdx = 0;
        stack.push({maxLeftIdx, heights[0]});
        for(int i = 1; i < heights.size(); ++i){
            while(stack.empty() == false && heights[i] < stack.top().second){
                res = max(res, stack.top().second * (i - stack.top().first));
                stack.pop();
            }
            if(stack.empty() == true || heights[i] > stack.top().second){
                stack.push({i, heights[i]});
            }
        }
        while(stack.empty() == false){
            res = max(res, (int)(stack.top().second * (heights.size() - stack.top().first)));
            stack.pop();
        }
        return res;
    }
};
int main(){
    vector<int> heights = {2,1,5,6,2,3};
    Solution newSolution;
    cout<<newSolution.largestRectangleArea(heights);
}