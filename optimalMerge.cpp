#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
priority_queue<int ,vector<int>,greater<int>>pq;
    int n ; 
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
      cin>>arr[i];
    }
    for(int i = 0 ; i< n ; i++){
      pq.push(arr[i]);
    }
    int cost = 0;
    while(pq.size() > 1 ){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int c = a+b;
        pq.push(c);
      cost += c;
     }
     cout<<"the cost is : "<<cost<<endl;
     return 0;
}