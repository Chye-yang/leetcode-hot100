#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
        {
            return false;
        }
        int a[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            a[s[i] - 'a']++;
        }
        for (int i = 0; i < t.size(); i++)
        {
            a[t[i]-'a']--;
        }
        for(int i=0;i<=25;i++){
            if(a[i]!=0){
                return false;
            }
        }
        return true;
    }
};