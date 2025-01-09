#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <cstring>
using namespace std;

int main() {
    struct Kumas {
        string iplikTipi;
        float dm2Agirlik;
        string dokumaTipi;
        string renk;
        int miktar;
    };
    struct Iskelet {
        string malzeme;
        string birlestirme;
        string tarz;
        string boyut;
        int miktar;
    };
    struct Mobilya {
        Kumas kaplama;
        string malzeme;
        int fiyat;
        int adet;
    };
    Mobilya mobilyalar[10];
    for (int i = 0; i < 10; i++) {
        cout << "Urun " << (i+1) << " Icın Bilgi Girin:" << endl;
        
        cout << "Kumas iplik tipi: ";
        cin >> mobilyalar[i].kaplama.iplikTipi;
        
        cout << "Kumas dm2 agirlik: ";
        cin >> mobilyalar[i].kaplama.dm2Agirlik;
        
        cout << "Kumas dokuma tipi: ";
        cin >> mobilyalar[i].kaplama.dokumaTipi;
        
        cout << "Kumas rengi: ";
        cin >> mobilyalar[i].kaplama.renk;
        
        cout << "Kumas miktari: ";
        cin >> mobilyalar[i].kaplama.miktar;
        
        cout << "Iskelet malzeme: ";
        cin >> mobilyalar[i].malzeme;
        
        cout << "Iskelet birlestirme: ";
        cin >> mobilyalar[i].kaplama.dokumaTipi;

        cout << "Iskelet tarz: ";
        cin >> mobilyalar[i].kaplama.dokumaTipi;

        cout << "Iskelet boyut: ";
        cin >> mobilyalar[i].kaplama.dokumaTipi;
        
        cout << "Fiyat: ";
        cin >> mobilyalar[i].fiyat;
        
        cout << "Adet: ";
        cin >> mobilyalar[i].adet;
    }
    cout << "      ----- Mobilya Bilgileri -----      "<<endl;
    for (int i = 0; i < 10; i++) {
    cout<<(i+1)<<" Nolu Iplik Tipi : "<< mobilyalar[i].kaplama.iplikTipi<<endl;
    cout<<(i+1)<<" Nolu dm2agirlik : "<< mobilyalar[i].kaplama.dm2Agirlik <<endl;
    cout<<(i+1)<<" Nolu Dokuma Tipi : "<< mobilyalar[i].kaplama.dokumaTipi <<endl;
    cout<<(i+1)<<" Nolu Renk Tipi : "<< mobilyalar[i].kaplama.renk <<endl;
    cout<<(i+1)<<"Nolu Malzeme Turu : "<< mobilyalar[i].malzeme <<endl;
    cout<<(i+1)<<"Nolu Urun Fiyati : "<< mobilyalar[i].fiyat <<endl;
    cout<<(i+1)<<"Nolu Urun Adedi : "<< mobilyalar[i].adet << endl;
    }
    int toplamFiyat = 0;
    for (int i = 0; i <10; i++) {
        toplamFiyat += mobilyalar[i].fiyat * mobilyalar[i].adet;
    }
    
    cout <<" Toplam Fiyat : "<< toplamFiyat << endl;
    
    return 0;
}
