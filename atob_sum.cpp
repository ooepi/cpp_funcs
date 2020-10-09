#include <iostream>

using namespace std;

void atob_sum(int a, int b);

int main(){

    int a, b;

    cout << "Give the first number: ";
    cin >> a;
    cout << "Give the second number: ";
    cin >> b;

    atob_sum(a, b);

    return 0;
}

void atob_sum(int a, int b){
    int sum = 0;

    for(int i = a; i<b+1; i++){
        sum = sum + i;
    }

    cout << sum;


}