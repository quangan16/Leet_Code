#include "..\globalInclude.h"

using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int leftIdx = *min_element(piles.begin(), piles.end()), rightIdx = *max_element(piles.begin(), piles.end()) ;
        int pivot = -1;
        int res =   rightIdx;
        while(leftIdx <= rightIdx){
        
            pivot = leftIdx + (rightIdx- leftIdx)/2;
            if(Calculate(piles, pivot, h) > h){
                leftIdx = pivot + 1;
            }
            else if(Calculate(piles, pivot, h)< h){
                res = min(res, pivot);
                rightIdx = pivot - 1;
            }
            else{break;}
        }
         pivot = leftIdx + (rightIdx- leftIdx)/2;
        return res;
    }

    int Calculate( vector<int> &piles, int pivot, int h){
        int res = 0;
        for(int i = 0; i < piles.size(); i++){
            if(res > h) return res;
            else{
                res += std::ceil(((float)piles[i] / pivot));
            }
        }
        return res;
    }
};
int main(){
    Solution newSolution;
    vector<int> piles = {3,6,7,11};
    cout<<newSolution.minEatingSpeed(piles, 8);
    // cout<<ceil(((float)4/3));

}