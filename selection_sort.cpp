#include<bits/stdc++.h>
using namespace std;

// void swap(int a ,int b){
//     int temp;

//     temp=b;
//     b=a;
//     a=temp;

// }
void selection_sort(int a[],int n){

    for(int i=0;i<=n-2;i++){

        int mini=i;

        for(int j=i;j<=n-1;j++){

            if(a[j]<a[mini]){
                mini=j;
            }
        }
        int temp=a[mini];
        a[mini]=a[i];
        a[i]=temp;
    }
}


int main(){


    int n;
    cin>>n;
    int a[n];


    for(int i=0;i<n;i++) cin>>a[i];

    // int n=sizeof(a);

    selection_sort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;

    return 0;
}