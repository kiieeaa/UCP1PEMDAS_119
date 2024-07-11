// 1. a. Variabel umur dideklarasikan dengan tipe data int dan diberi nilai 25.
//    b. Variabel nama dideklarasikan dengan tipe data String dan diberi nilai "Budi".
//    c. Variabel tinggiBadan dideklarasikan dengan tipe data float dan diberi nilai 175.5.
// 2. untuk menentukan seorang mahasiswa dinyatakan lulus atau tidaknya dengan pernyataan/statement yang telah berlaku seperti lulus dengan jalur rerata atau dengan nilai salah satu matakuliah diatas nilai tertentu
// 3. salah satu contohnya adalah untuk menginput data atau rincian dari suatu data yang telah diberikan untuk diinput
// 4. prosedur hanya untuk melewatkan nilai, sedangkan fungsi u tuk mengembalikan nilai tersebut
// 5. diberikan suatu nilai atau kalimat, sesuai keinginan kita ingin memunculkan berapa kali nilai atau kalimat tersebut 
// 6.

#include <iostream>
#include <string>
using namespace std;

int nBinggris, nMat, rerata;
string nama;


void input()
{
	cout << "masukan nama = ";
	cin >> nama;
	cout << "masukan Nilai Bahasa Inggris =";
	cin >> nBinggris;
	cout << "masukan Nilai Matematika = ";
	cin >> nMat;
}
void itungnilaidanrerata()
{
	string status;

	rerata = (nBinggris + nMat) / 2;

	if (rerata >= 70) {
		status = "Lulus jalur rerata";
	}
	else if (nMat >= 80) {
		status = "lulus jalur matematika";
	}
	else
	{
		status = "tidak lulus";
	}
}

void  display() {
	cout << "nama = " << nama << endl;
	cout << "nilai bahasa inggris = " << nBinggris << endl;
	cout << "nilai matematika = " << nMat << endl;
	cout << "status kelulusan = " << itungnilaidanrerata() << endl;

}

int main()
{
	char pilihan;

	do {
		input();
		display();
		itungnilaidanrerata();
		cout << "Apakah anda ingin Mengulangi ? (y/n) ";
		cin >> pilihan;

		system("cls");


	} while (pilihan == 'y' || pilihan == 'Y');

	{

	}

}
