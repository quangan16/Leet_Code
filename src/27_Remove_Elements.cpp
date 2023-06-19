#include <bits/stdc++.h>

using namespace std;

// class Solution
// {
// public:
// 	static int removeElement(vector<int> &nums, int val)
// 	{

// 		int i = 0;
// 		while (nums[i] != val)
// 		{
// 			if (i < nums.size() - 1)
// 			{
// 				i++;
// 			}
// 			else
// 			{
// 				break;
// 			}
// 		}
// 		for (int j = i + 1; j < nums.size(); j++)
// 		{

// 			if (nums[j] != val)
// 			{
// 				nums[i] = nums[j];
// 				if (i < nums.size() - 1)
// 				{
// 					i++;
// 				}
// 			}
// 		}
// 		return i ;
// 	}
// };
class Solution {
public:
    static int removeElement(vector<int>& nums, int val) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[j++]=nums[i];
            }
        }
        return j;        
    }
};

int main()
{
	vector<int> v = {0, 1, 2, 2, 3, 0, 4, 2};
	int val = 2;
	cout << Solution::removeElement(v, val) << endl;
	cout << endl;
	return 0;
}