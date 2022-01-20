#include <bits/stdc++.h>
using namespace std;

int main()
 {
 
        string a,b;
        cin>>a>>b;
        for(int i=0;i<min(a.size(),b.size());i++){
            if(a[i]>b[i])cout<<a<<endl;
            else if(b[i]>a[i])cout<<b<<endl;
            if(a[i]!=b[i])break;
  
    }
	return 0;
}