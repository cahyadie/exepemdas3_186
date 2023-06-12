#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {}  // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
		virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar { 
public:
	void input() {
		int r;
		setX(r);
	}
	float Luas(int r) {
		return 3.14 * r * r;
	}
	float keliling(int r) {
		return 2 * 3.14 * r;
	}

};
class Bujursangkar :public bidangDatar { 
	void input() {
		int sisi;
		setX(sisi);
	}
	float Luas(int sisi) {
		return sisi * sisi;
	}
	float Keliling(int sisi) {
		return 4 * sisi;
	}
};



int main() {
	float jejari, luas, keliling, sisi,
		int pilihan;
	do {
		cout << "\n 1. Lingkaran dibuat";
		cout << "\n 2. Bujursangkar dibuat";
		cin >> pilihan;

		switch (pilihan) { 
		case 1:
			cout << "masukan jari-jari = ";
			cin >> jejari;
			cout << "\n luas lingkaran = ";
			cin >> luas;
			cout << "\n keliling lingkaran = ";
			cin >> keliling;
			break;
		case 2:
			cout << "masukan sisi = ";
			cin >> sisi;
			cout << "\n luas bujursangkar = ";
			cin >> luas;
			cout << "\n keliling bujursangkar = ";
			cin >> keliling;
			break;
		}
	} while (pilihan != 3);
};