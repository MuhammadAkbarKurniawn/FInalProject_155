#include<iostream>
using namespace std;

class bidangDatar {
private:
	int x,y; 

public:
	bidangDatar() { 
		x = 0;
		y = 0;
	}

	virtual void input() {} 
	virtual float Luas(int a) { return 0; } 
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return; }


	void setX(int a) { 
		this->x = a;
	}

	int getX() { 
		return x;
	}



};

class lingkaran : public bidangDatar {
public:
	void input() {
		int r;

		cout << "Lingkaran dibuat" << endl;
		cout << "Masukkan jejari : ";
		cin >> r;
		setX(r);
	}

	float Luas(int a) {
		return 3.14 * a * a;
	}

	float Keliling(int a) {
		return 2 * 3.14 * a;
	}

};

class PersegiPanjang : public bidangDatar {
public:
	void input() {
		int p;
		int l;

		cout << "\nPersegiPanjang dibuat" << endl;
		cout << "Masukkan Panjang : ";
		cin >> p;
		cout << "Masukkan Lebar : ";
		cin >> l;
		setX(p);
		setX(l);
	}

	float Luas(int a) {
		return a * a;
	}

	float Keliling(int a) {
		return a * a;
	}
};



int main() {
	char pilihan;

	do {	
	lingkaran* l;
	PersegiPanjang* Pp;

	l = new lingkaran;
	l->input();
	cout << "Luas Lingkaran : " << l->Luas(l->getX()) << endl;
	cout << "Keliling Lingkaran : " << l->Keliling(l->getX()) << endl;
	cout << "Ukuran Lingkaran adalah Sedang" << endl;

	Pp = new PersegiPanjang;
	Pp->input();
	cout << "Luas PersegiPanjang : " << Pp->Luas(l->getX()) << endl;
	cout << "Keliling PersegiPanjang : " << Pp->Keliling(Pp->getX()) << endl;
	cout << "Ukuran PersegiPanjang adalah Sedang" << endl;

	cout << "Apakah Anda ingin mengulang (Y/N)? ";
	cin >> pilihan;

	} while (pilihan == 'Y' || pilihan == 'y');

	return 0;
};