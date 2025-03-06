#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int,int> map;
        vector<int> res;
        for(auto num : nums1){
            if(map.find(nums1)!=map.end()){
                map[num]++;
            }
        }

        for(auto num:nums2){
            if(map.find(num)!=nums2){
                if(map[num]>0){
                    map[num]--;
                    res.insert(num);
                }
            }
        }
  
        return res;
    }
};