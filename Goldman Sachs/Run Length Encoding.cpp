string encode(string src)
{     
  //Your code here 
   string ans;
  int c=1;
  
  ans.push_back(src[0]);
  
  for(int i=1; i<src.length(); i++){
      if(src[i]==src[i-1]){
          c++;
      }
      else{
          ans+= to_string(c); 
          ans.push_back(src[i]);
          c=1;
      }
  }
  
  ans+= to_string(c);
  
  return ans;
}   