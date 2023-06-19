#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static int strStr(string haystack, string needle) {
        int m = haystack.length();
        int n = needle.length();
        int j = 0;
        int i = 0;
       for(; i<=m-n;i++){
           if(haystack[i] != needle[j]){
               continue;
           }
           else{
			
               for(; j < n;j++){
				
               if(haystack[i]!=needle[j]){
				
                   break;
               }else if(j == n){
           			return i;
       			}
			   else{
				i++;
			   }
			   
           }
           
           }
           
       }
       
       return -1;
    }
};

int main()
{
	// string haystack = "sadbutsad";
	// string needle = "sad";
	// Solution::strStr( haystack,  needle);
	// cout<<endl;
    
	return 0;
}