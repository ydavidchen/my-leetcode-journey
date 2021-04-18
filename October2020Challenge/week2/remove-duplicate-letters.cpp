class Solution {
public:
    string removeDuplicateLetters(string s) {
        if(s.empty()) return "";
        
        int cnt[26] = {0};
        
        for (auto c : s) cnt[c - 'a']++;
        
        int pos = 0;
        for (int i = 0; i < s.size(); i++) {
            if(s[i] < s[pos]) pos = i;
            if(--cnt[s[i] - 'a'] == 0) break;
        }
        
        if(pos == s.size()-1) return s.substr(pos);
        
        string s_next;
        for (int i = pos+1; i < s.size(); i++) {
            if(s[i] != s[pos]) s_next.push_back(s[i]);
        }
        
        return s.substr(pos, 1) + removeDuplicateLetters(s_next);
    }
};
