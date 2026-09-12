//what is vector-> it is a dynamic array
#include<iostream>
#include<deque>
using namespace std;
int main(){
  deque<int> d;
  d.push_back(1);
  d.push_front(2);

  for(int i:d){
    cout<<i<<" ";
  }
  // d.pop_back();
  // cout<<endl;
  // for(int i:d){
  //   cout<<i<<" ";}
  cout<<endl;
  cout<<"Print first Index element-> "<<d.at(0)<<endl;

  cout<<"front-> "<<d.front()<<endl;
  cout<<"back-> "<<d.back()<<endl;

  cout<<"Empty or Not-> "<<d.empty()<<endl;

  
} 