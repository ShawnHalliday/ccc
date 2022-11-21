#include <iostream>
//#include <algorithm>
//#include <string>
using namespace std;

int a;
int c[2];
string b;

int main(){
    cin >> a;
    cin >> b;
    for (int i = 0; i < a; i++){
        if (b[i] == 'A'){
            c[0]++;
        }
        else if (b[i] == 'B'){
            c[1]++;
        }
    }
    if (c[0] > c[1]){
        cout<< "A";
    }
    else if (c[0] < c[1]){
        cout<<"B";
    }
    else{
        cout<<"Tie";
    }
}