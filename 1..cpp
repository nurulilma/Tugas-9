#include<iostream>

using namespace std;

main() {
	//Looping pertama untuk menampilkan 10 baris
	for(int i = 1; i <= 10; i++) {
		
		//Looping kedua untuk menampilkan 10 kolom tiap 1 baris
		for(int j = 1; j <= 10; j++) {
			cout<<setw(4)<<i * j;
		}
		
		//Membuat baris baru setelah looping 10 kolom
		cout<<endl;
	}
}
