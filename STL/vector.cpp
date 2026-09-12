//what is vector-> it is a dynamic array
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
  //v.capacity is helps to find the size of the vector
  cout<<"capacity-> "<< v.capacity()<<endl;

  //v.push_back helps to put element in vector
    v.push_back(1);
     cout<<"capacity-> "<< v.capacity()<<endl;

      v.push_back(2);
     cout<<"capacity-> "<< v.capacity()<<endl;
      v.push_back(3);
     cout<<"capacity-> "<< v.capacity()<<endl;
//capacity tell how many space assign for the elements and size define the size of he vector ;
     cout<<"size-> "<<v.size()<<endl;
     cout<<"Element at second index-> "<<v.at(2)<<endl;
//check array is empty or not if empty return 1if not emptyy return 0; 1 means true 0 means false
  cout<<"Empty or not-> "<<v.empty()<<endl;

  cout<<"Front element-> "<<v.front()<<endl;

  cout<<"last element-> "<<v.back()<<endl;

  cout<<"befor pop"<<endl;
    for(int i:v){
      cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
      cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size-> "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size-> "<<v.size()<<endl;
} 