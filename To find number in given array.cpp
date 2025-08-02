//Name-Darshan soni
//PRN-24070123034
//Exp-7

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    int arr[]={3,6,7,2,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(num==arr[i]){
            cout<<"Number is at "<<i<<endl;
            break;
        }
    }
    return 0;
}

/*
Output
Enter the number:
6
Number is at 1
*/
