#include "..\globalInclude.h"

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int maxLeft = 0;
        int maxRight = 0;
        int first = 0, second = height.size() -1;
        int res = 0;
        while(first < second){
            if(maxLeft <= maxRight){
                res += clamp(maxLeft - height[first], 0, 10000);
                if(maxLeft < height[first]) maxLeft = height[first];
                ++first;
            }
            else{
                res += clamp(maxRight - height[second], 0, 10000);
                if(maxRight < height[second]) maxRight = height[second];
                --second;
            }
        }
        return res;
    }
};

int main(){
    Solution newSolution;
    vector<int> heights = {4,2,0,3,2,5}; // Create a vector object
    newSolution.trap(heights); // Pass the vector by lvalue reference
}