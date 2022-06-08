using namespace std;
class proses{
public:
void cetak(){
  int pilih;
    string jenis[]={"NOVEL","KOMIK", "ENSIKLOPEDIA"};
    string judul[]={"Laut Bercerita, Azzamie, Matahari","Doraemon, Detektif Conan, Miiko","Ensiklopedia Sains, Ensiklopedia Kiamat, Ensiklopedia Akhir Zaman"};
    string penulis[]={"Leila S. Chudori, Sophie Aulia, Tere Liye","Fujiko F. Fujio, Aoyama Gosho, Ono Eriko", "Usbone, TIM Gema Insani, Abu Fatiah Al-Adnani"};
    string cart_jenis[100];
    int cart_judul[100];
    int jumlah,indeks=-1,N;
    string jenis_nama;
    char lagi;
    char input;
    int maks;
    cout << "-----------------------------------------------------------------------------\n";
    cout << "  Jenis Buku\t\t  Judul Buku\t\t Penulis\n";
    cout << "-----------------------------------------------------------------------------\n";
   for(int i=0;i<6;i++){
        cout << " " << i << "\t\t" << jenis[i] << "\t\t " << judul[i] << "\t\t\t" << penulis[i] << " " << endl;
   }
   cout << "------------------------------------------------------------------------------\n";
   cout << endl;
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