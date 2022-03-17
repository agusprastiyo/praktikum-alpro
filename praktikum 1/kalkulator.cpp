#include<iostream>
#include "aritmatika.h"
using namespace std;
int main(int argc, char** argv)
{
	float a, b;
	int c;
	cout<<"PROGRAM KALKULATOR"<<endl;
	cout<<"Menu Operasi : "<<endl;
	cout<<" 1. Penambahan"<<endl;
	cout<<" 2. Pengurangan"<<endl;
	cout<<" 3. Perkalian"<<endl;
	cout<<" 4. Pembagian"<<endl;
	cout<<"Pilih Menu No    : ";cin>>c;
	cout<<"Bilangan Pertama : ";cin>>a;
	cout<<"Bilangan Kedua   : ";cin>>b;
	cout<<"Hasil "<<a;
	if(c == 1)
	{
		cout<<" + "<<b<<" = "<<jumlah(a, b)<<endl;
	}
	else if(c == 2)
	{
		cout<<" - "<<b<<" = "<<kurang(a, b)<<endl;
	}
	else if(c == 3)
	{
		cout<<" * "<<b<<" = "<<kali(a, b)<<endl;
	}
	else if(c == 4)
	{
		cout<<" / "<<b<<" = "<<bagi(a, b)<<endl;
	}
	return 0;
}
