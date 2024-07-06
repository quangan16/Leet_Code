#include "..\globalInclude.h"

using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[nums[0]];
        
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        
        slow = 0;
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};

int main(){
    Solution solution;
    std::vector<int> nums = {3,1,3,4,2};
    cout<<solution.findDuplicate(nums);
}