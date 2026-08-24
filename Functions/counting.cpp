#include<iostream>
using namespace std;
//function body
void printCounting(int n){
  for(int i=1;i<=n;i++){
    cout<<i<<endl;
  }
}
int main(){
  int n;
  cin>> n;
  //funnction call
  printCounting(n);
  return 0;
   
}