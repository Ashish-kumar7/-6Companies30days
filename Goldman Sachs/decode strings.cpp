string solve(string & s, int & i){
        string result;
        while(i<s.length() && s[i]!=']'){
            if(isdigit(s[i])){
                int k=0;
                while(i<s.length() && isdigit(s[i])){
                    k=k*10 + (s[i]-'0');
                    i++;
                }
                i++;
                string str=solve(s,i);
                while(k--){
                    result+=str;
                }
                i++;
            }else{
                result+=s[i];
                i++;
            }
            
        }
        return result;
    }
    
    string decodedString(string s){
        int i=0;
        return solve(s,i);
    }