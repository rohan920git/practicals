#include<iostream>
using namespace std;
struct tnode
{
    int d;
    struct tnode* next;
};
class node{
    public:
    int a ;
    node* next;
};
int main(){
    struct tnode* head;

    node* aa;
        aa->a = 6;
    
    cout<<aa->next;
    return 0;

}