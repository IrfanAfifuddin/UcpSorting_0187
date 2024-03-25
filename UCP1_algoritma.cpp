//type 1
//1. - cara membandingkan selectionsort adalah ... yang terurut dan tidak terurut
//   - cara menukarnya dengan cara memindahkan satu per satu, angka yang paling akan menjadi index 0 jika yang di pindah index 1 
//     maka di taruh setelah index sebelumnya (index 0)
//2. - cara membandingkan insertionsort adalah dengan melihat angka tertinggi dan terendah pada array
//   - cara menukarnya dengan mencari angka terendah pada array dan di tukar dengan angka terendah pada index 0
//3. pertama kita harus mengetahui angka yang tidak berurutan pada array, dengan menggunakan jarak pada element akan terbagi menjadi
//   beberapa list grup, lalu aplikasikan insertionsort pada setiap list akan berpindah element menjadi posisi yang tepat

#include <iostream>
using namespace std;
int Apip[87];
int n;

void input() {                                             
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Apip :";
		cin >> n;

		if (n <= 87){                                     
			break;
		}
		else
		{
			cout << "\nApip yang anda masukkan maksimal 87 Element\n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;              
	cout << "Masukkan Element Apip" << endl;
	cout << "=====================" << endl;

	for (int j = 0; j < n; j++)                           
	{
		cout << "Data ke-" << (j + 1) << " : ";
		cin >> Apip[j];
	}
}

void insertionsort() {
	int temp;
	int j, i;

	for (j = 0; j <= n - 1; j++)
	{
		temp = Apip[j];
		i = j - 1;
		while (i >= 0 && Apip[i] > temp)
		{
			Apip[i + 1] = Apip[i];
			i--;
		}
		Apip[i + 1] = temp;
	}

	cout << "\nTemp" << j + 1 << " : ";
	for (int k = 0; k < n; k++)
	{
		cout << "Data Ke " << j + 1 << " : " << Apip[i] << endl;
	}

}

void display() {
	cout << endl;
	cout << "================================" << endl;
	cout << "Element Apip yang telah di susun" << endl;
	cout << "================================" << endl;

	for (int i = 0; i < n; i++) {
		cout << Apip[i] << endl;
	}
	cout << endl;
}

int main(){
	insertionsort();
	display();
}
