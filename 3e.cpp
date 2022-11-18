#include <iostream>
//#include <algorithm>
//#include <string>
using namespace std;

int a[2];

int main(){
cin >> a[0];
cin >> a[1];
if (a[0] == 2 && a[1] == 18){
    cout << "Special";
}
else if (a[0] > 2 || (a[0] == 2 && a[1] > 18)){
    cout << "After";
}

else{
    cout<< "Before";
}


}