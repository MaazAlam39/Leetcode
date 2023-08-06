
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal)return true;
        if(s.size()!=goal.size()) return false;
        queue<char>a,b;
        for(int i=0;i<s.size();i++){
            a.push(s[i]);
        }
        for(int i=0;i<goal.size();i++){
            b.push(goal[i]);
        }
        int k=goal.size()-1;
        while(k!=0){
            char ch=b.front();
            b.pop();
            b.push(ch);
            if(a==b){return true;}
            k--;
        }
        return false;
        

        
    }
};