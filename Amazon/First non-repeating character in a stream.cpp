string FirstNonRepeating(string A){
		    // Code here
		    queue<char>Q;
		    int B[26];
		    
		    for(int i=0;i<26;i++){
		        B[i]=0;
		    }
		    
		    string ans="";
		    
		    for(int i=0;i<A.length();i++){
		        B[A[i]-'a']++;
		        Q.push(A[i]);
		        while(!Q.empty()){
		            if(B[Q.front()-'a']>1){
		                Q.pop();
		            }
		            else{
		              //  cout<<Q.front();
		                ans+=Q.front();
		                break;
		            }
		        }
		        if(Q.empty()){
		            ans+='#';
		        }
		    }
		    return ans;
		}