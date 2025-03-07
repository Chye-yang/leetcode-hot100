#include <iostream>
#include <string>
#include <vector>
#include <climits> 
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        for(int i=0;i<nums.size();i++){
            map.insert({nums[i],i});
        }

        for(int i=0;i<nums.size();i++){

            auto it=map.find(target-nums[i]);

            if(it!=map.end()){
                return {i,it.second};
            }

        }
        return{};
    }
};