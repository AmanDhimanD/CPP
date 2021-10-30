class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int>m;
        int res=0;
        for(int i=0;i<chars.length();i++){
            m[chars[i]]++;
        }
        for(int i=0;i<words.size();i++){
            map<char,int> c;
            int flag=0;
            
            for(int j=0;j<words[i].length();j++){
                c[words[i][j]]++;
            }
            
            for(char x='a'; x<='z';x++){
                if(c[x]>m[x])
                    flag=1;
            }
            
            if(flag==0)
                res+=words[i].length();
        }
        return res;
    }
};
