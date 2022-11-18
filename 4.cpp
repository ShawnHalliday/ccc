#include <iostream>
#include <algorithm>
using namespace std;


long long a[3];

int main(){
cin >> a[0];
cin >> a[1];
cin >> a[2];
sort(a, a+3);
cout << a[1];
}