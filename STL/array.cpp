//array declarion in STL




#include<iostream>
#include<array>
using namespace std;
int main(){
  array<int,4> a={1,2,3,4};

  int size=a.size();
  for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
  }
  //find elemnts on different inadexs with the help of at
  cout<<"Element at second index-> "<<a.at(2)<<endl;
//check array is empty or not if empty return 1if not emptyy return 0; 1 means true 0 means false
  cout<<"Empty or not-> "<<a.empty()<<endl;

  cout<<"Front element-> "<<a.front()<<endl;

  cout<<"last element-> "<<a.back()<<endl;

  //at;empty;front;back are the operations that we used to find elements in array in STL

}