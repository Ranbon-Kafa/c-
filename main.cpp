#include <iostream>

using namespace std;

int main() {
    char islem;
    double sayi1, sayi2;

    cout << "Yapmak istediginiz islemi seciniz (+, -, *, /): ";
    cin >> islem;

    cout << "Ilk sayiyi giriniz: ";
    cin >> sayi1;

    cout << "Ikinci sayiyi giriniz: ";
    cin >> sayi2;

    switch (islem) {
        case '+':
            cout << sayi1 << " + " << sayi2 << " = " << sayi1 + sayi2 << endl;
            break;

        case '-':
            cout << sayi1 << " - " << sayi2 << " = " << sayi1 - sayi2 << endl;
            break;

        case '*':
            cout << sayi1 << " * " << sayi2 << " = " << sayi1 * sayi2 << endl;
            break;
            
        case '/':
            cout << sayi1 << " / " << sayi2 << " = " << sayi1 / sayi2 << endl;
            break;
    }

    return 0;
}