#include <bits/stdc++.h>

using namespace std;

// int binarySearch(vector<int>& numbers, int value, int startPos){
//         int i= startPos, j = numbers.size(), pivot;
//         while(i<j){
//             pivot = (i+j)/2;
//             if(numbers[pivot] == value){
//                 return pivot;
//             }else if(numbers[pivot] < value){
//                 i = pivot +1 ;
//             }else if(numbers[pivot] >value){
//                 j = pivot-1;
//             }
//         }
//         return 0;
//     }

// vector<int> twoSum(vector<int>& numbers, int target) {
//         vector<int> res;
//         int value = 0;
//         for(int i = 0; i < numbers.size()-1; i++){
//             value = target - numbers[i];
//             int temp = binarySearch(numbers, value, i+1);
//             if(temp){
//                 res.push_back(i+1);
//                 res.push_back(temp+1);
//                 return res;
//             }
            
//         }
//         return res;
//     }

    vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> res = {};
    int i = 0, j = numbers.size()-1;
    while(i<j){
        if(numbers[i] + numbers[j] == target){
            res.push_back(i);
            res.push_back(j);
        }
        else if(numbers[i] + numbers[j] < target){
            i++;
        }
        else if(numbers[i] + numbers[j] > target){
            j--;
        }
    }
    
    return res;
}

int main()
{
	vector<int> v = {2,7,11,15};
	int target = 9;
	vector<int> res = twoSum(v, target);
	for(int i: res){
		cout<<i;
	}
	cout<<"lol";
	cout<<endl;
	return 0;
}