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
        int maxProfit(vector<int>& prices) {
            vector<int> nums;
            for(int i =1;i<prices.size();i++){
                nums.push_back(prices[i]-prices[i-1]);
            }
            int res=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>0){
                    res+=nums[i];
                }
            }
        return res;
        }
    };