#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float addition, subtraction, multiplication, division, factorial, power, square, squareroot, cube, cuberoot, percent;
    int a, b;
    int choice, number;
    factorial = 1;

    cout << "Enter 1 for addition" << endl;
    cout << "Enter 2 for subtraction" << endl;
    cout << "Enter 3 for multiplication" << endl;
    cout << "Enter 4 for division" << endl;
    cout << "Enter 5 for factorial" << endl;
    cout << "Enter 6 for power" << endl;
    cout << "Enter 7 for square" << endl;
    cout << "Enter 8 for squareroot" << endl;
    cout << "Enter 9 for cube" << endl;
    cout << "Enter 10 for cuberoot" << endl;
    cout << "Enter 11 for percent" << endl;
    cin >> choice;

    if (choice == 1) {
        cout << "Enter first number" << endl;
        cin >> a;
        cout << "Enter second number" << endl;
        cin >> b;
        addition = a + b;
        cout << "The addition of both the numbers is " << addition << endl;
    } else if (choice == 2) {
        cout << "Enter first number" << endl;
        cin >> a;
        cout << "Enter second number" << endl;
        cin >> b;
        subtraction = a - b;
        cout << "The subtraction of both the numbers is " << subtraction << endl;
    } else if (choice == 3) {
        cout << "Enter first number" << endl;
        cin >> a;
        cout << "Enter second number" << endl;
        cin >> b;
        multiplication = a * b;
        cout << "The multiplication of both the numbers is " << multiplication << endl;
    } else if (choice == 4) {
        cout << "Enter first number" << endl;
        cin >> a;
        cout << "Enter second number" << endl;
        cin >> b;
        division = a / b;
        cout << "The division of both the numbers is " << division << endl;
    } else if (choice == 5) {
        cout << "Enter a number" << endl;
        cin >> number;
        if (number < 0) {
            cout << "Can't find the factorial for a negative number" << endl;
        } else if (number <= 1) {
            cout << number << "!=" << factorial << endl;
        } else {
            for (int counter = number; counter >= 2; counter--) {
                factorial = factorial * counter;
            }
            cout << number << "!=" << factorial << endl;
        }
    }
    else if(choice==6){
        cout << "Enter first number" << endl;
        cin >> a;
        cout << "Enter second number" << endl;
        cin >> b;
        power=pow(a,b);
        cout<<"The power of the first number raised to second number is "<<power<<endl;
    }
    else if(choice==7){
        int c;
        cout<<"Enter a number"<<endl;
        cin>>c;
        square=c*c;
        cout<<"The square of the number is "<<square<<endl;
    }
    else if(choice==8){
        int c;
        cout<<"Enter a number"<<endl;
        cin>>c;
        squareroot=sqrt(c);
        cout<<"The squareroot of the number is "<<squareroot<<endl;
    }
    else if(choice==9){
        int c;
        cout<<"Enter a number"<<endl;
        cin>>c;
        cube=c*c*c;
        cout<<"The cube of the number is "<<cube<<endl;
    }
    else if(choice==10){
        int c;
        cout<<"Enter a number"<<endl;
        cin>>c;
        cuberoot=cbrt(c);
        cout<<"The cuberoot of the number is "<<cuberoot<<endl;
    }
    else if(choice==11){
        cout << "Enter numerator number" << endl;
        cin >> a;
        cout << "Enter denominator number" << endl;
        cin >> b;
        percent = (static_cast<float>(a) / b) * 100;
        cout<<"The percentage is "<<percent<<endl;
    }


    return 0;
}
