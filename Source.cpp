#include <iostream>
using namespace std;
int main() {


	/*int n = 0;
	do {
		n++;
	} while (3 * n * n - 730 * n < 0);
		cout << --n;*/


	/*const int size = 5;
	int mas[10];
	int mas1[] = { 1,2,3,4,5 };
	for (int i = 0; i < size; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < size; i++) {
		cout << mas[1] << ' ';
	}
	cout << endl;*/


	//дан массив из 10 элементов. найти количество четных четных и количество нечетных элементов в этом массиве.
	
	
	//const int size = 10;
	//int arr[size];
	//for (int i = 0; i < size; i++) {
	//	cin >> arr[i];
	//}
	//int even_qty = 0, odd_qty = 0;
	//for (int i = 0; i < size; i++) {
	//	if (arr[i] % 2 == 0) {
	//		even_qty++;
	//	}
	//	else {
	//		odd_qty++;
	//	}
	//}
	//cout << "even = " << even_qty << endl;
	//cout << "odd = " << odd_qty << endl;*/


	//дан массив из 8 элементов. найти сумму пложительных элементов в этом массиве.


	/*const int size = 8;
	int arr[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) {
			sum+=arr[i];
		}
	}
	cout <<"sum = " << sum;*/
	

	/*Array20.Дан массив размера N и целые числа K и L(1 ≤ K ≤ L ≤ N).Найти
	сумму элементов массива с номерами от K до L включительно.*/	/*const int size = 10;	int arr[size];
	int sum = 0;	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int k = 1;
	int l = 6;
	for (int i = k; i < l; i++) {
		sum += i;
	}
	cout << "sum = "<< sum << endl;*/


	/*дан массив из 7 элементов. найти произведение отрицательных*/


	/*const int size = 7;
	int arr[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int prois = 1;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			prois *= arr[i];
		}
	}
	cout << "prois = " << prois;*/


	/*Array21.Дан массив размера N и целые числа K и L(1 ≤ K ≤ L ≤ N).
	Найти среднее арифметическое элементов массива с номерами от K до L
	включительно.*/

	const int size = 10;	int arr[size];
	int sum = 0;	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int k = 1;
	int l = 6;
	double aref = 1;
	for (int i = k; i < l; i++) {
		sum += i;
		aref = sum / i;
	}
	cout << "aref = " << aref << endl;
}