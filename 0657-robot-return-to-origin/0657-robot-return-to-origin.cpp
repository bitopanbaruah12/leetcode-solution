class Solution {
public:
    bool judgeCircle(string moves) {
        int count_R=0;
        int count_L=0;
        int count_U=0;
        int count_D=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='R'){
                count_R++;
            }
            if(moves[i]=='L'){
                count_L++;
            }
            if(moves[i]=='U'){
                count_U++;
            }
            if(moves[i]=='D'){
                count_D++;
            }

        }
        if(count_R==count_L&&count_U==count_D){
            return true;

        }
        return false;
    }
};