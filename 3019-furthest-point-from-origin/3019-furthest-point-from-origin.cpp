class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=0;
        int count_R=0;
        int count_L=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='R'){
                count_R++;
            }
            if(moves[i]=='L'){
                count_L++;
            }
        }
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='L'){
                n--;
            }
            if(moves[i]=='R'){
                n++;
            }
            if(moves[i]=='_'&&count_R>count_L){
                n++;
            }
            if(moves[i]=='_'&&count_L>count_R){
                n--;
            }
            if(moves[i]=='_'&&count_L==count_R){
                n++;
            }
        }
        int x=abs(n);
        return x;
    }
};