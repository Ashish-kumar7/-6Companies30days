string amendSentence (string s)
    {
        // your code here
        string ans="";
        
        for(int i=0;i<s.length();i++){
            
            if(i==0 && (s[i]-'A'>=0 && s[i]-'A'<=26)){
                char temp=tolower(s[0]);
                ans+=temp;
            }
            else if(s[i]-'A'>=0 && s[i]-'A'<=26){
                ans+=" ";
                char temp=tolower(s[i]);
                ans+=temp;
            }
            
            else if(s[i]-'a'>=0 && s[i]-'a'<=26){
                ans+=s[i];
            }
        }
        
        return ans;
    }