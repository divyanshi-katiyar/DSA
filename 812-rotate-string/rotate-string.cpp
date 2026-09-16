class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        int n=s.length();
        //Try every possible combination
        if((s+s).find(goal)!=string::npos){
            return true;
        }
        return false;
    }
};