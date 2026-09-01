#include<iostream>
using namespace std;
void printArray(int arr[],int size){
  
  cout <<" Printing the array"<<endl;
  //print the array
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }

  cout<<"Printing Done"<<endl;
}
int main(){
  //declaring the array
  int number[15];
  //accessing the array
  cout<<"value at 14 index "<< number[14]<< endl;

  //intialising new array
  int second[3]={5,7,11};
 //accessing an element
  cout<<"value at 2 index "<< second[2]<< endl;

  int third[15]  ={2,7};
  int n=15 ;
 printArray(third,15);
  //intialising all location with 0
  int fourth[10]={0};
  n=10;
 printArray(fourth,10);


 char ch[5]={'a','b','c','d','e'}; 
  cout <<" Printing the array"<<endl;
  //print the array
  for(int i=0;i<5;i++){
    cout<<ch[i]<<" ";
  }

  cout<<"Printing Done"<<endl;
  cout<< " Everything is fine"<<endl;
  return 0;

}