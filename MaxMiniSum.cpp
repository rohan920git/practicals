#include<iostream>
using namespace std;
int main(){
    int maxi = -1e5;
    int mini = 1e5;
    int n; cin>>n;
    int sum = 0;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        int temp; cin>>temp;
        maxi = max(temp,maxi);
        mini = min(temp,maxi);
        sum += temp;
        
    }
     cout<<
" max element "<<maxi <<" min element "<<mini<<" the sum is "<<sum<<endl;
return 0;
    }