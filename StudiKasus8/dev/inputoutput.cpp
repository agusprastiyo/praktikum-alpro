#include "../base.h"

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

int main(){
  Array a;
  a.inputData();

  return 0;
}



