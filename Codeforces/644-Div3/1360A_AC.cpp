#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, a, b, temp;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a < b){
            temp = a;
            a = b;
            b = temp;
        }
        // a is now the longer side
        if(a > b * 2){
            cout << a * a << "\n";
        }
        else{
            cout << b * b * 4 << "\n";
        }
    }
    return 0;
}