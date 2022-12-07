#include <iostream>
//#include <algorithm>
//#include <string>
using namespace std;

int a[4];

int main(){
    cin >> a[0];
    cin >> a[1];
    a[3] = 2;
    while (a[0]-a[1] < a[1]){
        a[2] = a[0]-a[1];
        a[0] = a[1];
        a[1] = a[2];
        a[3]++;
    }
    a[3]++;
    cout<<a[3];
    
}