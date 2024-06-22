#include<iostream>
#include<vector>
using namespace std;
// void bubblesort(int a[],int N){
//     for(int i=0;i<N;i++){
//         for(int j=0;j<N-i;j++){
//             if(a[j]>a[j+1]){
//                 swap(a[j],a[j+1]);
//             }
//         }
//     }
// }
void bubblesort(vector<int> & a,int N){   //not working for size == 4
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
void bubblesort(vector<int> & a){
    for(int i=0;i<a.size()-1;i++){
        for(int j=0;j<a.size()-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
    int N;
    int num;
    cout<<"enter the number of elements to be sorted"<<endl;
    cin>>N;
    vector<int> a;
    for(int i=0;i<N;i++){
        cin>>num;
        a.push_back(num);
    }
    // cout<<N<<a.size();
    bubblesort(a);
    cout<<"sorted array is"<<endl;
    for(int i=0;i<N;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}