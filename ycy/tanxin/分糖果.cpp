#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

// class Solution {
//     public:
//         int candy(vector<int>& ratings) {
//             int n= ratings.size();
//             vector<int> res(n,1);
//             if(ratings[0]>ratings[1]){
//                 res[0]++;
//             }
//             if(ratings[n-1]>ratings[n-2]){
//                 res[n-1]++;
//             }
//             for(int i=1;i<n-1;i++){
//                 if(ratings[i]>ratings[i-1] &&!(ratings[i]>ratings[i+1])){
//                     res[i]=res[i-1]+1;
//                 }
//             }

//             for(int i=n-2;i>=1;i--){
//                 if(!(ratings[i]>ratings[i-1])&&ratings[i]>ratings[i+1]){
//                     res[i]=res[i+1]+1;
//                 }
//             }

//             for(int i=1;i<n-1;i++){
//                 if(ratings[i]>ratings[i-1] &&ratings[i]>ratings[i+1]){
//                     res[i]=max(res[i-1],res[i+1])+1;
//                 }
//             }

//             for(int i=1;i<n-1;i++){
//                 if(ratings[i]>ratings[i-1] &&ratings[i]>ratings[i+1]){
//                     res[i]=max(res[i-1],res[i+1])+1;
//                 }
//             }

//             int sum=0;
//             for(auto i:res){
//                 sum+=i;
//             }
//         return sum;
//         }
//     };

class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        vector<int> res;
        int n = ratings.size();
        for (int i = 1; i < n; i++)
        {
            if (ratings[i] > ratings[i - 1])
            {
                res[i]=res[i-1]+1;
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (ratings[i] > ratings[i + 1])
            {
                res[i] = max(res[i], res[i + 1] + 1);
            }
        }
        int sum = 0;
        for (auto i : res)
        {
            sum += i;
        }
        return sum;
    }
};