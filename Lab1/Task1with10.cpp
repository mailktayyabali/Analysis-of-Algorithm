#include<iostream>
using namespace std;
int main(){
    //aray of 10elements
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int target= 10;
    int count = 0;
    for(int i=0;i<10;i++){
        
        if(target==arr[i]){
            cout<<"target found at "<< i<<endl;
        }
            count++;
    }
    cout<<"opreation performed "<<count<<"times";

}