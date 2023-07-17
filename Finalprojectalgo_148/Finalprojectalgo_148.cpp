#include <iostream>
#include <string>
using namespace std;

//isi disini
const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;


//isi disini
void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Jurusan : ";
		getline(cin, jurusan[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};

//isi disini
void tampilkanSemuaMahasiswa() {
	if (jumlahMahasiswa == 0) {
		cout << "Tidak ada data mahasiswa." << endl;
	}
	else {
		cout << "========= DAFTAR MAHASISWA =========" << endl;
		for (int i = 0; i < jumlahMahasiswa; i++) {
			cout << "NIM        : " << NIM[i] << endl;
			cout << "Nama       : " << nama[i] << endl;
			cout << "Jurusan    : " << jurusan[i] << endl;
			cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
			cout << "-------------------------------------" << endl;
		}
	}
}

//isi disini
void algorithmacariMahasiswaByNIM() {

}
//isi disini
void algorithmaSortByTahunMasuk() {
	
}


int main() {
int pilihan;
do {
cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
cout << "1. Tambah Mahasiswa" << endl;
cout << "2. Tampilkan Semua Mahasiswa" << endl;
cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
cout << "5. Keluar" << endl;
cout << "Pilihan: ";
cin >> pilihan;
cin.ignore(); 
switch (pilihan) {
case 1:
tambahMahasiswa()
break;
case 2:
tampilkanSemuaMahasiswa()
break;
case 3:
algorithmacariMahasiswaByNIM()
break;
case 4:
algorithmaSortByTahunMasuk()
break;
case 5:
cout << "Terima kasih! Program selesai." << endl;
break;
default:
cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
}
cout << endl;
} while (pilihan != 5);
return 0;
}

//2.Berdasarkan studi kasus diatas, algoritma apa saja yang anda gunakan?
// binary search dan bubble sort
//3.Jelaskan perbedaan mendasar antara algorithma stack dan queue?
//algoritma stack merupakan struktur data yang mengikuti prinsip LIFO(last in first out)
//sedangkan queue merupakan struktur data yang mengikuti prinsip FIFO(First in First out)

//4.Jelaskan pada saat bagaimana harus menggunakan algorithma stack?
//alghorithm stack digunakan saat kita ingin memasukkan element dan ingin mengeluarkannya di akhir

//5a.Seberapa banyak kedalaman yang dimiliki struktur tersebut?
//akan terus menerus hingga mendapatkan angka 1 dan tidak bisa di pecah lagi

//5b.Bagaimana cara membaca struktur pohon di atas? (Pilih salah satu metode yaitu 
//Inorder, Preorder atau Postorder Traversal)
//In = 1 5 8 12 15 20 22 25 28 30 36 38 40 45 48 50
//Preorder = 1 5 8 10 12 15 22 25 28 30 36 38 40 45 48 50
//Post = 1 8 5 15 12 10 22 20 25 36 30 28 40 38 48 45 50 