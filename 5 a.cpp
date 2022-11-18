#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

long long n;
long long c;
string a[10000];
string b[10000];

int main(){
cin >> n;
for (int i = 0; i<n; i++){
cin >> a[i];
}
for (int j = 0; j<n; j++){
cin >> b[j];
if (b[j] == a[j]){
    c++;
}
}
cout<<c;
}