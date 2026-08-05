class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        reverse(s.begin(),s.end());
        string ans="";
        for(int j=0;j<n;j++){
        string word ="";
        while(j<n && s[j]!=' '){
            word=word+s[j];
            j++;

        }
        reverse(word.begin(),word.end());
        if(word.length() >0){
            ans += " "+ word;}
            

        }
   return ans.substr(1); }
};