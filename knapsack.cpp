#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class item{
    public:
    int weight;
    int value ;
    double wperunitv;
    item(int w , int v){
        weight = w;
        value = v;
        wperunitv = (double)(v)/w;
    }
};
bool mycmp(const item& it1 , const item& it2){
    return it1.wperunitv > it2.wperunitv;
}
double getMax(int weight[] , int value[] , int capacity, int n){
    vector<item>list;
    for(int i = 0 ; i < n ; i++){
        list.push_back(item(weight[i],value[i]));
    }
    sort(list.begin() , list.end() , mycmp);
 
    double ans = 0 ;
    for(int i =0 ;i < n && capacity != 0 ; i++){
        if(list[i].weight <= capacity){
            ans += list[i].value;
            capacity -= list[i].weight;
        }
        else{
            ans += list[i].wperunitv*capacity;
            capacity = 0;
            break;
        }
    }
  return ans;
}
int main(){
    int n;
    cin>>n;
    for(int i = 0 ;  i < n ;i++){

    }
    // int weight[4]={40,10,20,24};
    // int value[4]={280,100,120,120};
    int weight[n];
    int value[n];
    for(int i = 0; i< n ;i++){
        cin>>weight[i]>>value[i];
    }

    int capacity = 60;
    cout<<getMax(weight,value,capacity,n);

return 0;
}