#include<iostream>
using namespace std;
int main(){
    int n=5000;
    int arr[n];
    for(int i=0;i<5000;i++){
        arr[i]=i+1;
    }
    int target= 5000;
    int count = 0;
    for(int i=0;i<n;i++){
        
        if(target==arr[i]){
            cout<<"target found at "<< i<<endl;
        }
            count++;
    }
    cout<<"opreation performed "<<count<<"times";
}