#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {

            vector<int> result(nums.size(),0);
            int pr=nums.size()-1;
            int fr=0,ta=pr;
            for(int i=pr;i>=0;i--){
                if(nums[fr]*nums[fr]>nums[ta]*nums[ta]){
                    result[i]=nums[fr]*nums[fr];
                    fr++;
                }else{
                    result[i]=nums[ta]*nums[ta];
                    ta--;
                }
            }
            return result;

        }
    };