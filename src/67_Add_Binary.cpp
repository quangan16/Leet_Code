#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static string addBinary(string a, string b) {
        
        int temp = 0;
        string result(a.size(), '0');
        
        
        while(a.size()<b.size()){
            a = "0" + a;
        }
        
        while(a.size()>b.size()){
            b = "0" + b;
        }   
        cout<<b;
        for(int i = a.size()-1; i>=0;i--){
            
            result = ((a[i]-'0') + (b[i] - '0') + temp) ;
            // cout<<(result[i]);
            if(result[i]=='2'){
                result[i] = '0';
                temp = 1;
                 
            }else if(result[i]=='3'){
                result[i] = '1';
                temp =1;
            }else{
                temp = 0;
            }
            
            


        }
        if(temp == 1){
            result = "1"+ result;
        }
        return result;
    }
};

int main()
{
	string a = "11";
	string b = "1";
	 Solution::addBinary(a, b);
	cout<<endl;
	return 0;
}