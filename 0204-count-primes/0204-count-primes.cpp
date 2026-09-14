class Solution {
public:
    int countPrimes(int n) {
        vector<bool> ans(n+1,true);
        if(n<=2){
           return 0; 
        }
        ans[0]=false;
        ans[1]=false;

        for(int i=4;i<n;i+=2){
            ans[i]=false;
        }
      

        for (int i = 3; i*i<n; i+=2) {
            if (ans[i] == true) {

                for (int j = i * i; j <n; j += 2*i) {
                    ans[j]=false;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(ans[i]){
                count++;
            }
        }
        return count;
    }
};