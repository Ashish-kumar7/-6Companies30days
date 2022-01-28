class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1){
            return  INT_MAX;
        }
        long long int dvd =abs(dividend);
        long long int dvs =abs(divisor);
       long long  int ans =0;
        int sign = (dividend > 0) ^ ( divisor > 0) ? -1 : 1;
        
        
        while(dvd>=dvs){
           long long  int temp=dvs;
           long long int m=1;
            while(temp<<1  <= dvd){
                temp=temp<<1;
                m<<=1;  
            }
            dvd=dvd-temp;
            ans=ans+m;     
        }
        return sign * ans;
    }
};