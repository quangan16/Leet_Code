#include "..\globalInclude.h"

using namespace std;

class Solution{
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int currentRow = 0;
        int currentCol = 0;
        unordered_set<int> rowManager;
        unordered_set<int> columnManager;
        unordered_set<int> boxManager;
        //Check rows
        for(int i = 0 ;  i < board.size(); i++){
            for(int j =  0; j < board[i].size(); j++){
                if(isalnum(board[i][j])){
                     if(rowManager.find((board[i][j] - '0')* 10  + j) != rowManager.end()){
                        return false;
                    }else{
                        rowManager.insert((board[i][j] - '0') * 10 + j); 
                    }
                    if(columnManager.find((board[i][j] - '0') * 10  + i) != columnManager.end()){
                        return false;
                    }else{
                        columnManager.insert((board[i][j] - '0') * 10  + i);
                    }
                    if(boxManager.find((board[i][j] - '0') * 100 + (j / 3) * 10 + (i/3) ) != boxManager.end()){
                        return false;
                    }else{
                        boxManager.insert((board[i][j] - '0') * 100 + (j / 3) * 10 + (i/3) );
                    }
                }
               
            }
        }
        return true;
    }
};
int main(){
    Solution newSolution;
     std::vector<std::vector<char>> sudokuBoard = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    cout<<newSolution.isValidSudoku(sudokuBoard);
}  
