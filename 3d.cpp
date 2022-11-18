#include <iostream>
//#include <algorithm>
#include <string>
using namespace std;

int a[3];

int main(){
cin >> a[0];
cin >> a[1];
cin >> a[2];

if (a[0] + a[1] + a[2] != 180){
    cout<<"Error";
}
else if (a[0] == 60 && a[1] == 60){
    cout<<"Equilateral";
}
else if ((a[0] == a[1] && a[1] != a[2]) || (a[1] == a[2] && a[2] != a[0]) || (a[0] == a[2] && a[2] != a[1])){
    cout<<"Isosceles";
}

else{
    cout<<"Scalene";
}
}