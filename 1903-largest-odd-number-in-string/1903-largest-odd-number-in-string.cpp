class Solution {
public:
    string largestOddNumber(string num) {
        string res ="";
        int end=-1;
        for( int i=num.length()-1;i >=0;i--){
            if(num[i] == '1'|| num[i] == '3'||num[i] == '5'||num[i] == '7'||num[i] == '9'){
                end=i;
                break;
            }
        }
        int k=0;
        while(num[k]=='0'){
            k++;
        }
        for(int i=k;i<=end;i++){
            res+=num[i];
        }
        return res; 
    }
};