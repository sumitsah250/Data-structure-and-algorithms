#include<iostream>
#include<vector>
using namespace std;
int partation(int start,int end,vector<int> & a){
    int x= start;
    int temp=a[start];
    while(start<end){
        while(a[start]<=temp){
            start++;
        }

        while(a[end]>temp){
            end--;
        }
        if(start<end){
            swap(a[start],a[end]);
        }
    }
    swap(a[x],a[end]);
    return end;
}

void quicksort(vector<int> & a,int start,int end){
    int loc;
    if(start<end){
        loc=partation(start,end,a);
        quicksort(a,start,loc-1);
        quicksort(a,loc+1,end);
    }   
}



int main(){
    int N;
    cout<<"enter the number of elements to be sorted"<<endl;
    cin>>N;
    int num;
    vector<int>  a;
    for(int i=0;i<N;i++){
        cin>>num;
        a.push_back(num);
    }
    quicksort(a,0,N-1);
    cout<<"sorted array is"<<endl;
    for(int i=0;i<N;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}