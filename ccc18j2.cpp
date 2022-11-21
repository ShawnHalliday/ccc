#include <iostream>
//#include <algorithm>
//#include <string>
using namespace std;

int a;
int c[2];
string b[2];

int main(){
    cin >> a;
    cin >> b[0];
    cin >> b[1];
    for (int i = 0; i < a; i++){
        if (b[0][i] == 'C' && b[1][i] == 'C'){
            c[0]++;
        }
    }
    cout<< c[0];
}