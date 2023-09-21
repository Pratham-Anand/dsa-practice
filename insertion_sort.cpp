#include<bits/stdc++.h>
using namespace std;

// void swap(int a ,int b){
//     int temp;

//     temp=b;
//     b=a;
//     a=temp;

// }
void insertion_sort(int a[],int n){

   for(int i=0;i<=n-1;i++){
    
    int j=i;
    while(j>0 && a[j]<a[j-1]){
        int temp=a[j];
        a[j]=a[j-1];
        a[j-1]=temp;
        j--;
    }
   }
}


int main(){


    int n;
    cin>>n;
    int a[n];


    for(int i=0;i<n;i++) cin>>a[i];

    // int n=sizeof(a);

    insertion_sort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;

    return 0;
}