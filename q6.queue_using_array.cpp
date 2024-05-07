#include<iostream>
using namespace std;
const int MaxSize=100;
class queue_implementation{
    int Front=0;
    int Rear =0;
    int arr[MaxSize];
    public:
    bool isempty();
    bool isfull();
    void enque(int value);
    int deque();
    void display(){
        for(int i=Front;i<Rear;i++){
            cout<<arr[i]<<endl;
        }
    }

};
bool queue_implementation::isempty(){
    if(Front=Rear){
        return 1;
    }
    return 0;
}
bool queue_implementation::isfull(){
    if(Rear>=MaxSize+1){
        return 1;
    }
    return 0;
}
void queue_implementation::enque(int value){
    if(isfull()){
          cout<<"queue is full"<<endl;
    }
    else{
        arr[Rear]=value;
        Rear++;
    }
}
int queue_implementation::deque(){
    if(isempty()){
             cout<<"queue is empty"<<endl;
             return -1;
    }
    else{
        Front++;
        return arr[Front-1];
      
    }
}


int main(){
    queue_implementation queue_implementation1;
    queue_implementation1.enque(10);
    queue_implementation1.enque(20);
    queue_implementation1.enque(30);
    queue_implementation1.display();
    cout<<queue_implementation1.deque();
    return 0;
}