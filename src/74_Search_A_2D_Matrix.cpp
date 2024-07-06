#include "..\globalInclude.h"

using namespace std;

class Solution {
public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int colSize = matrix.size();
        int rowSize = matrix[0].size();
        int botIndex = colSize - 1, topIndex = 0;
         int rowPivot = -1;
        while(topIndex <= botIndex){
            rowPivot = topIndex + (botIndex - topIndex)/ 2;
            if(target < matrix[rowPivot][0]) botIndex = rowPivot - 1;
            else if(target > matrix[rowPivot+1][0]) topIndex = rowPivot + 1;
            else break;
        }

        if(topIndex > botIndex) return false;
        else{
             rowPivot = topIndex + (botIndex - topIndex)/ 2;
        }
         if(BinarySearch(matrix[rowPivot], 0, rowSize - 1, target) != -1){
            return true;
        }

        return false;


    }
   

    int BinarySearch(vector<int> & matrix,int startIndex, int endIndex, int target){
        while(startIndex <= endIndex){
             int pivot = startIndex + (endIndex - startIndex)/2;
            if(matrix[pivot] == target){
                return pivot;
            }
            else if(matrix[pivot] < target){
                startIndex = pivot + 1;
            }
            else if(matrix[pivot] > target){
                endIndex = pivot - 1;
            }
        }
        return -1;
    }
};
   

int main(){
    Solution newSolution;
    vector<vector<int>> input = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<newSolution.searchMatrix(input, 3);
}