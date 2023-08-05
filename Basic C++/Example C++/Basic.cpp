#include <iostream> // --> Input Output Stream ( Buat Output Text / Data di Program C++)
#include <string>

 
int main() // --> Function / Fungsi ( Wadah buat program yang mau di buat )
{
	// Bala bala, nasi, ayam ( ayam goreng, nasi di masak)

	// Data Types 
	// Nomor --> Data Integer (int)
	// Text/Kalimat --> Data string/char 
	std::cout << "--------------------------------------------------" << std::endl;

	// Input Output
	int kelas; // --> Kalo datanya di isi gaperlu ada "=" sama isi angka ato text
	std::string nama;

	std::cout << "Isi Nama : "; std::cin >> nama; 
	std::cout << "Isi Kelas : "; std::cin >> kelas;

	std::cout << "--------------------------------------------------" << std::endl;

	std::cout << "Nama : " << nama << std::endl;
	std::cout << "Kelas : " << kelas << std::endl;


	std::cout << "--------------------------------------------------" << std::endl;

	// Input Output Kalkulasi
	int apel;
	int semongko;
	int totalbuah;

	std::cout << "Apel : "; std::cin >> apel;
	std::cout << "Semongko : "; std::cin >> semongko;

	std::cout << "--------------------------------------------------" << std::endl;

	totalbuah = apel + semongko;

	std::cout << "Total Apel : " << apel << std::endl;
	std::cout << "Total Semongko : " << semongko << std::endl;
	std::cout << "Total Buah : " << totalbuah << std::endl;

	std::cout << "--------------------------------------------------" << std::endl;

	// Kalkulasi

	int x = 5;
	int y = 6;
	int z = 7;

	int jumlah = x + y + z; // Data Jumlah isinya hasil dari penjumlahan data x,y,dan z (Penjumlahan)
	int multiply = x * y * z; // Data Multiply isi dari hasil perkalian x,y,dan z (Perkalian)
	int divided = multiply / jumlah; // Data Divided isi dari hasil pembagian antara kalkulasi jumlah dan Multiply

	std::cout << "Penjumlahan : " << jumlah << std::endl;
	std::cout << "Perkalian : " << multiply << std::endl;
	std::cout << "Perkalian : " << divided << std::endl;

	std::cout << "--------------------------------------------------" << std::endl;

	


	return 0;
}

// Project
// Made a Simple program about Data Input Ex: Input Student Name, Class, etc.
// Calculate their Score based on Lecture Ex: English, Math, Sunda, Banzai, Corel, DPK
// Requirement !
// Code must be written in C++
// Code must Run with no Issues
// Source code must be made public entirely
// Target Deadline Thursday, 10 August 2023.