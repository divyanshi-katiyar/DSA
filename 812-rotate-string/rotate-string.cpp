class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        int n=s.length();
        //Try every possible combination
        for(int count=1;count<=n;count++){
            rotate(s.begin(),s.begin()+1,s.end());
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};