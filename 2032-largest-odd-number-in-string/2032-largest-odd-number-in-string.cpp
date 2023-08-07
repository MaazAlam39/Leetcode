class Solution {
public:
    string largestOddNumber(string num) {
        // char ch;
        // int last=-1;
        // for(int i=0;i<num.length();i++){
        //     if(num[i]%2!=0) last=i;
        // }
        // if(last!=-1){
        //     return num.substr(0,last+1);

        // }
        // else
        // return "";
        int n=num.size();
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2 !=0)return num.substr(0,i+1);
        }
        return "";
    }
};