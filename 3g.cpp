#include <iostream>
//#include <algorithm>
//#include <string>
using namespace std;

int a[5];

int main(){
cin >> a[0];
cin >> a[1];
cin >> a[2];
cin >> a[3];
if (a[0] == 1){
    a[4] += 461;
}
else if (a[0] == 2){
    a[4] += 431;
}
else if (a[0] == 3){
    a[4] += 420;
}
else if (a[0] == 4){
    a[4] += 0;
}


if (a[1] == 1){
    a[4] += 100;
}
else if (a[1] == 2){
    a[4] += 57;
}
else if (a[1] == 3){
    a[4] += 70;
}
else if (a[1] == 4){
    a[4] += 0;
}


if (a[2] == 1){
    a[4] += 130;
}
else if (a[2] == 2){
    a[4] += 160;
}
else if (a[2] == 3){
    a[4] += 118;
}
else if (a[2] == 4){
    a[4] += 0;
}


if (a[3] == 1){
    a[4] += 167;
}
else if (a[3] == 2){
    a[4] += 266;
}
else if (a[3] == 3){
    a[4] += 75;
}
else if (a[3] == 4){
    a[4] += 0;
}
cout << "Your total Calorie count is " << a[4] <<".";
}