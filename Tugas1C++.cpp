
#include <iostream>
using namespace std;
int main() {
    string nama;
    string sekolah;
    string ulang;
    do{
        cout<<"-----silahkan__isi_web_ini-----\n";
        cout<<"Masukan nama anda ";
        cin>>nama;
        cout<<"Masukan Asal sekolah anda ";
        cin>>sekolah;
        cout<<"Nama anda adalah ";
        cout<<nama<<endl;
        cout<<"Asal Sekolah anda adalah ";
        cout<<sekolah<<endl;
        cout<<"apakah anda mau mengulang tekan y/Y ";
        cin>>ulang;
    }
        while (ulang=="y" || ulang=="Y");
    system ("pause");
    return 0;
}
