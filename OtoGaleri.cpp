#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <cstring>
using namespace std;

enum yakitlar{
Benzin='B',
Gaz='G',
Dizel='D',
Hibrit='H',
};
struct otomobil{
string marka;
string model;
int yil;
int km;
int fiyat;
yakitlar yakit;
};
int main(){

string tur;
cout<<"Aracinizin Turunu Giriniz : "<<endl;
getline(cin,tur);
otomobil suv,ticari,binek;
if(tur=="binek"){
cout<<"     ----- Binek Otomobil Icin Gerekli Bilgileri Giriniz -----     "<<endl;
cout<<"Marka Bilgisi :"<<endl;
cin>>binek.marka;
cout<<"Model Bilgisi : "<<endl;
cin>>binek.model;
cout<<"Yil Bilgisi : "<<endl;
cin>>binek.yil;
cout<<"Km Bilgisi : "<<endl;
cin>>binek.km;
cout<<"Fiyat Bilgisi : "<<endl;
cin>>binek.fiyat;

char yakitsecim;
cout<<"Yakit Bilgisini (B/D/G/H) : "<<endl;
cin>>yakitsecim;
switch (yakitsecim) {
case 'B':
case 'b':
binek.yakit = Benzin;
break;
case 'G':
case 'g':
binek.yakit = Gaz;
break;
case 'D':
case 'd':
binek.yakit = Dizel;
break;
case 'H':
case 'h':
binek.yakit = Hibrit;
break;
default:
cout << "Hatali Yakit Secimi!" << endl;
    }

cout<<"              ----- Binek Otomobil Bilgileri -----              "<<endl;
cout<<"Marka : "<<binek.marka<<endl;
cout<<"Model : "<<binek.model<<endl;
cout<<"Yil: "<<binek.yil<<endl;
cout<<"Fiyat : "<<binek.fiyat<<endl;
cout<<"Km: "<<binek.km<<endl;
switch (binek.yakit) {
case Benzin: 
cout << "Yakit: Benzin" << endl; 
break;
case Gaz: cout << "Yakit: Gaz" << endl;
break;
case Dizel:
cout << "Yakit: Dizel" << endl;
break;
case Hibrit:
cout << "Yakit: Hibrit" << endl;
break;
default:
cout<<"Hatali Yakit Secimi Yapildi ! "<<endl;
}
}
if(tur=="suv"){
cout<<"     ----- SUV Otomobil Icin Gerekli Bilgileri Giriniz -----     "<<endl;
cout<<"Marka Bilgisi :"<<endl;
cin>>suv.marka;
cout<<"Model Bilgisi : "<<endl;
cin>>suv.model;
cout<<"Yil Bilgisi : "<<endl;
cin>>suv.yil;
cout<<"Km Bilgisi : "<<endl;
cin>>suv.km;
cout<<"Fiyat Bilgisi : "<<endl;
cin>>suv.fiyat;

char yakitsecim2;
cout<<"Yakit Bilgisini (B/D/G/H) : "<<endl;
cin>>yakitsecim2;
switch (yakitsecim2) {
case 'B':
case 'b':
suv.yakit = Benzin;
break;
case 'G':
case 'g':
suv.yakit = Gaz;
break;
case 'D':
case 'd':
suv.yakit = Dizel;
break;
case 'H':
case 'h':
suv.yakit = Hibrit;
break;
default:
cout << "Hatali Yakit Secimi!" << endl;
    }

cout<<"              ----- SUV Otomobil Bilgileri -----              "<<endl;
cout<<"Marka : "<<suv.marka<<endl;
cout<<"Model : "<<suv.model<<endl;
cout<<"Yil: "<<suv.yil<<endl;
cout<<"Fiyat : "<<suv.fiyat<<endl;
cout<<"Km: "<<suv.km<<endl;
switch (suv.yakit) {
case Benzin: 
cout << "Yakit: Benzin" << endl; 
break;
case Gaz: cout << "Yakit: Gaz" << endl;
break;
case Dizel:
cout << "Yakit: Dizel" << endl;
break;
case Hibrit:
cout << "Yakit: Hibrit" << endl;
break;
default:
cout<<"Hatali Yakit Secimi Yapildi ! "<<endl;
}
}

if(tur=="ticari"){
cout<<"     ----- Ticari Otomobil Icin Gerekli Bilgileri Giriniz -----     "<<endl;
cout<<"Marka Bilgisi :"<<endl;
cin>>ticari.marka;
cout<<"Model Bilgisi : "<<endl;
cin>>ticari.model;
cout<<"Yil Bilgisi : "<<endl;
cin>>ticari.yil;
cout<<"Km Bilgisi : "<<endl;
cin>>ticari.km;
cout<<"Fiyat Bilgisi : "<<endl;
cin>>ticari.fiyat;

char yakitsecim3;
cout<<"Yakit Bilgisini (B/D/G/H) : "<<endl;
cin>>yakitsecim3;
switch (yakitsecim3){
case 'B':
case 'b':
binek.yakit = Benzin;
break;
case 'G':
case 'g':
binek.yakit = Gaz;
break;
case 'D':
case 'd':
binek.yakit = Dizel;
break;
case 'H':
case 'h':
binek.yakit = Hibrit;
break;
default:
cout << "Hatali Yakit Secimi!" << endl;
    }

cout<<"              ----- Ticari Otomobil Bilgileri -----              "<<endl;
cout<<"Marka : "<<ticari.marka<<endl;
cout<<"Model : "<<ticari.model<<endl;
cout<<"Yil: "<<ticari.yil<<endl;
cout<<"Fiyat : "<<ticari.fiyat<<endl;
cout<<"Km: "<<ticari.km<<endl;
switch (ticari.yakit) {
case Benzin: 
cout << "Yakit: Benzin" << endl; 
break;
case Gaz: 
cout << "Yakit: Gaz" << endl;
break;
case Dizel:
cout << "Yakit: Dizel" << endl;
break;
case Hibrit:
cout << "Yakit: Hibrit" << endl;
break;
default:
cout<<"Hatali Yakit Secimi Yapildi ! "<<endl;
}

}

    return 0;
}