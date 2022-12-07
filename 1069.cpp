//https://www.cses.fi/problemset/task/1069
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string a;
long long n[2];

int main(){
    cin >> a;
    for (long long i = 0; i < a.length(); i++){
        if (a[i] == a[i+1]){
            n[0] += 1;
        }
        else{
            if (n[0] > n[1]){
                n[1] = n[0];
            }
            n[0] = 0;
        }

    }
    cout << n[1]+1;
}