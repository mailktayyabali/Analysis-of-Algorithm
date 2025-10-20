#include<iostream>
using namespace std;
int main(){
    int n=1000;
    int arr[n];
    for(int i=0;i<1000;i++){
        arr[i]=i+1;
    }
    int target= 1000;
    int count = 0;
    for(int i=0;i<n;i++){
        
        if(target==arr[i]){
            cout<<"target found at "<< i<<endl;
        }
            count++;
    }
    cout<<"opreation performed "<<count<<"times";

}