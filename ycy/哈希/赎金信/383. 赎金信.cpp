#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;
//solution1
class Solution2 {
    public:
        bool canConstruct(string ransomNote, string magazine) {
            unordered_map<char,int> map1;
            unordered_map<char,int> map2;
            for(char a:magazine){
                map1[a]++;
            }
            for(char b:ransomNote){
                map2[b]++;
            }
            for(auto it2:map2){
                if(map1.find(it2.first)==map1.end()||map1[it2.first]<it2.second){
                    return false;
                }
            }
            return true;
        }
    };
//solution2
class Solution {
    public:
        bool canConstruct(string ransomNote, string magazine) {
            unordered_map<char,int> map1;
            unordered_map<char,int> map2;
            for(char a:magazine){
                map1[a]++;
            }
            for(char b:ransomNote){
                if(map1.find(b)==map1.end()||map1[b]==0){
                    return false;
                }else{
                    map1[b]--;
                }
            }
            return true;
        }
    };