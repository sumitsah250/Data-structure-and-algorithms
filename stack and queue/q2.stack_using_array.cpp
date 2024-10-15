#include<iostream>
using namespace std;
const int Maxsize=100;
class stack_implementation{
    private:
    int arr[Maxsize];
    int Top=-1;
    public:
    bool isfull();
    bool isempty();
    void push(int value);
    int pop();
    void display();
};
bool stack_implementation::isfull(){
    if(Top==Maxsize-1){
        return 1;
    }
    return 0;
}
bool stack_implementation::isempty(){
    if(Top==-1){
        return 1 ;
    }
    else{
        return 0;
    }
}
void stack_implementation::push(int value){
    if(isfull()){
        cout<<"stack is full"<<endl;
    }
    else{
        Top++;
        arr[Top]=value;
    }
}
int stack_implementation::pop(){
    if(isempty()){
        cout<<"stack is empty"<<endl;
        return -1;
    }
    else{
         Top--;
        return arr[Top+1];
    }
}
void stack_implementation::display(){
     cout<<"elements in the stack :";
    for(int i=0;i<=Top;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    stack_implementation stack_implementation1;
    cout<<stack_implementation1.pop()<<endl;
    cout<<stack_implementation1.pop()<<endl;
  
    stack_implementation1.push(1);
    stack_implementation1.push(2);
    stack_implementation1.push(3);
    stack_implementation1.push(4);
    stack_implementation1.display();    


        cout<<stack_implementation1.pop()<<endl;
        cout<<stack_implementation1.pop()<<endl;
        stack_implementation1.display();
    


    return 0;
}