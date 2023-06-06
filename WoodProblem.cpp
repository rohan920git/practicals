#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
bool isPossible(vector<int>arr, int mid ,int m ){
  int sum = 0;
  for(int i = 0 ; i < arr.size() ; i++){
    int temp = arr[i] - mid;
    if(temp > 0){
      sum+= temp;
    }
  }
  if(sum == m){
    return true;
  }
  return false;
}
int main(){
  int n , m;
  cin>>n >> m;
  vector<int>arr;
  int maxi = INT_MIN;
  for(int i = 0 ; i < n ; i++){
    int temp ;
    cin>>temp;
    maxi = max(maxi, temp);
    arr.push_back(temp);
  } 
  int s = 0;
  int ans = -1;
  int mid = s + (maxi - s)/2;
  while (s < maxi){
    if(isPossible(arr, mid, m)){
    maxi= mid -1;
    ans = mid;
    }
    else{
      s = mid+1;
    }
    mid = s+(maxi-s)/2;
} 
cout<<ans<<endl; 
 return 0;
 }