class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        vector<char> c;
        for(int i=0;i<n;i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            c.push_back(s[i]);
            else
            {
                if(c.empty())
                return false;
                char a=c.back();
                if((s[i]==')'&&a=='(')||(s[i]==']'&&a=='[')||(s[i]=='}'&&a=='{'))
                c.pop_back();
                else
                return false;
            }
        }
        if(c.empty())
        return true;
        else
        return false;
    }
};


