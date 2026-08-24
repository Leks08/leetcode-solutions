class Solution {
public:
    double myPow(double x, int n) {
        // while(n>=0){
        //     x=x*x;
        //     n--;
        // }
        // return x;
        // if(n==0) return 1;
        // if(n==1) return x;
        // if(n>0){
        //     return x*myPow(x,n-1);
        // }
        // else{
        //     return (1/x)*myPow(x,n+1);
        // }
        if(n==0) return 1;
        if(n==1) return x;
        if(n<0){
            return 1/myPow(x,-(n+1))/x;
        }
        double half= myPow(x,n/2);
        if(n%2==0){
           return half*half;
        }
        else{
            return x*half*half;
        }
    }
};