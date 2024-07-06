#include "..\globalInclude.h"

using namespace std;

class Solution{
public:


    string encode(vector<string>& strs) {
        string res = "";
        for(auto item : strs){
            res = res + item+" ";
        }
        cout<<res;
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string temp = "";
        for(char c: s){
            if(c != ' '){
                temp +=c;
            }
            else{
                res.push_back(temp);
                 temp = "";
            }
               
                
           
        }
        return res;
    }

};
int main(){
    Solution newSolution;
    vector<string> input = {"neet","code","love","you"};
    string temp = newSolution.encode(input);
    for(auto item : newSolution.decode(temp)){
        cout<<item;
    }
}