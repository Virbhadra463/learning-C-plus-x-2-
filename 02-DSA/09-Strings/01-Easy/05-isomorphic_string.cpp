class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char, char> stringS;
        unordered_map<char, char> stringT;

        for (int i = 0; i < s.size(); i++) {

            // s -> t
            if (stringS.find(s[i]) == stringS.end()) { // if not then add
                stringS[s[i]] = t[i];
            } else if (stringS[s[i]] !=
                       t[i]) { // if it is there and it is not equal to other
                               // string then false
                return false;
            }
            // t -> s
            if (stringT.find(t[i]) == stringT.end()) {
                stringT[t[i]] = s[i];
            } else if (stringT[t[i]] != s[i]) {
                return false;
            }
        }
        return true;
    }
};