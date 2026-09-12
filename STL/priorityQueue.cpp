//first element is always greatest
#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack<string> s;

  s.push("ketan");
  s.push("anshul");
  s.push("aditya");
  s.push("pandey");

  cout<<"Top element-> "<<s.top()<<endl;
  s.pop();
  cout<<"Top element-> "<<s.top()<<endl;

  cout<<"size of stack-> "<<s.size()<<endl;

  cout<<"Empty or not-> "<<s.empty()<<endl;

} 