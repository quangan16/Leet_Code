#include<string>
#include<iostream>

using namespace std;

class Solution {
public:
    static int lengthOfLastWord(string s) {
        
        int i = s.length()-1;
        int leng = 0;
       
        while(s[i] == ' ' && i>=0 ) {
            i--;
        } 
        while(s[i] != ' ' && i>=0 ){
            leng++;
            i--;
       }
        
    return leng;
    }
    
    
};

	int main(){
        string s = "a";
        cout<<Solution::lengthOfLastWord(s);
        return 0;
    }