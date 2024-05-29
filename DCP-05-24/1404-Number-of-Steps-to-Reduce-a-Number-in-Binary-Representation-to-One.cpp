class Solution {
private:
    string addOne(string s){
        int i=s.length()-1;
        while(i>=0){
            if(s[i]=='0'){
                s[i]='1';
                break;
            }
            else
                s[i]='0';
            i--;
        }
        if(i==-1&&s[i+1]=='0')
            s=s.insert(0,"1");
        return s;
    }
public:
    int numSteps(string s) {
        int steps=0;
        while(s.size()>1){
            if(s[s.length()-1]=='0'){
                s=s.substr(0,s.size()-1);
            }
            else{
                s=addOne(s);
            }
            steps++;
        }
        return steps;
    }
};