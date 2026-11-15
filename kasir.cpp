#include <iostream>
using namespace std;
int main() {
   string menu[2]={"RAWON","SOTO"};
    int harga[2]={15000,20000};
    int total[2];
    int porsi[2];
    int i;
    int grandtotal=0;

    cout<<"        <--Selamat Datang-->"<<endl<<endl;
    cout<<"____________________________________"<<endl;
    
    for(i=0;i<2;i++)
        {
            cout<<"MENU: ";
            cout<< menu[i]<<endl;
            cout<<"HARGA: ";
            cout<< harga[i]<<endl;
            cout<<"PORSI: ";
            cin>> porsi[i];
            total[i]=porsi[i]*harga[i];
            cout<<"TOTAL: ";
            cout<<total[i]<<endl;
            cout<<"____________________________________"<<endl;
            grandtotal=grandtotal+total[i];
        }
    cout<<"TOTAL SEMUA PESANAN:       ";
    cout<<"Rp.";
    cout<<grandtotal<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Kasir: Acel"<<endl<<endl<<endl;
    cout<<"          --Terimakasih--";
    system("pause");
    return 0;
}2
