#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){

  vector<int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);

cout<<"Finding 6->"<<binary_search(v.begin(),v.end(),6)<<endl;

//lower bound give the iterator/index that valus is eqaut or greater than the targeted value. targetd value is 6 
//start from 1,1<6 go ahead,3<6 go ahead ,6=6 so index of 6 is 2. 
cout<<"lower_bound->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

//upper_bound give the iterator/index is strictly greater than the targetd value target value is 6 next value 7,7>6 index of 7 is 3 .
cout<<"upper_bound->"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

int a =3;
int b=5;

cout<<"max-> "<<max(a,b);

cout<<endl; 

cout<<"min-> "<<min(a,b)<<endl;


swap(a,b);
cout<<"a->" <<a<<endl;

string s="abcd";
reverse(s.begin(),s.end());
cout<<"String-> "<<s<<endl;
}


