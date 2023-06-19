#include <bits/stdc++.h>

using namespace std;


void moveZeroes(vector<int>& nums) {
        int pos = 0;
        vector<int>::iterator iter;
        while(iter != nums.end()){
            if(*iter != 0){
                nums[pos] = (int)*iter;
                pos++;
            }
            iter++;
        }
        for(int i = pos;i < nums.size();i++){
            nums[pos] = 0;
        }
    }

int main()
{
	vector<int> nums = {0,1,0,3,12};
	moveZeroes(nums);
	vector<int>::iterator it;
	for(it=nums.begin(); it<nums.end();it++){
		cout<<*it<<" ";
	}
	cout<<"lol";
	
	cout<<endl;
	return 0;
}

