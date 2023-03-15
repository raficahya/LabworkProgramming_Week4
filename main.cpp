#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "     ";

    for (int i=0; i<=n; i++) {
            cout << i << " ";
    }

    cout << endl;

    for (int i=0; i<=n; i++){
        cout << i << " - ";
        for (int j=0; j<=n; j++){
            cout << " " << i*j;
        }
        cout << endl;
    }

//    for (int i = 1, k=0; i <= n; ++i, k=0) {
//        for (int j = 1; j <= (n-i); ++j) {
//            cout << "  ";
//        }
//        while(k != (2*i-1)){
//            cout << "* ";
//            ++k;
//        }
//        cout << endl;
//    }

//    for (int i=n; i>=0; i--){
//        if (i%2 == 0) {
//            cout << i << " ";
//        }
//    }

//    for (int i=1; i<=n; i++){
//        if (i%m ==0) {
//            cout << "*" << " ";
//        }else{
//            cout << i << " ";
//        }
//    }
    return 0;
}