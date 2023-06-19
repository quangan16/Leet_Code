#include <bits/stdc++.h>

using namespace std;
int myAtoi(string s) {
        int pos = 0;
        double n = 0;
        int isNegativeNum = 1;
        
        while(s[pos] == ' '){
            pos++;
        }

        if(s[pos] == '-'){
            isNegativeNum = -1;
            pos++;
        }else if(s[pos] == '+'){
            isNegativeNum = 1;
            pos++;
        }
        for(int i = pos; i<s.length(); i++){
            
            if(s[i]>='0' && s[i]<='9'){
                n = n*10 +(s[i]-'0');
            }else{
				n = n*isNegativeNum;
                return n;
            }
        
        }
        
        n = (n> INT_MAX)? INT_MAX: n;
        n = (n< INT_MIN)? INT_MIN: n;
        cout<<n;
        return n;
    }
int main()
{
	string s = "  -0012a42";
	cout<<myAtoi(s);
	cout<<endl;
	return 0;
}