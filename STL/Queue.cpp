//what is queue-> first in first out
#include<iostream>
#include<queue>
using namespace std;
int main(){
  queue<string> q;

  q.push("ketan");
  q.push("anshul");
  q.push("aditya");
  q.push("pandey");

  cout<<"Top element-> "<<q.front()<<endl;
  q.pop();
  cout<<"Top element-> "<<q.front()<<endl;

  cout<<"size of stack-> "<<q.size()<<endl;

  cout<<"Empty or not-> "<<q.empty()<<endl;

} 