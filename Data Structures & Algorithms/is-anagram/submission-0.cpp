class Solution {
    map<int,int>map1;
    map<int,int>map2;
public:
    bool isAnagram(string s, string t) {
        if(s.length()==t.length())
        {
          for(int i = 0;i<s.length();i++)
          {
            map1[s[i]]++;
            map2[t[i]]++;
          }
          for(char ch:s)
          {
               if(map1[ch]!=map2[ch])
                return false;
                else
                continue;
          }
          return true;

        }
        else
        return false;
    }
};
