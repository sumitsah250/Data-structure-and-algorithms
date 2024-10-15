#include<iostream>
using namespace std;
void selectionsort(int a[],int N){
    int low =0;
    int index=0;
    for(int i=0;i<N-1;i++){
        index=i;
        low=a[i];
        for(int j=i+1;j<N;j++){
            if(a[j]<low){
                low=a[j];
                index=j;
            }
        }
        if(index != i){
            swap(a[i],a[index]);
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
    selectionsort(a,N);
    cout<<"sorted array is"<<endl;
    for(int i=0;i<N;i++){
        cout<<a[i]<<endl;
    }
    
    return 0;
}