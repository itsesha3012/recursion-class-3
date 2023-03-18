#include<iostream>
using namespace std;
// bool checksorted(int& arr,int n,int i){
//     if(i==n-1){
//         return true;
//     }
//     // else{
//     //     return false;
//     // }
// if(arr[i+1]<arr[i]){
//     return false;
// }
// // else{
// //     return false;

// // }
// return checksorted(arr,n,i+1);
// }

// int main(){
//     int arr[3]={10,20,30};
//     int n=3;
//     int i=0;
//     bool issorted = checksorted(arr,n,i);
//     if(issorted){
//         cout<<"array is sorted";
//     }
//     else{
//         cout<<"array is not sorted";
//     }
//    return 0;

// }


int bs(int arr[],int s,int e, int key){
    
    if(s>e)
    return -1;
int mid=(s+e)/2;
    if (arr[mid] == key)
    return mid;
    if(arr[mid] < key){
        return bs(arr,mid+1,e,key);
    }
    else{
        return bs(arr,s,mid-1,key);
    }
    }

int main(){
   int arr[3]={90,99,1000};
   int n=3;
   int i=0;
   int s=0;
   int e=n-1 ;
    int key=99;


   int ans=bs(arr,s,e,key);
   cout<<"answrr is"<<ans<<endl;
}