#include<iostream>
using namespace std;
const int maxsize=10;
class Stacklist{
    public:
    int top=-1;
    int full,empty;
    
    int a[maxsize];

    void pushelement(int);
    void popelement();
    void fullstack();
    void emptystack();
    void showall();

};
void Stacklist :: emptystack(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
        empty=1;
    }
    else empty=0;
}
void Stacklist :: fullstack(){
    if(top==maxsize-1){
        cout<<"the stack is full"<<endl;
        full=1;
    }
     full=0;
}
void Stacklist :: pushelement(int data){
    fullstack();
    if(full == 0){
        top++;
        a[top]=data;
    }
}
void Stacklist :: popelement(){
    emptystack();
    if(empty==0)
        cout<<a[top];
        top--;
      
    }
    void Stacklist :: showall(){
        for(int i=top+1;i>=0;i--){
            // cout<<endl;
            cout<<a[i]<<endl;
        }
    }


int main(){
    Stacklist lisa;
    // lisa.popelement(); the first elemen is not showing in result as we perform this
    lisa.pushelement(10);
    lisa.pushelement(20);
    lisa.pushelement(30);
    lisa.popelement();
    lisa.showall();
    return 0;
}