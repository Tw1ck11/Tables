// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    ///////TASK 1
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }

    
    
    
    //////TASK 2
    long long int number, old_number, new_number = 0, digit;

    cin >> number;

    old_number = number;

    while (number > 0) {
        digit = number % 10;
        new_number = new_number * 10 + digit;
        number /= 10;
    }
    if (new_number == old_number) {
        cout << "It is a palindrome" << endl;
    }
    else {
        cout << "It isn`t a palindrome" << endl;
    }

    
    
    
    ///////TASK 3
    int height, width, length;

    cout << "Enter height: ";
    cin >> height;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter length: ";
    cin >> length;

    for (int i = 0; i < width / 2; i++) {
        cout << ' ';
    }

    for (int i = 0; i < length; i++) {
        cout << '*';
    }

    for (int i = 1; i < width / 2; i++) {
        cout << endl;

        for (int j = 0; j < width / 2 - i; j++) {
            cout << ' ';
        }
        cout << '*';

        for (int j = 1; j < i; j++) {
            cout << ' ';
        }
        cout << '*';

        for (int j = 2; j < length / 2; j++) {
            cout << ' ';
        }

        for (int j = 0; j < length / 2 - i; j++) {
            cout << ' ';
        }
        cout << '*';

        for (int j = 1; j < i; j++) {
            cout << ' ';
        }
        cout << '*';
    }

    cout << endl;

    for (int i = 0; i < length; i++) {
        cout << '*';
    }

    for (int i = 1; i < width / 2; i++) {
        cout << ' ';
    }
    cout << '*';

    for (int i = 2; i < height / 2; i++) {
        cout << endl;

        cout << '*';

        for (int j = 1; j < width / 2; j++) {
            cout << ' ';
        }
        cout << '*';

        for (int j = 2; j < length - width / 2; j++) {
            cout << ' ';
        }
        cout << '*';

        for (int j = 1; j < width / 2; j++) {
            cout << ' ';
        }
        cout << '*';
    }

    cout << endl;

    cout << '*';

    for (int i = 1; i < width / 2; i++) {
        cout << ' ';
    }

    for (int i = 0; i < length; i++) {
        cout << '*';
    }

    for (int i = 0; i < width / 2 - 1; i++) {

        cout << endl;

        cout << '*';

        for (int j = 2; j < width / 2 - i; j++) {
            cout << ' ';
        }

        cout << '*';

        for (int j = 1; j < length - width / 2 + i; j++) {
            cout << ' ';
        }

        cout << '*';

        for (int j = 2; j < width / 2 - i; j++) {
            cout << ' ';
        }

        cout << '*';
    }

    cout << endl;

    for (int i = 0; i < length; i++) {
        cout << '*';
    }

   
    
    
    
    
    
    /////////TASK 4
    int k = 0;

    for (int i = 2; i <= 10000000; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                k++;
            }
        }
        if (k == 2) {
            cout << i << endl;
        }
        k = 0;
    }

    
    
    
    
    
    ////////TASK 5
    for (int i = 0; i <= 10000000; i++) {

        int sum = 0;
        int num = i;

        for (; num > 0; num /= 10) {

            int digit = num % 10;

            if (i < 10) {
                sum = sum + pow(digit, 1);
            }
            else if (i >= 10 && i < 100) {
                sum = sum + pow(digit, 2);
            }
            else if (i >= 100 && i < 1000) {
                sum = sum + pow(digit, 3);
            }
            else if (i >= 1000 && i < 10000) {
                sum = sum + pow(digit, 4);
            }
            else if (i >= 10000 && i < 100000) {
                sum = sum + pow(digit, 5);
            }
            else if (i >= 100000 && i < 1000000) {
                sum = sum + pow(digit, 6);
            }
            else if (i >= 1000000 && i < 10000000) {
                sum = sum + pow(digit, 7);
            }
            else {
                sum = sum + pow(digit, 8);
            }
        }

        if (sum == i) {
            cout << i << endl;
        }
    }
}