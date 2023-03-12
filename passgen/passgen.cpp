#include <iostream>
#include <Windows.h>
#include <string.h>
#include <random>
#include <conio.h>

#define IS_IN_DEBUG false

using namespace std;

const string lett = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
const string num = "0123456789";
const string sym = "#%-:/";

string charset = lett + num + sym;

int main()
{
    if (IS_IN_DEBUG) {
        cout << "CHARSET" << lett << " <-> " << num << " <-> " << sym << endl;
    };
    
    int length;
    cout << "Desired password length: ", cin >> length;
    cout << "Genetating password..." << endl << endl;
    Sleep(2);

    std::random_device rd;
    std::mt19937 g(rd());

    std::shuffle(charset.begin(), charset.end(), g);
    charset = charset.substr(0, length);

    cout << "Password: " << charset;
    _getch();
}
