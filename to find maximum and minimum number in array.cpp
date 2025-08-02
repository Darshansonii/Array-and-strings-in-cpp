//Name-Darshan soni
//PRN-24070123034
//Exp-7


#include<iostream>
using namespace std;

int main(){
    int arr[]={3,6,7,2,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    int min=arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
        
        else if(arr[i]<min)
        min=arr[i];
    }
    
    cout<<"Maximum is:"<<max<<endl;
    cout<<"Minimum is:"<<min<<endl;
}

/*
Output
Maximum is:7
Minimum is:2
*/