#include <iostream>
#include <vector>
#include <math>
#include <stdio.h>

using namespace std;

class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int fast=0,slow=0;
            for(fast=0;fast<nums.size();fast++){

                if(nums[fast]!=val){
                    nums[slow]=nums[fast];
                    slow++;
                }
            }
            return slow;
        }
    };