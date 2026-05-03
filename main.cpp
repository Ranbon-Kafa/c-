#include <iostream>
#include <thread>

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
            if (sayi2 == 0) {
                cout << "Hata: Sayi2 sifira bolunemez!" << endl;
                cout << "Ikinci sayiyi giriniz: ";
                cin >> sayi2;
                if (sayi2 == 0) {
                    cout << "Hata: Sayi2 sifira bolunemez!" << endl;
                } else {
                    cout << sayi1 << " / " << sayi2 << " = " << sayi1 / sayi2 << endl;
                }
            } else {
                cout << sayi1 << " / " << sayi2 << " = " << sayi1 / sayi2 << endl;
            }
            break;
            default:
                cout << "Gecersiz islem secimi!" << endl;
    }
    std::this_thread::sleep_for(std::chrono::seconds(3));
    return 0;
}