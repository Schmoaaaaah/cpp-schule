#include <iostream>

using namespace std;

int main() {
    int a[10000];
    for (int i = 0; i <= 10000-2; i++){
        a[i]=i+2;
    }
    for (int i = 2; i <= 10000; i++){
        if(a[i] != 0){
            for (int j = 2;j <= 10000; j++){
                if(a[i] != j){
                    int b = a[i]%j;
                    if(b == 0){
                        a[i] = 0;
                    }
                }
            }
        }
    }
    for (int i = 1; i <= 10000; i++){
        if(a[i-1] != 0){
            cout << a[i-1] << "\n";
        }
    }
}
