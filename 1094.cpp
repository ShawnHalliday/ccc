//https://www.cses.fi/problemset/task/1094
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

long long n[2] = {0,0};
long long x[200000];

int main(){
    cin >> n[0];
    for (long long i = 0; i < n[0]; i++){
       cin >> x[i]; 
    }

    for (long long j = 1; j < n[0]; j++){
        while (x[j] < x[j-1]){
            n[1]++;
            x[j]++;
        }
    }
    cout << n[1];
}