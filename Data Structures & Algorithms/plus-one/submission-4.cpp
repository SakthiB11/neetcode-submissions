class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        int n = a.size();
        a[n-1] +=1;
        for(int i = n -1;i>0;i--){
            if(a[i]>9){
                a[i]=0;
                a[i-1]+=1;
            }
        }
        if(a[0]>9){
            a[0]=0;
            a.insert(a.begin(),1);
        }
        return a;
    }
};
