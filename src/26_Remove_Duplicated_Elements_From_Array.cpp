#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 1;
		for(i; i<nums.size()-1;i++){
				if(nums[i]==nums[j] ){
						j++;
				}else{
						
					nums[i] = nums[j];
				}
        }
        return i;
    }
};

int main()
{
	vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
	cout<<Solution::removeDuplicates(nums);
	cout<<endl;
	return 0;
}