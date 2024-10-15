#include<iostream>
using namespace std;
const int Maxsize= 10;

class arroperation{
    private:
    int UI=-1;
    int position;
    public:
    int arr[Maxsize];
    void arr_insert(int position,int value)
{
    if(UI == Maxsize-1){
        cout<<"over flow"<<endl;
    }else if(position==1 && UI == -1){
         UI++;
        arr[UI]=value;
    }else if(position==1){
        int k=UI;
        while(k>=1){
            arr[k+1]=arr[k];
             k--;
        }
        arr[0]=value;
        UI++;

    }
    else if(UI+1>=position){
        int k=UI;
          while(k>=position){
          arr[k+1]=arr[k];
          k--;
          }
    arr[position]=value;
    UI++;

    } else{
        UI++;
        arr[UI]=value;
    }
}
void displayitem(){
    for(int i=0;i<=UI;i++){
        cout<<arr[i]<<endl;
    }
}

  void arrDelete(int position){
    if(UI==-1){
        cout<<"array is empty "<<endl;
    }
        int k=position-1;
        while(k<=UI){
            arr[k]=arr[k+1];
            k++;
        
        }
        arr[UI]=0;
        UI=UI-1;
       
    }
};

int main(){
    arroperation arroperation1;
    arroperation1.arr_insert(1,20);
    arroperation1.arr_insert(5,40);
    arroperation1.arr_insert(9,350);
    arroperation1.arr_insert(9,350);
    arroperation1.arr_insert(1,3350);
        arroperation1.displayitem();
        cout<<"/n"<<endl;
    arroperation1.arrDelete(1);
      cout<<"/n"<<endl;
    arroperation1.displayitem();
      cout<<"/n"<<endl;
    arroperation1.arrDelete(3);
    arroperation1.displayitem();
  return 0;
}



