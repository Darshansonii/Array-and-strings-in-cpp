//Name-Darshan soni
//PRN-24070123034
//Exp-7


#include<iostream>
using namespace std;

int main(){
    int arr[]={3,6,7,2,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    float average;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    
    average=float(sum)/n;
    
    cout<<"Sum is :"<<sum<<endl;
    cout<<"Average is :"<<average<<endl;
    
    return 0;
}


/*
Output
Sum is :30
Average is :5
*/
