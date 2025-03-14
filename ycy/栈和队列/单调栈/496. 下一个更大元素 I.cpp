#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            vector<int> res(nums1.size(),-1);
            for(int i=0;i<nums1.size();i++){
                if(auto it=nums2.find(nums1[i])!=nums2.end()){
                    for(int j=it+1;j<nums2.size();j++){
                        if(nums2[j]>nums1[i]){
                            res[i]=j;
                        }
                    }
                }
            }
            return res;
        }
    };