#include<iostream>
using namespace std;
int main(){
  int arr[3];
 arr[0] = 2;
  arr[1] = 5;
  arr[2] = 7;
  
  
  for(int i = 2; i >= 0; i--){
    cout<<arr[i]<<" ";
  }
}