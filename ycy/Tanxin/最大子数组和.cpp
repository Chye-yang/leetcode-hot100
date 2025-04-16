#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            
            int res=INT_MIN;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                sum+=nums[i];
                res=max(res,sum);
                if(sum>=0){
                    res=max(res,sum);
                }else{
                    sum=0;
                }


            }
            return res;


        }
    };