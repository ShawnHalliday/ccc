#include <iostream>
//#include <algorithm>
//#include <string>
using namespace std;

int a[2];

int main(){
cin >> a[0];
cin >> a[1];
if (a[0] >= 3 && a[1] <= 4){
    cout << "TroyMartian\n";
}
if (a[0] <= 6 && a[1] >= 2){
    cout << "VladSaturnian\n";
}

if (a[0] <= 2 && a[1] <= 3){
    cout<< "GraemeMercurian\n";
}
}