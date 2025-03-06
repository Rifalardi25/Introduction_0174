#include <iostream>
using namespace std;

    //numeric panjang, lebar, luas
    double panjang;
    double lebar;
    double luas;
    void inputdata() {
    //display 'masukkan panjangnya = '
    cout << "masukan panjangnya = ";
    //accpet panjang
    cin >> panjang;
    //display 'masukkan lebarnya = '
    cout << "masukkan lebarnya = ";
    //accept lebar
    cin >> lebar;
    }
   double hitung luas() {
    //compute luas = panjang * lebar
    luas = panjang * lebar;
    return luas;
}
double hitungluas2 (double a, double b){
    return a * b;
}
void tampildata() {
  //display 'luas persegi panjang = ' + luas
  cout << "luasnya adalah " << luas;  
}
    
int main()
{//begin
    inputdata();
    tampilluas;
}//end




}//end
