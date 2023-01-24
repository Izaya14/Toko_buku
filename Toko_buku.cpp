#include <iostream>
using namespace std;
int mainMenu, pilihbuku, belibuku, beliNovel, volume [3], beliKomik, copy [3];
int total_buku, total_akhir, total_novel, total_komik, umur, jum_req;
char yesNo, back;
float diskon;
string name, judul, author, alasan, nomor;
struct buku{
	int hargabuku [3] {80000, 76000, 90000};
	string namaBuku [3] {"Buku Programming", "Buku TOEFL", "Buku Minna no Nihongo"};
	int hargaNovel [3] {68000, 85000, 82000};
	string namaNovel [3] {"Konosuba", "Violet Evergarden", "Mushoku no Tensei"};
	int hargaKomik [3] {35000, 40000, 60000};
	string namaKomik [3] {"Haikyuu", "Nisekoi" , "Shingeki no Kyojin"};
};
void menu () {
	cout << "========================" << endl;
	cout << " Youkoso Boku no Honya e" << endl;
	cout << "========================"<< endl;
	cout << "1. Beli Buku" << endl;
	cout << "2. Request Buku" << endl;
	cout << "3. Exit" << endl;
	cout << "========================" << endl;
	cout << "pilih Opsi [1-3]? : ";
	cin >> mainMenu;
    cout << endl;
}
void case1 () {
	cout << "DAFTAR BUKU" << endl;
	cout << "===========" << endl;
	cout << "1. Buku Paket" << endl;
	cout << "2. Light Novel" << endl;
	cout << "3. Komik" << endl;
	cout << "Buku yang anda cari no: ";
	cin >> pilihbuku;
}
void case1_bukupaket () {
	buku paket;
	cout << "Daftar Buku Yang Tersedia" << endl;
	cout << "=========================" << endl;
	cout << "1. " << paket.namaBuku[0] << "\t = Rp." << paket.hargabuku[0] << endl;
	cout << "2. " << paket.namaBuku[1] << "\t\t = Rp." << paket.hargabuku[1] << endl;
	cout << "3. " << paket.namaBuku[2] << " = Rp." << paket.hargabuku[2] << endl;
	cout << "\nPilih Opsi no: [1-3] ";
	cin >> belibuku;
}
void case1_novel () {
	buku novel;
	cout << "Daftar Novel Yang Tersedia" << endl;
	cout << "=========================" << endl;
	cout << "1. " << novel.namaNovel[0] << "\t\t = Rp." << novel.hargaNovel[0] << endl;
	cout << "2. " << novel.namaNovel[1] << "\t = Rp." << novel.hargaNovel[1] << endl;
	cout << "3. " << novel.namaNovel[2] << "\t = Rp." << novel.hargaNovel[2] << endl;
	cout << "\nPilih Opsi no: [1-3] ";
	cin >> beliNovel;
}
void case1_komik () {
	buku komik;
	cout << "Daftar Komik Yang Tersedia" << endl;
	cout << "=========================" << endl;
	cout << "1. " << komik.namaKomik[0] << "\t\t = Rp." << komik.hargaKomik[0] << endl;
	cout << "2. " << komik.namaKomik[1] << "\t\t = Rp." << komik.hargaKomik[1] << endl;
	cout << "3. " << komik.namaKomik[2] << "\t = Rp." << komik.hargaKomik[2] << endl;
	cout << "\nPilih Opsi no: [1-3] ";
	cin >> beliKomik;
}
void case2 () {
	cout << "Toko kami baru saja berdiri, maka dari itu list buku masih sangatlah terbatas";
			cout << "\nNamun kami akan berusaha agar bisa memenuhi harapan para pelanggan";
			cout << "\n\nAnda bisa request buku apapun agar bisa tersedia di toko kami";
			cout << "\n\nIngin request buku? (y/n) ";
			cin >> yesNo;
			system ("cls");
			if (yesNo == 'y' || yesNo == 'Y') {
				cout << "Jumlah judul buku yang ingin di request: ";
				cin >> jum_req;
				system ("cls");
				for (int i = 1; i <= jum_req; i++) {
					cout << "Judul Buku \t: ";
					getline (cin >> ws, judul);
					cout << "Author \t\t: ";
					getline (cin >> ws, author);
					cout << "Alasan Anda \t: ";
					getline (cin >> ws, alasan);
					cout << endl;
				}
				system ("cls");
				cout << "Silahkan isi biodata diri anda dibawah ini:" << endl;
				cout << "===========================================" << endl;
				cout << "Nama \t : ";
				getline (cin >> ws, name);
				cout << "Umur \t : ";
				cin >> umur;
				cout << "Nomor HP : ";
				cin >> nomor;
				system ("cls");
				cout << "Terima kasih " << name << " atas masukan atau request-an buku nya" << endl;
				cout << "Kami akan memproses nya dan akan memberitahu anda se-segera mungkin ke no " << nomor << endl;	
			} 
}
void caseEnd () {
	cout << "Terima Kasih Atas Kunjungan Anda" << endl;
	cout << "END PROGRAM";
}
enum mainMenu {Beli = 1, Request, Exit};
enum pilihbuku {Paket = 1, Novel, Komik};

