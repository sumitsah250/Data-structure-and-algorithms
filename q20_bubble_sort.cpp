#include<iostream>
using namespace std;
void bubblesort(int a[],int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
    int N;
    cout<<"enter the number of elements to be sorted"<<endl;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    bubblesort(a,N);
    cout<<"sorted array is"<<endl;
    for(int i=0;i<N;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}