#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop
				PROGRAM MEMBUAT APLIKASI MENGHITUNG BERAT BADAN
				_______________________________________________
 */

using namespace std;
int main() {
	double berat;
	double tinggi;
	double bmi;
	char status;
	
	do{
		cout<<"_________________________________________________"<<endl;
		cout<<"Nama   : Ahmad Amin Iswanto                      "<<endl;
		cout<<"URL    : Webook.id                               "<<endl;
		cout<<"_________________________________________________"<<endl;
		cout<<""<<endl;
		cout<<"================================================="<<endl;
		cout<<"+      MENGHITUNG BERAT BADAN IDEAL             +"<<endl;
		cout<<"+      ++++++++++++++++++++++++++++             +"<<endl;
		cout<<"+     BMI            +   Status Berat Badan     +"<<endl;
		cout<<"+ ----------------   +  ----------------------- +"<<endl;
		cout<<"+ Kurang dari 18.5   +   Kekurangan berat badan +"<<endl;
		cout<<"+ 18.5 sampai 24.9   +   Normal (Ideal)         +"<<endl;
		cout<<"+ 25.0 sampai 29.9   +   Kelebihan berat bedan  +"<<endl;
		cout<<"+ 30 atau lebih      +   Kegemukan (Obesitas)   +"<<endl;
		cout<<"================================================="<<endl;
		cout<<"_________________________________________________"<<endl;
		cout<<""<<endl;
		
		cout<<"Masukan Berat Badan Anda (dalam KG)     = ";
		cin>>berat;
		cout<<""<<endl;
		
		cout<<"Masukan Tinggi Badan Anda (dalam Meter) = ";
		cin>>tinggi;
		cout<<""<<endl;
		cout<<""<<endl;
		
		bmi = berat/(tinggi * tinggi);
		
		cout<<"Hasil Berat Badan Anda ";
		if(bmi >= 30.0){
			cout<<"Kegemukan (Obesitas) = "<<bmi<<endl;
		}else if(bmi >= 25.0 and bmi <= 29.9){
			cout<<"Kelebihan berat badan ="<<bmi<<endl;
		}else if(bmi >= 18.5 and bmi <= 24.9){
			cout<<"Normal (Ideal) = "<<bmi<<endl;
		}else if(bmi < 18.5){
			cout<<"Kekurangan berat badan = "<<bmi<<endl;
		}else {
			cout<<"Hasil tidak sesuai = "<<bmi<<endl;
		}
	
	cout<<""<<endl;	
	cout<<"_________________________________________________"<<endl;
	cout<<""<<endl;
	cout<<"Lagi [Y/N] = ";
	cin>>status;
	cout<<""<<endl;
	system("cls");
	}while(status == 'Y' || status == 'y');
	system("cls");
	cout<<""<<endl;
	cout<<"Keluar Sistem Terima kasih";
	
	return 0;
}
