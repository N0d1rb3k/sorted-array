#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[5] = {50,60,2,90,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0;i<len-1;i++){
        if(arr[i]<arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int x:arr){
        cout <<x<<endl;
    }
    return 0;
}