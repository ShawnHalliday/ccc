//https://www.cses.fi/problemset/task/1070
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    long n;
    cin >> n;
    if ( n == 1 ){
        cout << 1 << endl;
    }
    if ( n == 2 || n == 3 ){
        cout << "NO SOLUTION" << endl;
    }
    if ( n >= 4 ) {
        for( long i=2; i<=n; i+=2){
            printf ("%d ", i);
        }
        for( long i=1; i<=n; i+=2){
            printf ("%d ", i);
        }
    }
    return 0;
}