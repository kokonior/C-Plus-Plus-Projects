/*
{Membuat Program Record Mahasiswa, lalu mencari datanya menggunakan NIM atau Nama menggunakan method
NAMA    = AMMAR SUFYAN
TANGGAL = Dec 4, 2020}

ProgramRecordMahasiswa
Deklarasi
	n: int
	status: char
	m: Mahasiswa
	m1: Mahasiswa[10]
	method inputDataMahasiswa(Mahasiswa &)
	method tampilDataMahasiswa(Mahasiswa &)
	method inputDataArrayMahasiswa(Mahasiswa [], int)
	method tampilDataArrayMahasiswa(Mahasiswa [], int)
	method cariDataArrayMahasiswa(Mahasiswa [], string, int)
	method cariIndeksArrayMahasiswa(Mahasiswa [], string, int) -> int
Begin
	write("------------------------------")
	write("| Dibuat oleh: Ammar Sufyan  |")
	write("------------------------------")

	write("============================PROGRAM RECORD MAHASISWA===========================")
	write("Masukkan jumlah mahasiswa yang ingin Anda masukkan: ")
	read(n)

	inputDataArrayMahasiswa(m1, n) {prosedur menginput data mahasiswa}

	tampilDataArrayMahasiswa(m1, n) {prosedur menampilkan data mahasiswa}

	write("Tekan tombol apapun di keyboard untuk melanjutkan mencari data mahasiswa")
	write(pause)
	clearscreen

	cariDataArrayMahasiswa(m1, n); {prosedur mencari NIM/nama}

	do
		write("Ingin mencari data lagi? [y/n]")
		read(status)
		if(status == 'n' || status == 'N')
			break
		else if(status == 'y' || status == 'N')
			cariDataArrayMahasiswa(m1, n);
			continue
		else
			write("Mohon masukkan huruf [y/n]!"
			write("-----------------------------------")
		endIf
	while(true)
	endDoWhile

	write("Terima kasih, program telah selesai")
END
*/

#include <iostream>
#include <iomanip>
using namespace std;

/*
type Record Mahasiswa
	nama: string
	nim: int
	prodi: string
	ipk: float
endRecord
*/
typedef struct
{
	string nama;
	string nim;
	string prodi;
	float ipk;
} Mahasiswa;

void inputDataMahasiswa(Mahasiswa &);
void tampilDataMahasiswa(Mahasiswa &);
void inputDataArrayMahasiswa(Mahasiswa [], int);
void tampilDataArrayMahasiswa(Mahasiswa [], int);
void cariDataArrayMahasiswa(Mahasiswa [], int);
int cariIndeksArrayMahasiswa(Mahasiswa [], string, int);

int main()
{
	int n;
	char status;
	Mahasiswa m;
	Mahasiswa m1[10];

	cout << "------------------------------" << endl;
	cout << "| Dibuat oleh: Ammar Sufyan  |" << endl;
	cout << "------------------------------" << endl << endl;

 	cout << "============================PROGRAM RECORD MAHASISWA===========================" << endl;
	cout << "Masukkan jumlah mahasiswa yang ingin Anda masukkan: ";
	cin >> n;
	cout << endl;
	system("cls");

	inputDataArrayMahasiswa(m1, n); //prosedur menginput data mahasiswa

	tampilDataArrayMahasiswa(m1, n); //prosedur menampilkan data mahasiswa

	cout << "Tekan tombol apapun di keyboard untuk melanjutkan mencari data mahasiswa" << endl;
	system("pause");
	system("cls");

	cariDataArrayMahasiswa(m1, n); //prosedur mencari NIM/nama

	do
	{
		cout << "Ingin mencari data lagi? [y/n]";
		cin >> status;
		if(status == 'n' || status == 'N')
		{
			system("cls");
			break;
		}
		else if(status == 'y' || status == 'Y')
		{
			system("cls");
			cariDataArrayMahasiswa(m1, n); //prosedur mencari NIM/nama
			continue;
		}
		else
		{
			cout << endl << "Mohon masukkan huruf [y/n]!" << endl;
			cout << "-----------------------------------" << endl;
		}
	}
	while(status != 'y' || status != 'Y' || status != 'n' || status != 'N');

	cout << "Terima kasih, program telah selesai" << endl;

	system("pause");
	return 0;
}

/*
method inputDataMahasiswa(Mahasiswa &)
	write("Masukkan nama Anda: ")
	read(m.nama)
	write("Masukkan NIM Anda: ")
	read(m.nim)
	write("Masukkan Prodi Anda: ")
	read(m.prodi)
	write("Masukkan IPK Anda: ")
	read(m.ipk)
endMethod
 */
void inputDataMahasiswa(Mahasiswa &m)
{
	cout << "Masukkan nama Anda	: ";
	cin.ignore(1, '\n');
	getline(cin, m.nama);
	cout << "Masukkan NIM Anda	: ";
	cin >> m.nim;
	cout << "Masukkan Prodi Anda	: ";
	cin.ignore(1, '\n');
	getline (cin, m.prodi);
	cout << "Masukkan IPK Anda	: ";
	cin >> m.ipk;
	system("cls");
}

