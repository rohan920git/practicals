#include<iostream>
using namespace std;
void pushs1(int n , int &index, int &capacity ,int arr[]){
    if(capacity == 0){
        cout<<"stack is already full";
    }
    else{
        index++;
        arr[index] = n;
        capacity--;
    }
}
void s1Top(int &index,int arr[]){
  cout<<arr[index]<<endl;
}
void s1pop(int &index, int &capacity ){
    if(index == -1){
        cout<<"stack in already empty"<<endl;
    }
    else{
        index--;
        capacity++;
    }
}
void pushs2(int n , int &index, int &capacity ,int arr[]){
    if(capacity == 0){
        cout<<"stack is already full";
    }
    else{
        index--;
        arr[index] = n;
        capacity--;
    }
}
void s2Top(int &index,int arr[]){
  cout<<arr[index]<<endl;
}
void s2pop(int &index, int &capacity ){
    if(index == 10){
        cout<<"stack in already empty"<<endl;
    }
    else{
        index++;
        capacity++;
    }
}
int main(){
    int arr[10];
    int s1Index =-1;
    int s2Index = 10;
    int capacity = 10;
    pushs1(12,s1Index , capacity,arr);
    pushs1(13,s1Index , capacity,arr);
    pushs1(14,s1Index , capacity,arr);
    s1Top(s1Index,arr);
    pushs2(20,s2Index,capacity,arr);
    pushs2(19,s2Index,capacity,arr);
    pushs2(18,s2Index,capacity,arr);
    s2Top(s2Index,arr);
    s2pop(s2Index,capacity);
    s2Top(s2Index,arr);
    pushs2(33,s2Index,capacity,arr);
    pushs2(66,s2Index,capacity,arr);
    s2Top(s2Index,arr);
    s2pop(s2Index,capacity);
    s2Top(s2Index,arr);
    return 0;
}