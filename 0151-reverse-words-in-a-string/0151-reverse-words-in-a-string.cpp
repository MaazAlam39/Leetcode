class Solution {
public:
    string reverseWords(string s) {
        while(s.size() > 0 && s.back() == ' ') s.pop_back();
        reverse(begin(s), end(s));
        while(s.size() > 0 && s.back() == ' ') s.pop_back();
        string results, prev;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                while (i < s.size() && s[i] == ' ') ++i;
                --i;
                reverse(begin(prev), end(prev));
                results += prev + ' ';
                prev = "";
            } else {
                prev += s[i];
            }
        }
        if (prev.size() > 0) {
            reverse(begin(prev), end(prev));
            results += prev;
        }
        return results;
    }
};