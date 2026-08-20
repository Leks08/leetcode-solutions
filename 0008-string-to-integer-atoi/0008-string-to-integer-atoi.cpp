class Solution {
public:
    int mini= INT_MIN;
    int maxi = INT_MAX;
    int helper(const string &s,int i,long long num,int sign){
        if( i>=s.size() || !isdigit(s[i])){
            return (int)(sign*num);
        }
        num=num*10 +(s[i]- '0');
        if(sign*num <= mini) return mini;
        if(sign*num >= maxi) return maxi;

        return helper(s,i+1,num,sign);
    }
    int myAtoi(string s) {
        int i=0;
        while(i< s.length() && s[i]==' '){
            i++;
        }
        int sign =1;
        if( i< s.size() && (s[i]=='+' ||s[i]=='-') ){
            if(s[i]=='+'){
                sign= 1;
            }
            else{
                sign=-1;
            }
            i++;
        }
        return helper(s,i,0,sign);
    }
};