class Solution {
    public:
        bool isPerfectSquare(int num) {
            int left=0,right=num;
            while(left<=right){
                long long  middle=(left+right)/2;
                long long sq=middle*middle;
                if(sq==num){
                    return true;
                }else if(sq<num){
                    left=middle+1;
                }else{
                    right=middle-1;
                }
            }
            return false;
        }
    };