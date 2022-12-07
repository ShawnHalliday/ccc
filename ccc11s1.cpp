#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int a[10000];
int d;
int e;
int f;
string b;
string c;

int main(){
    cin >> a[0];
    for (int i = 0; i < a[0]+1; i++){
        getline(cin, b);
        c = c + b;
    }
    d = c.length();
    transform(c.begin(), c.end(), c.begin(), ::toupper);
    for (int j = 0; j < d; j++){
        if (c[j] == 'T'){
            e++;
        }
        else if (c[j] == 'S'){
            f++;
        }
    }
    if (e>f){
        cout<<"English";
    }
    else{
        cout<<"French";
    }
}