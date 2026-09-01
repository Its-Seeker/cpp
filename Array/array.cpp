#include<iostream>
using namespace std;
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
  cout <<" Printing the array"<<endl;
  //print the array
  for(int i=0;i<n;i++){
    cout<< third[i]<<" ";
  }
  //intialising all location with 0
  int fourth[10]={0};
  n=10;
  cout <<" Printing the array"<<endl;
  //print the array
  for(int i=0;i<n;i++){
    cout<< fourth[i]<<" ";
  }


  cout<< " Everything is fine"<<endl;
  return 0;

}