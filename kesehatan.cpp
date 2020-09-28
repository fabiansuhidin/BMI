#include<iostream>
using namespace std;

// Function for number 1
double BMI(double kg,double cm){
	double bmiscore = kg /(cm*cm);
	return bmiscore;
}
// Function for number 3 untuk laki-laki
double BBIL(double cm){
	double st = cm-100;
	double pr = 0.1;
	double bbil = st-(st*pr) ;   //((cm - 100) - ((10/100) * (cm-100)));
	return bbil;
}

// Function for number 3 untuk perempuan
double BBIP(double cm){
	double st = cm-100;
	double pr = 0.15;
	double bbip = st-(st*pr) ; //(cm-100)-((15/100)*(cm-100));
	return bbip;
}

// Function for number 4
double water(double kg){
	double ml=30;
	double waterperday=kg*ml;
	return waterperday;
}

int main (){
	
	int ans=0;
	double kg,cm;
	char choice,gen;

do{

	cout << endl << "===================================================" << endl;
	cout << endl << "    !! SELAMAT DATANG DI APPLIKASI KESEHATAN !!   " << endl << endl;
	cout << "===================================================" << endl << endl;
	cout << " > Fasilitas : " << endl << endl;
	cout << " 1 .) Cek BMI (Body Mass Index)" << endl;
	cout << " 2 .) Cek Berat Badan Ideal" << endl;
	cout << " 3 .) Cek Kebutuhan Air per Hari" << endl;
	
	cout << endl << "Plih salah satu fasilitas ( 1 / 2 / 3 ) : " ;
	cin >> ans;
	
	// CEK BMI
	if (ans == 1){
	cout << endl << "	Kuy Cek BMI !!" << endl;
	cout << "	Masukkan berat badan anda (kg) : " ;
	cin >> kg;
	cout << "	Masukkan tinggi anda (cm) : ";
	cin >> cm;
	// Menghitung Hasil BMI
		double bmiscore = BMI(kg,cm);
		cout << "	Hasil BMI adalah : " << bmiscore << endl;
	// Kategori BMI
		if(bmiscore >= 0.0018 && bmiscore <= 0.0025){
			cout << "	BMI Kategori : Normal" << endl;
		}
		else if(bmiscore >= 0.0025 && bmiscore <= 0.0030){
			cout << "	BMI Kategori : Overweight" << endl;
		}
		else if(bmiscore > 0.0030){
			cout << "	BMI Kategori : Obesity" << endl;
		}
		else if(bmiscore < 0.0018){
			cout << "	BMI Kategori : Underweight" << endl;
		}
	}
	
	// CEK Berat Badan Ideal
	else if (ans == 2){
	cout << "	Masukkan berat badan anda (kg) : " ;
	cin >> kg;
	cout << "	Masukkan tinggi anda (cm) : ";
	cin >> cm;
	cout << "	Pilih Gender (L/P) : " ;
	cin >> gen ;
	
	double bbil = BBIL(cm);
	double bbip = BBIP(cm);
	// Penentuan Laki-laki atau perempuan
		if (gen == 'L' || gen == 'l'){
			cout << "	Berat badan ideal anda : " << bbil << endl;
		}
		else if (gen == 'P' || gen == 'p'){
			cout << "	Berat badan ideal anda : " << bbip << endl;
		}
	// Penentuan idel atau tidak
		if (bbip == kg || bbil ==kg){
			cout << "	Sudah Ideal!" << endl;
		}
		else if (bbip != kg || bbil != kg){
			cout << " 	Semangat, Belum ideal" << endl;
		}
	}
	
	// CEK KEBUTUHAN AIR
	else if (ans == 3){
	
	cout << "	Masukkan berat badan anda (kg) : " ;
	cin >> kg ;
	
	double waterprs = water(kg);
	
	cout << "	Kebutuhan air per hari anda adalah sebanyak : " << waterprs << " ml" << endl;
	cout << "	Mau tau dalam skala liter ? " << endl;
	cout << " 	Jawab Y(Mau) / N(Tidak) : ";
	cin >> choice;
	// Pembuat menjadi liter
		if(choice == 'Y' || choice == 'y'){
			double finalwater = waterprs*0.001;
			cout << "	Kebutuhan air per hari anda dalam satuan liter : " << finalwater << " l" << endl;
		}
		else if (choice == 'N'||choice =='n'){
			cout << "	Okeee";
		}
}
	// Pemilihan fasilitas lanjut
	cout << endl << "Apakah anda masih mau memilih fasilitas yang lain ?" <<endl;
	cout << "Jawab (Y) untuk lanjut/ Jawab (N) untuk stop : " ;
	cin >> choice;
	
}
	while(choice == 'Y' || choice == 'y');
	cout << endl << "===================== Thankyou =====================" ;
}

