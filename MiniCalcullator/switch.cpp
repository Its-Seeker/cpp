#include<iostream>
using namespace std;
int main(){
  int amount=1330;
  int note;
  cout<<"Enter note(100/50/20/1): "<<endl;
  cin>>note;
  switch(note){
    case 100:cout<<"100rs Note: "<<amount/100<<endl;
    amount=amount%100;
    case 50:cout<<"50rs Note: "<<amount/50<<endl;
    amount=amount%50;
    case 20:cout<<"20rs Note: "<<amount/20<<endl;
    amount=amount%20;
    case 1:cout<<"1rs Note: "<<amount/1<<endl;
    break;
    default:cout<<"Invalid Input";
  }
  return 0;
}