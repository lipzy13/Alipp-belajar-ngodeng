class Solution {
public:
    void reverseString(vector<char>& s) {
       int i = 0;
       int j = s.size() - 1;
       solve(s, i, j);
    }
    void solve(vector<char>& s, int i, int j){
        if(i >= j) return;
        swap(s[i],s[j]);
        solve(s, ++i, --j);
    }
};