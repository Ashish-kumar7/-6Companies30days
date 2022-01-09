#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long int ans=(n)*(n+1)/2;
    long long  int final= ans*(2*(n)+1)/3;
    
    cout<<final<<endl;
	return 0;
}