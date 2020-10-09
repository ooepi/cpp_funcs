#include <iostream>

using namespace std;

float areaOfCircle(int radius);

int main(){

    int radius;

    cout << "Radius of the Circle: ";
    cin >> radius;

    cout << "Area of the circle is: "<< areaOfCircle(radius);

    return 0;
}

float areaOfCircle(int radius){

    return 3.14159*((float)radius*(float)radius);

}