int main()
{
	int copy [3];
	buku paket;
	buku novel;
	buku komik;
	do {
	system("cls");
	menutama:
	menu ();
	system ("CLS");
	switch (mainMenu) {
		case Beli:
			case1();
			system ("CLS");
			daftarpaket:
			switch (pilihbuku) {
				case Paket:
					case1_bukupaket();
					system ("CLS");
					if (belibuku == 1) {
						cout << "Anda akan membeli " << paket.namaBuku[2] << endl;
						cout << "*Note beli 3 atau lebih mendapatkan diskon 10%" << endl << endl;
						cout << "\nIngin membeli berapa copy? ";
						cin >> copy [0];
						
						if (copy[0] >= 3) {
							total_buku = (paket.hargabuku[0] * copy [0]);
							diskon = total_buku * 0.1;
							total_akhir = total_buku - diskon;
							system ("CLS");
							cout << "Selamat Anda Mendapatkan Diskon 10% = Rp. " << diskon << endl;
							cout << "Dari total buku yang anda beli Rp. " << total_buku << endl; 
							
							cout << "\nTotal Harga Buku Yang Perlu Anda Bayar: Rp. " << total_akhir << endl;
						}
						else {
							total_buku = paket.hargabuku[0] * copy [0];
							cout << "\nTotal Harga Buku Yang Perlu Anda Bayar: Rp. " << total_buku << endl;
						}
					}
					else if (belibuku == 2) {
						cout << "Anda akan membeli " << paket.namaBuku[2] << endl;
						cout << "*Note beli 3 atau lebih mendapatkan diskon 10%" << endl << endl;
						cout << "\nIngin membeli berapa copy? ";
						cin >> copy [1];
						
						if (copy[1] >= 3) {
							total_buku = (paket.hargabuku[1] * copy [1]);
							diskon = total_buku * 0.1;
							total_akhir = total_buku - diskon;
							system ("CLS");
							cout << "Selamat Anda Mendapatkan Diskon 10% = Rp. " << diskon << endl;
							cout << "Dari total buku yang anda beli Rp. " << total_buku << endl; 
							
							cout << "\nTotal Harga Buku Yang Perlu Anda Bayar: Rp. " << total_akhir << endl;
						}
						else {
							total_buku = paket.hargabuku[1] * copy [1];
							cout << "\nTotal Harga Buku Yang Perlu Anda Bayar: Rp. " << total_buku << endl;
						}
					}
					else if (belibuku == 3) {
						cout << "Anda akan membeli " << paket.namaBuku[2] << endl;
						cout << "*Note beli 3 atau lebih mendapatkan diskon 10%" << endl << endl;
						cout << "\nIngin membeli berapa copy? ";
						cin >> copy [2];
						
						if (copy[2] >= 3) {
							total_buku = (paket.hargabuku[2] * copy [2]);
							diskon = total_buku * 0.1;
							total_akhir = total_buku - diskon;
							system ("CLS");
							cout << "Selamat Anda Mendapatkan Diskon 10% = Rp. " << diskon << endl;
							cout << "Dari total buku yang anda beli Rp. " << total_buku << endl; 
							
							cout << "\nTotal Harga Buku Yang Perlu Anda Bayar: Rp. " << total_akhir << endl;
						}
						else {
							total_buku = paket.hargabuku[2] * copy [2];
							cout << "\nTotal Harga Buku Yang Perlu Anda Bayar: Rp. " << total_buku << endl;
						}
					}
					else {
						system ("CLS");
						goto daftarpaket;
					}
					cout << "\n\nIngin kembali melihat daftar buku paket? (y/n) ";
					cin >> yesNo;	
					system ("CLS");
					if (yesNo == 'y' || yesNo == 'Y') {
						goto daftarpaket;	
					} break;
			}

			switch (pilihbuku) {
				daftarnovel:
				case Novel:
					case1_novel();
					system ("CLS");
					if (beliNovel == 1) {
						cout << novel.namaNovel[0] << " memiliki 17 Volume" << endl;
						cout << "\nIngin membeli berapa volume? ";
						cin >> volume [0];
						total_novel = (novel.hargaNovel[0] * volume [0]);
						cout << "\nTotal Harga Novel Yang Perlu Anda Bayar: Rp. " << total_novel << endl;
					}
					else if (beliNovel == 2) {
						cout <<  novel.namaNovel[1] << " memiliki 2 Volume" << endl;
						cout << "\nIngin membeli berapa volume? ";
						cin >> volume [1];
						total_novel = (novel.hargaNovel[1] * volume [1]);
						cout << "\nTotal Harga Novel Yang Perlu Anda Bayar: Rp. " << total_novel<< endl;
					}
					else if (beliNovel == 3) {
						cout << novel.namaNovel[2] << " memiliki 26 Volume" << endl;
						cout << "\nIngin membeli berapa volume? ";
						cin >> volume [2];
						total_novel = (novel.hargaNovel[2] * volume [2]);
						cout << "\nTotal Harga Novel Yang Perlu Anda Bayar: Rp. " << total_novel << endl;
					}
					else {
						system ("CLS");
						goto daftarnovel;
					}
					cout << "\n\nIngin kembali melihat daftar buku novel? (y/n) ";
					cin >> yesNo;
					system ("CLS");
					if (yesNo == 'y' || yesNo == 'Y') {
						goto daftarnovel;	
					} break;
			} 

			switch (pilihbuku) {
				daftarkomik:
				case Komik:
					case1_komik ();
					system ("CLS");
					if (beliKomik == 1) {
						cout << komik.namaKomik[0] << " memiliki 45 Volume" << endl;
						cout << "\nIngin membeli berapa volume? ";
						cin >> volume [0];
						total_komik= (komik.hargaKomik[0] * volume [0]);
						cout << "\nTotal Harga Novel Yang Perlu Anda Bayar: Rp. " << total_komik<< endl;
					}
					else if (beliKomik == 2) {
						cout <<  komik.namaKomik[1] << " memiliki 25 Volume" << endl;
						cout << "\nIngin membeli berapa volume? ";
						cin >> volume [1];
						total_komik= (komik.hargaKomik[1] * volume [1]);
						cout << "\nTotal Harga Novel Yang Perlu Anda Bayar: Rp. " << total_komik<< endl;
					}
					else if (beliKomik == 3) {
						cout << komik.namaKomik[2] << " memiliki 34 Volume" << endl;
						cout << "\nIngin membeli berapa volume? ";
						cin >> volume [2];
						total_komik= (komik.hargaKomik[2] * volume [2]);
						cout << "\nTotal Harga Novel Yang Perlu Anda Bayar: Rp. " << total_komik<< endl;
					}
					else {
						system ("CLS");
						goto daftarkomik;
					}
					cout << "\n\nIngin kembali melihat daftar buku komik? (y/n) ";
					cin >> yesNo;
					system ("CLS");
					if (yesNo == 'y' || yesNo == 'Y') {
						goto daftarkomik;	
					} 
			} break;
			////////////////// Akhir Line Dari Case 1 /////////////////////
		case Request:
			case2();
			break;
		case Exit:
			caseEnd();
			break;
		default:
			system ("cls");
			goto menutama;
	}	
		if (mainMenu <= 2) {
		cout << "Kembali ke menu utama? (y/n) ";
		cin >> back;
		}
	}  
	while (back == 'y' || back == 'Y');
	system ("cls");
	caseEnd();
    return 0;
}