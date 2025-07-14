#include <iostream>
using namespace std;

int main()
{
    // variabel
    int numcorrect1, numcorrect2, numcorrect3;
    int convertedsec1 = 0, convertedsec2 = 0, convertedsec3 = 0;
    int totalconverted, finalscore;

    // input user 1: jumlah jawaban benar user
    cout << "Input Number Correct Section 1: ";
    cin >> numcorrect1;

    // input user 2: jumlah jawaban benar user
    cout << "Input Number Correct Section 2: ";
    cin >> numcorrect2;

    // input user 3: jumlah jawaban benar user
    cout << "Input Number Correct Section 3: ";
    cin >> numcorrect3;

    cout << endl;

    // konversi nilai section 1
    if (numcorrect1 >= 28 && numcorrect1 <= 30)
    {
        convertedsec1 = (numcorrect1 + 21);
        cout << "Konversi Skor Section I Anda adalah: " << convertedsec1 << endl;
    }
    else if (numcorrect1 >= 31 && numcorrect1 <= 32)
    {
        convertedsec1 = (numcorrect1 + 20);
        cout << "Konversi Skor Section I Anda adalah: " << convertedsec1 << endl;
    }
    else if (numcorrect1 >= 33 && numcorrect1 <= 35)
    {
        convertedsec1 = (numcorrect1 + 19);
        cout << "Konversi Skor Section I Anda adalah: " << convertedsec1 << endl;
    }
    else if (numcorrect1 >= 36 && numcorrect1 <= 39)
    {
        convertedsec1 = (numcorrect1 + 18);
        cout << "Konversi Skor Section I Anda adalah: " << convertedsec1 << endl;
    }
    else if (numcorrect1 == 40)
    {
        convertedsec1 = (numcorrect1 + 17);
        cout << "Konversi Skor Section I Anda adalah: " << convertedsec1 << endl;
    }
    else
    {
        cout << "Input Section 1 tidak valid" << endl;
    }

    // space
    cout << endl;

    // konversi nilai section 2
    if (numcorrect2 >= 28 && numcorrect2 <= 34)
    {
        convertedsec2 = (numcorrect2 + 24);
        cout << "Konversi Skor Section II Anda adalah: " << convertedsec2 << endl;
    }
    else if (numcorrect2 >= 35 && numcorrect2 <= 36)
    {
        convertedsec2 = (numcorrect2 + 25);
        cout << "Konversi Skor Section II Anda adalah: " << convertedsec2 << endl;
    }
    else if (numcorrect2 >= 37 && numcorrect2 <= 39)
    {

        convertedsec2 = (numcorrect2 + (numcorrect2 - 11));
        cout << "Konversi Skor Section II Anda adalah: " << convertedsec2 << endl;
    }
    else if (numcorrect2 == 40)
    {
        convertedsec2 = (numcorrect2 + 28);
        cout << "Konversi Skor Section II Anda adalah: " << convertedsec2 << endl;
    }
    else
    {
        cout << "Input Section 2 tidak valid" << endl;
    }

    // space
    cout << endl;

    // konversi nilai section 3
    if (numcorrect3 >= 28 && numcorrect3 <= 30)
    {
        convertedsec3 = (numcorrect3 + 18);
        cout << "Konversi Skor Section III Anda adalah: " << convertedsec3 << endl;
    }
    else if (numcorrect3 >= 31 && numcorrect3 <= 35)
    {
        convertedsec3 = (numcorrect3 + 17);
        cout << "Konversi Skor Section III Anda adalah: " << convertedsec3 << endl;
    }
    else if (numcorrect3 >= 36 && numcorrect3 <= 38)
    {
        convertedsec3 = (numcorrect3 + 16);
        cout << "Konversi Skor Section III Anda adalah: " << convertedsec3 << endl;
    }
    else if (numcorrect3 >= 39 && numcorrect3 <= 40)
    {
        convertedsec3 = (numcorrect3 + 15);
        cout << "Konversi Skor Section III Anda adalah: " << convertedsec3 << endl;
    }
    else
    {
        cout << "Input Section 3 tidak valid" << endl;
    }
    cout << endl;

    // total nilai hasil konversi
    totalconverted = (convertedsec1 + convertedsec2 + convertedsec3);
    cout << "Jumlah skor Anda setelah dikonversi: " << totalconverted << endl;
    cout << endl;

    // skor toefl akhir
    finalscore = ((totalconverted * 10) / 3);
    cout << "Skor TOEFL Anda adalah: " << finalscore << endl;

    return 0;
}