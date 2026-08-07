#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 0;
    int sum =2;
    while (i <= n) {
       sum = sum + i; 
        i = i + 2;
    }
    cout<<"value of sum:"<<sum << endl;
    return 0;
}