/*
method tampilDataMahasiswa(Mahasiswa &m)
	write("|" & align(left) & width(22) & m.nama & "|")
	write(" " & align(left) & width(16) & m.nim & "|")
	write(" " & align(left) & width(20) & m.prodi & "|")
	write(" " & align(left) & width(8) & m.ipk & "|")
endMethod
 */
void tampilDataMahasiswa(Mahasiswa &m)
{
	cout << "|" << setiosflags(ios::left) << setw(22) << m.nama << "|";
	cout << " " << setiosflags(ios::left) << setw(16) << m.nim << "|";
	cout << " " << setiosflags(ios::left) << setw(20) << m.prodi << "|";
	cout << " " << setiosflags(ios::left) << setw(8) << m.ipk << "|";
	cout << endl;
}

/*
method inputDataArrayMahasiswa(m: Mahasiswa[10], int n)
	write("==============================INPUT DATA MAHASISWA=============================")
	write("Data mahasiswa ke-" & i+1 & ":")
	write("-------------------------------------------")
	inputDataMahasiswa(m[i])
	write("===============================================================================")
endMethod
 */
void inputDataArrayMahasiswa(Mahasiswa m[10], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "==============================INPUT DATA MAHASISWA=============================" << endl;
		cout << "Data mahasiswa ke-" << i+1 << ":" << endl;
		cout << "---------------------------------------------" << endl;
		inputDataMahasiswa(m[i]);
		cout << "===============================================================================" << endl << endl;
		system("cls");
	}
}

/*
method tampilDataArrayMahasiswa(m: Mahasiswa[10], int n)
	write("===============================================================================")
	write("| No.|       N a m a        |     N I M       |        Prodi        |   IPK   |")
	write("===============================================================================")
	for(int i = 0 to (n-1))
		write("| " & align(left) & width(3) & i+1 & "|")
		tampilDataMahasiswa(m[i])
		write("-------------------------------------------------------------------------------" & writeln)
	endFor
	writelnln
endMethod
 */
void tampilDataArrayMahasiswa(Mahasiswa m[10], int n)
{
	cout << "===============================================================================" << endl;
	cout << "| No.|       N a m a        |     N I M       |        Prodi        |   IPK   |" << endl;
	cout << "===============================================================================" << endl;
	for(int i = 0; i < n; i++)
	{
		cout << "| " << setiosflags(ios::left) << setw(3) << i+1;
		tampilDataMahasiswa(m[i]);
		cout << "-------------------------------------------------------------------------------" << endl;
	}
	cout << " " << endl << endl;
}

/*
method cariIndeksArrayMahasiswa(m: Mahasiswa[10], x: char[15], int n)
	indeks: int
	indeks:= -999;
	for(int i = 0 to (n-1))
		if(m[i].nim == x) then
			indeks := i
		endIf
	endFor
	return indeks
endMethod
 */
int cariIndeksArrayMahasiswa(Mahasiswa m[10], string x, int n)
{
	int indeks;
	indeks = -999;
	for(int i = 0; i < n; i++)
	{
		if((m[i].nim == x) || (m[i].nama == x))
		{
			indeks = i;
		}
	}
	return indeks;
}

/*
method cariDataArrayMahasiswa(m: Mahasiswa[10], int n)
	indeks: int
	cariMhs: string

	write("==============================================MENCARI DATA MAHASISWA==============================================")
	write("Masukkan NIM/Nama yang ingin Anda cari = ")
	read(cariMhs)

	indeks := cariIndeksArrayMahasiswa(m, cariMhs, n)
	if(indeks = -999) then
		writeln
		write("Maaf, data yang Anda cari tidak ditemukan")
	else
		writeln
		write("Lokasi NIM/Nama \"" & cariMhs & "\" terdapat pada tabel nomor ke-" & indeks+1)
		write(" dan terdapat pada array " << "\"Mahasiswa\"" & " indeks ke-" & indeks)

		write("--------------------------------------------------------------------------")
		write("|       N a m a        |     N I M       |        Prodi        |   IPK   |")
		write("--------------------------------------------------------------------------")
		tampilDataMahasiswa(m[indeks])
		write("--------------------------------------------------------------------------")
	endIf
	write("==================================================================================================================")
endMethod
 */
void cariDataArrayMahasiswa(Mahasiswa m[10], int n)
{
	int indeks;
	string cariMhs;

	cout << "==============================================MENCARI DATA MAHASISWA==============================================" << endl;
	cout << "Masukkan NIM/Nama yang ingin Anda cari = ";
	cin.ignore(1, '\n');
	getline(cin, cariMhs);

	indeks = cariIndeksArrayMahasiswa(m, cariMhs, n);
	if(indeks == -999)
	{
		cout << endl;
		cout << "Maaf, data yang Anda cari tidak ditemukan" << endl;
	}
	else
	{
		cout << endl;
		cout << "Lokasi NIM/Nama \"" << cariMhs << "\" terdapat pada tabel nomor ke-" << indeks+1;
		cout << " dan terdapat pada array " << "\"Mahasiswa\"" << " indeks ke-" << indeks << endl;

		cout << "--------------------------------------------------------------------------" << endl;
		cout << "|       N a m a        |     N I M       |        Prodi        |   IPK   |" << endl;
		cout << "--------------------------------------------------------------------------" << endl;
		tampilDataMahasiswa(m[indeks]);
		cout << "--------------------------------------------------------------------------" << endl;
	}
	cout << "==================================================================================================================" << endl;
}
