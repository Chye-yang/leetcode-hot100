#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int fast=0,slow=1;
            int flag=-9999;
            for(fast=1;fast<nums.size();fast++){
                if(!nums[fast]==nums[fast-1]){
                    nums[slow]=nums[fast];
                    slow++;
                }
            }
        }
    };