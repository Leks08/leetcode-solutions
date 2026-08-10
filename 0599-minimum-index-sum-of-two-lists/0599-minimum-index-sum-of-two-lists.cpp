class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n1= list1.size();
        int n2= list2.size();
        int k=0;
        vector<string>lis;
        int mini=2000;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(list1[i]==list2[j]){
                    int min=i+j;
                    if(min<mini){
                        mini=min;
                        lis.clear();
                        lis.push_back(list1[i]);
                    }
                    else if(min==mini){
                        lis.push_back(list1[i]);
                    }
                }
            }
        }
        return lis;
    }
};