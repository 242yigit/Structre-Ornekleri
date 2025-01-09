
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <cstring>
using namespace std;

struct Kisi {
    string ad_soyad;
    string telefon_no;
    string adres;
};
struct Gonderi {
    int gonderi_no;
    double agirlik;
    double hacim;
    string garanti;
    double ucret;
    Kisi gonderen;
    Kisi alici;
    string kurye_ad_soyad;
};
struct Kurye {
    string ad_soyad;
    string telefon_no;
};
struct Islem {
    Gonderi gonderi;
    Kurye kurye;
};
int main() {
    Kisi gonderen1 = {"Ahmet Yılmaz", "5411234567", "Canakkale"};
    Kisi alici1 = {"Mehmet Akif", "5357654321", "İstanbul"};

    Kisi gonderen2 = {"Ayşe Kaya", "53652345678", "Tekirdag"};
    Kisi alici2 = {"Fatma Yıldız", "5328765432", "Ankara"};

    Kisi gonderen3 = {"Veli Demir", "5453456789", "Kocaeli"};
    Kisi alici3 = {"Ali Çelik", "5439876543", "İzmir"};

    Kisi gonderen4 = {"Emine Kılıç", "5414567890", "Maras"};
    Kisi alici4 = {"Hakan Aydın", "5536543210", "Antalya"};

    Kisi gonderen5 = {"Murat Özdemir", "5555678901", "Bursa"};
    Kisi alici5 = {"Seda Şahin", "5454321098", "Tokat"};

    Gonderi gonderi1 = {1011245, 2.5, 10, "e", 500, gonderen1, alici1, ""};
    Gonderi gonderi2 = {1011323, 3.0, 12, "h", 650, gonderen2, alici2, ""};
    Gonderi gonderi3 = {1011412, 1.5, 8, "e", 470, gonderen3, alici3, ""};
    Gonderi gonderi4 = {1011235, 2.0, 9, "h", 430, gonderen4, alici4, ""};
    Gonderi gonderi5 = {1011612, 4.0, 15, "e", 845, gonderen5, alici5, ""};

    Kurye kurye1 = {"Zeynep Arslan", "5551122334"};
    Kurye kurye2 = {"Mehmet Erdoğan", "5552233445"};
    Kurye kurye3 = {"Murat Demir" , "5436271238"};
    Kurye kurye4 = {"Ayse Topal" , "5331231237"};
    Kurye kurye5 = {"Tarik Satici" , "53213634197"};

    Islem islem1 = {gonderi1,  kurye1};
    Islem islem2 = {gonderi2,  kurye2};
    Islem islem3 = {gonderi3, kurye1};
    Islem islem4 = {gonderi4,  kurye2};
    Islem islem5 = {gonderi5, kurye1};

    gonderi1.kurye_ad_soyad = "Zeynep Arslan";
    gonderi2.kurye_ad_soyad = "Mehmet Erdoğan";
    gonderi3.kurye_ad_soyad = "Murat Demir";
    gonderi4.kurye_ad_soyad = "Ayse Topal";
    gonderi5.kurye_ad_soyad = "Tarik Satici";

    for (int i = 0; i < 30; i++)
        cout << "*";
        cout << endl;

    cout<< gonderi1.gonderi_no << " Nolu Gonderi Alındı " << endl;
    cout << "Gönderi No: " << gonderi1.gonderi_no <<endl;
    cout<< "Gönderen: " << gonderi1.gonderen.ad_soyad << " Tel No : " << gonderi1.gonderen.telefon_no <<" Adres : " <<gonderi1.gonderen.adres << endl;
    cout << "Alıcı: " << gonderi1.alici.ad_soyad << " Tel No : "<< gonderi1.alici.telefon_no <<" Adres : " <<gonderi1.alici.adres << endl;
    cout << "Ücret: " << gonderi1.ucret << " TL, Garanti: " << gonderi1.garanti << endl;
    cout << "Kurye: " << gonderi1.kurye_ad_soyad << endl;
    cout << "Gönderi Durumu : " << gonderi1.gonderi_no << " Nolu Gonderi Teslim Edildi " << endl;

    for (int i = 0; i < 30; i++)
     cout << "*";
    cout << endl;


    cout<< gonderi2.gonderi_no <<" Nolu Gonderi Alındı " << endl;
    cout << "Gönderi No: " << gonderi2.gonderi_no <<endl;
    cout<< "Gönderen: " << gonderi2.gonderen.ad_soyad << " Tel No : " << gonderi2.gonderen.telefon_no <<" Adres : "<< gonderi2.gonderen.adres << endl;
    cout << "Alıcı: " << gonderi2.alici.ad_soyad << " Tel No: " << gonderi2.alici.telefon_no<<" Adres : " << gonderi2.alici.adres << endl;
    cout << "Ücret: " << gonderi2.ucret << " TL, Garanti: " << gonderi2.garanti << endl;
    cout << "Kurye: " << gonderi2.kurye_ad_soyad << endl;
    cout << "Gönderi Durumu : " << gonderi2.gonderi_no << " Nolu Gonderi Teslim Edildi " << endl;

    for (int i = 0; i < 30; i++)
    cout << "*";
    cout << endl;


    cout << gonderi3.gonderi_no <<" Nolu Gonderi Alındı " << endl;
    cout << "Gönderi No: " << gonderi3.gonderi_no <<endl;
    cout<< "Gönderen: " << gonderi3.gonderen.ad_soyad << " Tel No : "<< gonderi3.gonderen.telefon_no<<" Adres : " << gonderi3.gonderen.adres << endl;
    cout << "Alıcı: " << gonderi3.alici.ad_soyad << " Tel No : "<< gonderi3.alici.telefon_no<<" Adres : " << gonderi3.alici.adres << endl;
    cout << "Ücret: " << gonderi3.ucret << " TL, Garanti: " << gonderi3.garanti << endl;
    cout << "Kurye: " << gonderi3.kurye_ad_soyad << endl;
    cout << "Gönderi Durumu : " << gonderi3.gonderi_no << " Nolu Gonderi Teslim Edildi " << endl;

    for (int i = 0; i < 30; i++)
    cout << "*";
    cout << endl;


    cout<< gonderi4.gonderi_no << " Nolu Gonderi Alındı " << endl;
    cout << "Gönderi No: " << gonderi4.gonderi_no <<endl;
    cout<< "Gönderen: " << gonderi4.gonderen.ad_soyad << " Tel No : "<<gonderi4.gonderen.telefon_no<<" Adres : " << gonderi4.gonderen.adres << endl;
    cout << "Alıcı: " << gonderi4.alici.ad_soyad << " Tel No : "<< gonderi4.alici.telefon_no<<" Adres : " << gonderi4.alici.adres << endl;
    cout << "Ücret: " << gonderi4.ucret << " TL, Garanti: " << gonderi4.garanti << endl;
    cout << "Kurye: " << gonderi4.kurye_ad_soyad << endl;
    cout << "Gönderi Durumu : " << gonderi4.gonderi_no << " Nolu Gonderi Teslim Edildi " << endl;

    for (int i = 0; i < 30; i++)
    cout << "*";
    cout << endl;

    
    cout<< gonderi5.gonderi_no <<" Nolu Gonderi Alındı " << endl;
    cout << "Gönderi No: " << gonderi5.gonderi_no <<endl;
    cout<< "Gönderen: " << gonderi5.gonderen.ad_soyad << " Tel No : "<< gonderi5.gonderen.telefon_no<<" Adres : " << gonderi5.gonderen.adres << endl;
    cout << "Alıcı: " << gonderi5.alici.ad_soyad << " Tel No : "<< gonderi5.alici.telefon_no<<" Adres : " << gonderi5.alici.adres << endl;
    cout << "Ücret: " << gonderi5.ucret << " TL, Garanti: " << gonderi5.garanti << endl;
    cout << "Kurye: " << gonderi5.kurye_ad_soyad << endl;
    cout << "Gönderi Durumu : " << gonderi5.gonderi_no << " Nolu Gonderi Teslim Edildi " << endl;
    for (int i = 0; i < 30; i++)
    cout << "*";
    cout << endl;

    return 0;
}
