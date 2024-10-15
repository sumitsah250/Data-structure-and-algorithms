#include<iostream>
using namespace std;
//by book wrong
// void insertionsort(int a[],int N){
//     int temp;
//     for(int i=1;i<N;i++){
//         temp=a[i];
//         for(int j=i-1;j>=0 && a[j]>temp;j--){
//             a[j+1]=a[j];
//             a[j+1]=temp;
//         }
//     }
// }
// by me
void insertionsort(int a[],int N){
    int temp=0;
    for(int i=0;i<N;i++){
        temp=a[i];
        for(int j=i-1;j>=0;j--){
            if(a[j]>temp){
                swap(a[j],a[j+1]);
            }else{
                a[j+1]=temp;
                break;
            }
        }
    }
    return;
}
int main(){
     int N;
    cout<<"enter the number of elements to be sorted"<<endl;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    insertionsort(a,N);
    cout<<"sorted array is"<<endl;
    for(int i=0;i<N;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}