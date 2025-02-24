#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int fast=0,slow=0;
            for(fast=0;fast<nums.size();fast++){

                if( nums[fast]!=0){
                    nums[slow]=nums[fast];
                    slow++;
                }
                
            }
            for(int i=slow;i<nums.size();i++){
                nums[i]=0;
            }     
        }
    };