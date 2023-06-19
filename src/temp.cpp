#include <bits/stdc++.h>

using namespace std;

void reverse(string &c){
        for(int i = 0; i<c.size()/2; i++){
            swap(c[i], c[c.size()-i-1]);
        }
    }

string reverseWords(string s) {
        string res;
        string temp;
        for(int i = 0; i<s.length(); i++){
            if(s[i] != ' '){
                temp.push_back(s[i]);
                
            }
            else if(s[i] == ' '|| s[i] == s[s.length()]){
                reverse(temp);
                res += temp + " ";
                temp = "";
                
            }
            

        }

        return res;
    }
    

int main()
{
	string s;
	s = "Let's take LeetCode contest";
	cout<<reverseWords(s);
	cout<<endl;
	return 0;
}