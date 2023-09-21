#include<bits/stdc++.h>
using namespace std;

// void swap(int a ,int b){
//     int temp;

//     temp=b;
//     b=a;
//     a=temp;

// }
void bubble_sort(int a[],int n){

   for(int i=n-1;i>=0;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                didswap=1;
            }
        }
        if(!didswap) break;
   }
}


int main(){


    int n;
    cin>>n;
    int a[n];


    for(int i=0;i<n;i++) cin>>a[i];

    // int n=sizeof(a);

    bubble_sort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;

    return 0;
}