#include <iostream>

using namespace std;

float areaOfTriangle(int a, int b);

int main(){

    int a, b;

    cout << "Base of the triangle: ";
    cin >> a;
    cout << "Height of the triangle: ";
    cin >> b;

    cout << areaOfTriangle(a, b);

    return 0;
}

float areaOfTriangle(int a, int b){

    return ((float)a*(float)b)/2;

}