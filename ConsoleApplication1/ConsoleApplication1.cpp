// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;

#include <iostream>

// Kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n <= 1) return false; // Các số <= 1 không phải là số nguyên tố
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) return false; // Nếu chia hết thì không phải số nguyên tố
    }
    return true;
}

// Kiểm tra năm nhuận
bool isLeapYear(int year) {
    // Năm nhuận nếu chia hết cho 4 nhưng không chia hết cho 100, hoặc chia hết cho 400
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main()
{

    int choice, number, year;

    while (true) {
        // Hiển thị menu
        cout << "========== Menu ==========" << endl;
        cout << "1. Kiểm tra số nguyên tố" << endl;
        cout << "2. Kiểm tra năm nhuận" << endl;
        cout << "3. Thoát" << endl;
        cout << "==========================" << endl;
        cout << "Chọn chức năng (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Chức năng kiểm tra số nguyên tố
                cout << "Nhập số nguyên dương: ";
                cin >> number;
                if (isPrime(number)) {
                    cout << number << " là số nguyên tố." << endl;
                } else {
                    cout << number << " không phải là số nguyên tố." << endl;
                }
                break;

            case 2:
                // Chức năng kiểm tra năm nhuận
                cout << "Nhập năm: ";
                cin >> year;
                if (isLeapYear(year)) {
                    cout << year << " là năm nhuận." << endl;
                } else {
                    cout << year << " không phải là năm nhuận." << endl;
                }
                break;

            case 3:
                // Thoát chương trình
                cout << "Cảm ơn bạn đã sử dụng chương trình!" << endl;
                return 0;

            default:
                cout << "Lựa chọn không hợp lệ. Vui lòng chọn lại." << endl;
        }
    }

    return 0;
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
