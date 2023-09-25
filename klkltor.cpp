#include <iostream>
#include <string>
using namespace std;

int main() {
    int angka1 ,angka2,pil ;
    float hasil;
    string operasi;
    cout<<"===================================="<<endl;
    cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
    cout<<"===================================="<<endl;
    cout<<"1.penjumlahan"<<endl;
    cout<<"2.pengurangan"<<endl;
    cout<<"3.perkalian"<<endl;
    cout<<"4.peembagian"<<endl;
    cout<<"5.modulus"<<endl;
    cout<<endl;

    cout<<"masukan pilihan :";
    cin>>pil; 
    cout<<"masukan angka1 :";
    cin>>angka1;
    cout<<"masukan angka2 :";
    cin>>angka2;

    switch(pil){
        case 1 : hasil=angka1+angka2;
                operasi='+';
                break;
        case 2 :hasil=angka1+angka2;
                operasi='-';
                break;
        case 3 : hasil=angka1+angka2;
                operasi='*';
                break;
        case 4 :hasil=angka1+angka2;
                operasi='/';
                break;
        case 5 :hasil=angka1+angka2;
                operasi='%';
                break;
            default :
            cout<<"salah masukan operator"<<endl;

    }
    cout<<".................................."<<endl;
        cout<<" "<<angka1<<operasi<<angka2<<"="<<hasil<<endl;
    cout<<".................................."<<endl;
        return 0;

}