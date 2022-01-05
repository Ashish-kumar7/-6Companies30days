#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int t;
    
    cin>>n;
    vector<int> V(n);
    
    for(int i=0; i<n; i++)
        cin>>V[i];
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i=0; i<n; i++){
        if(pq.size() < 10 || V[i] > pq.top())
            pq.push(V[i]);
        while(pq.size()>10)
            pq.pop();
    }
    for(int i=0; i<10; i++)
    {
        cout<< pq.top()<<" ";
        pq.pop();
    }
    
    return 0;
}