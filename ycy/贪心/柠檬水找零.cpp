#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        bool lemonadeChange(vector<int>& bills) {
            int n=bills.size();
            int m5=0;
            int m10=0;
            for(int i=0;i<n;i++){
                if(bills[i]==5){
                    m5++;
                }else if(bills[i]==10){
                    if(m5>0){
                        m5--;
                        m10++;
                    }else{
                        return false;
                    }
                }else if(bills[i]==20){
                    if(m10>=1&&m5>=1){
                        m10--;
                        m5--;
                    }else if(m10==0&&m5>=2){
                        m5-=2;
                    }else{
                        return false;
                    }
                }
            }
            return true;

        }
    };