#include <iostream>
using namespace std;

class Array(){
  public:
    void inputData();
    void cariData();
  private:
    string jenis, judul, penerbit, cari;
  
};

void Array::inputData{
  for(int i=0; i<9; i++){
    for(int j=0; j<3; j++){
    	cout << "jenis : ";
    	cin >> jenis[i][j];
    	cout >> "judul : ";
    	cin >> judul[i][j];
    	cout << "penerbit : ";
    	cin >> penerbit[i][j];
		  }
  }
}
void Array::cariData(){
  cout << "Masukkan judul buku yang akan dicari : ";
  cin >> cari;
  for(i=0; i<9; i++){
    for(j=0; j<3; j++){
      if(cari==judul[i][j]){
        cout << "Data ditemukan :" << endl;
        cout << jenis[i][j];
        cout << judul[i][j];
        cout << penulis[i][j];
      }
      else{
        cout << "Data tidak ditemukan...";
      }
    }
  }
}