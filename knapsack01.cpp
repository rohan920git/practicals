#include<iostream>
#include<vector>
using namespace std;
int solveTab(vector<int> &weight, vector<int> &value, int n, int maxWeight) {

  vector<int> pre(maxWeight + 1, 0);

  for (int w = weight[0]; w <= maxWeight; w++) {
    if (weight[0] <= maxWeight)
      pre[w] = value[0];
    else
      pre[w] = 0;
  }
  for (int index = 1; index < n; index++) {
    for (int w = maxWeight; w >= 0; w--) {
      int include = 0;
      if (weight[index] <= w) {
        include = value[index] + pre[w - weight[index]];
      }
      int exclude = pre[w];
      pre[w] = max(include, exclude);
    }
  }
  return pre[maxWeight];
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {
  // solve(weight , value , n-1 , maxWeight);
  //      vector<vector<int> > dp(n,vector<int>(maxWeight + 1 , -1));
  //      return solveDP(weight , value , n-1 , maxWeight , dp);
  return solveTab(weight, value, n, maxWeight);
}
int main(){
    int n = 4;
    vector<int>weight ={1,2,4,5};
    vector<int>value={5,4,8,6};
    int maxWeight = 5;
    cout<<"solution :" <<knapsack(weight,value,n,maxWeight); 
    return 0;
}
/*
4
1 2 4 5
5 4 8 6
5
*/