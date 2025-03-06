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
   double hitungluas() {
    //compute luas = panjang * lebar
    luas = panjang * lebar;
    return luas;
}

void tampildata() {
  //display 'luas persegi panjang = ' + luas
  cout << "luasnya adalah " << hitungluas(); 
}
    
int main()
{//begin
    inputdata();
    tampildata();

}//end



