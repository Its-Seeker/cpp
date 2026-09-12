#include<iostream>
using namespace std;
void reverse(int arr[],int n){
  //array indexing start 0 and eng n-1, [5]= 0 to 4;  
  int start=0;
  int end=n-1;
  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}
void printArray(int arr[],int n){
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}
cout<<endl;
}

int main(){
int arr[6]={5,7,12,-9,0,6};
int brr[5]={2,4,6,5,8}; 

reverse(arr,6);
reverse(brr,5);

printArray(arr,6);
printArray(brr,5);

 return 0;
}