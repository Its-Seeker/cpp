// check 7 is prime no or not 

#include <iostream>
using namespace std;

int main(){
int n;
cout<< "enter the value of n"<<endl;
cin>>n;

bool isprime =1;

for(int i=2; i<n; i++){
if(n%i == 0){
 isprime=0;
 break;
}
}
if(isprime==0){
  cout<< "Not A Prime no."<<endl;
}else{
   cout<< "Is A Prime no."<<endl;
}

}