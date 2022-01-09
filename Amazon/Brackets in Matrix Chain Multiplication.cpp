void printBracket(int i, int j, vector<vector<int>>& bracket, char& name, string& result){
        if(j - i == 1){
            result += "(";
            result += name++;
            result += name++;
            result += ")";
            return;
        }
        if(i == j){
            result += name;
            name++;
            return;
        }
        result += "(";
        printBracket(i, bracket[i][j], bracket, name, result);
        printBracket(bracket[i][j] + 1, j, bracket, name, result);
        result += ")";
    }
    string matrixChainOrder(int arr[], int n){
         vector<vector<int>> dp(n-1, vector<int> (n-1));
         vector<vector<int>> bracket(n-1, vector<int> (n-1));
       
       for(int gap = 0; gap < dp[0].size(); gap++){
           for(int i=0, j=gap; j < dp[0].size(); i++,j++){
               if( gap == 0){
                   // eg: 10
                   dp[i][j] = 0;
                   bracket[i][j] = 0;
               }
               else if(gap == 1){
                   // eg: 10 20
                   dp[i][j] = arr[i]*arr[j]*arr[j+1];
                   bracket[i][j] = 0;
               }
               else{
                   
                   int mn_cost = INT_MAX;
                   dp[i][j] = mn_cost;
                   for(int k=i;k<=j-1;k++){
                       int left = dp[i][k];
                       int right = dp[k+1][j];
                       int total_cost = left + right + (arr[i]*arr[k+1]*arr[j+1]);
                       
                       if(total_cost < dp[i][j]){
                           bracket[i][j] = k;
                           dp[i][j] = total_cost;
                       }
                   }
               }
           }
           
       }
      
       string result = "";
       char name = 'A';
      printBracket(0,n-2,bracket,name, result);
       return result;
    }