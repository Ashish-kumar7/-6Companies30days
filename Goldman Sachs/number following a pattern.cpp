string printMinNumberForPattern(string S){
        // code here 
        stack<int>stk;
        
        int i=0;
        
        int num=1;
        string str;
        
        
        for(int i=0;i<S.length();i++){
            if(S[i]=='D'){
                stk.push(num);
                num++;
            }
            else{
                stk.push(num);
                num++;
                while(!stk.empty()){
                   str+=to_string(stk.top());
                   stk.pop();
                }
            }
        }
        
        stk.push(num);
            while(!stk.empty()){
                   str+=to_string(stk.top());
                   stk.pop();
            }
        
        
        
        return str;
    }