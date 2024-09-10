#include <iostream>

using namespace std;

int main()
{
    awal:
    int l_sewa;
    char pill, yt;
    char nama[30];
    cout << "           ****** Rental/Sewa mobil sewa mobil *****                   " << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "KODE            Jenis Mobil                Harga Sewa/Hari             " << endl;
    cout << "  1.            Honda Jazz                 Rp. 350.000                 " << endl;
    cout << "  2.            Piposs                     Rp. 500.000                 " << endl;
    cout << "  3.            Bus Mercendenz             Rp. 800.000                 " << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "Nama : ";cin>>nama;
    cout << "Kode Mobil(1/2/3) :  ";cin >> pill;
    cout << "Lama Sewa : ";cin >> l_sewa;
    system("cls");

    if (pill=='1'){
        int h_sewa,sub_tot,diskon,tot,bay,balik;
        h_sewa=350000;
        sub_tot=l_sewa*h_sewa;
        if (l_sewa>=14){diskon=sub_tot*0.3;}
        else{diskon=sub_tot*0;}
        tot=sub_tot - diskon;
         cout << "Nama Penyewa         : " <<nama<< endl;
    cout << "Kode Mobil (1/2/3)   : " <<pill<< endl;
    cout << "Jenis Mobil          : Sedan" << endl;
    cout << "Harga Sewa/Hari      : " <<h_sewa<< endl;
    cout << "Lama peminjaman      : " <<l_sewa<<" hari"<< endl;
    cout << "Sub Total            : Rp " <<sub_tot<<",-"<< endl;
    cout << "Diskon               : Rp " <<diskon<<",-"<< endl;
    cout << "Total Bayar          : Rp " <<tot<<",-"<< endl;
    cout<<"----------------------------------------------------------------";
    cout << endl;
    cout << "Uang bayar = Rp. ";cin>>bay;
    balik=bay-tot;
    cout << "Uang kembali = Rp. " << balik << "-"<<endl;
    }
        else if (pill=='2'){
        int h_sewa,sub_tot,diskon,tot,bay,balik;
        h_sewa=500000;
        sub_tot=l_sewa*h_sewa;
        if (l_sewa>=14){diskon=sub_tot*0.3;}
        else{diskon=sub_tot*0;}
        tot=sub_tot-diskon;
         cout << "Nama Penyewa         : " <<nama<< endl;
    cout << "Kode Mobil (1/2/3)   : " <<pill<< endl;
    cout << "Jenis Mobil          : Mini Bus" << endl;
    cout << "Harga Sewa/Hari      : " <<h_sewa<< endl;
    cout << "Lama peminjaman      : " <<l_sewa<<" hari"<< endl;
    cout << "Sub Total            : Rp " <<sub_tot<<",-"<< endl;
    cout << "Diskon               : Rp " <<diskon<<",-"<< endl;
    cout << "Total Bayar          : Rp " <<tot<<",-"<< endl;
    cout<<"----------------------------------------------------------------";
    cout << endl;
    cout << "Uang bayar = Rp. ";cin>>bay;
    balik=bay-tot;
    cout << "Uang kembali = Rp. " << balik << "-"<<endl;
    }

        else if (pill=='3'){
        int h_sewa,sub_tot,diskon,tot,bay,balik;
        h_sewa=800000;
        sub_tot=l_sewa*h_sewa;
        if (l_sewa>=14){diskon=sub_tot*0.3;}
        else{diskon=sub_tot*0;};
        tot=sub_tot-diskon;
         cout << "Nama Penyewa         : " <<nama<< endl;
    cout << "Kode Mobil (1/2/3)   : " <<pill<< endl;
    cout << "Jenis Mobil          : Bus" << endl;
    cout << "Harga Sewa/Hari      : " <<h_sewa<< endl;
    cout << "Lama peminjaman      : " <<l_sewa<<" hari"<< endl;
    cout << "Sub Total            : Rp " <<sub_tot<<",-"<< endl;
    cout << "Diskon               : Rp " <<diskon<<",-"<< endl;
    cout << "Total Bayar          : Rp " <<tot<<",-"<< endl;
    cout<<"----------------------------------------------------------------";
    cout << endl;
    cout << "Uang bayar = Rp. ";cin>>bay;
    balik=bay-tot;
    cout << "Uang kembali = Rp. " << balik << "-"<<endl;
    }
    else{cout << "Tidak bisa diproses!";}
    cout << endl;
    cout << "Apakah anda ingin melakukan lagi? (Y/N) : ";
    cin >> yt;
    cout << endl;

    if (yt== 'y' || yt=='Y'){goto awal;}
    if (yt=='n' || yt=='N') {goto selesai;}

    selesai :

    return 0;
}

