#include <iostream>
#include<string>
 
 using namespace std;
 
bool isPalindrome(int x) {
        bool isNegative = false;
        string s;
        string temp;
        if(x<0){
            return false;
        }

        s = to_string(x);
        temp = s;

        for(int i = 0; i<s.length()/2;i++){
            swap(s[i], s[s.length()-i-1]);
        }
        if(temp == s){
            return true;
        }
        cout<<s<<endl;
		
		cout<<temp;
        
        return false;
    }

 int main()
 {
	isPalindrome(121);
	cout<<endl;
	return 0;
 }
 
 