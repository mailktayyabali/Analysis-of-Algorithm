#include<iostream>
using namespace std;
int main(){
    //aray of 100 elements
    int n=100;
    int arr[n];
    for(int i=0;i<100;i++){
        arr[i]=i+1;
    }
    int target= 100;
    int count = 0;
    for(int i=0;i<n;i++){
        
        if(target==arr[i]){
            cout<<"target found at "<< i<<endl;
        }
            count++;
    }
    cout<<"opreation performed "<<count<<"times";

}