#include <iostream>

using namespace std;

void atob(int a, int b);

int main(){

    int a, b;

    cout << "Give the first number: ";
    cin >> a;
    cout << "Give the second number: ";
    cin >> b;

    atob(a, b);

    return 0;
}

void atob(int a, int b){

    for(int i = a; i<b+1; i++){
        cout << i << endl;
    }


}