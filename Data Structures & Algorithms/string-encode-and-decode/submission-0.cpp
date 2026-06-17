class Solution {
public:

 string encode(vector<string>& strs) {
    string s = "";
    for(int i = 0; i < strs.size(); i++){
        s += strs[i];
       s+='.';
    }
    return s;
}

vector<string> decode(string s) {
    vector<string> dec;
    string elem = "";

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.') {
            dec.push_back(elem);
            elem = "";
        } else {
            elem.push_back(s[i]);
        }
    }

    return dec;
}
};
