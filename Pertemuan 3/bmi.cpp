#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    float bb,tb,bmi;

    cout << "Masukkan Berat Badan (kg) : ";
    cin >> bb;
    cout << "Masukkan Tinggi Badan (m) : ";
    cin >> tb;

    bmi = bb/(tb*tb);
    cout << fixed << setprecision(1);
    cout << "BMI anda : " << bmi << endl;


    if (bmi < 18.5) {
        cout << "Kategori berat badan : Berat badan kurang" << endl;
    }
        else {
            if (bmi <= 18.5 && bmi < 25) {
            cout << "Kategori berat badan : Berat badan normal" << endl;
            }
            if (bmi <= 25 && bmi < 30) {
                    cout << "Kategori berat badan : Berat badan berlebih" << endl;
                }
                else {
                    cout << "Kategori berat badan : Obesitas" << endl;
                }
        }
}