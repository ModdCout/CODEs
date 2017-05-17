#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	time_t t;
	srand((unsigned) time(&t));

	const int n = 20;
	int a[n];
	int sum = 0, sum1 = 0;
	int kol = 0, koldek = 0, kolnul = 0;
	int min = 100, max = -100, imin = 0, imax = 0;

	for(int i = 0; i < n; i++) {
		a[i] = -100 + rand() % 200;
		cout << a[i] << " ";
	}
	cout << "\n\n==========================================\n\n" << endl;

	// ���������� ������� �������
	min=a[0]; max=a[0]; imin=0;imax=0;

	for(int i = 0; i < n; i++) {

		if (a[i] < min) {
			min = a[i];
			imin = i;
		}
	}

	// ���������� ������� �������

	for (int i = 0; i < n; i++) {
		
		if(a[i] > max) {
			max = a[i];
			imax = i;
	}
}

		// ����� ������������� ��������� �������

	cout << "������������� �������� �������: " << endl;
	for(int i = 0; i < n; i++) {
		if(a[i] < 0){
			sum += a[i]; 
			cout << a[i] << " ";
		}
	}
	
	cout << endl;
	cout << "������������� �������� �������: " << endl;
		for(int i = 0; i < n; i++) {
		if(a[i] > 0){ 
			cout << a[i] << " ";
		}
	}

	cout << endl << endl;
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	// ������� �������������� ������������� ��������� �������
	// ���������� �������� ������������� ��������� �������;
	

	for(int i = 0; i < n; i++) {
		if(a[i] > 0) {
			sum1 += a[i];
			//cout << "\n" << a[i] << " ";
			kol++;
		}
	}

	// ���������� �������� ������������� ��������� �������;
	
	for(int i = 0; i < n; i++) {
		if(a[i] < 0) {
		koldek++;
		}
	}

	// ���������� �������� ������ ���� ��������� �������

	for(int i = 0; i < n; i++) {
		if(a[i] == 0) {
		kolnul++;
		}
	}
	
	cout << endl;

cout << "���������� ������� �������: " << min<<"  ["<<imin << "] " << endl;
cout << "���������� ������� �������: " << max << "  [" << imax << "] " << endl;
cout << "����� ���� ������������� ��������� �������: " << sum << endl;
cout << "������� �������������� ���� ������������� ��������� �������: " << (double)sum1 / (double)kol << endl;
cout << "���������� �������� ������������� ��������� ������� :" << kol << endl;
cout << "���������� ������������� ��������� �������: " << koldek << endl;
cout << "���������� ������ ���� ��������� �������: " << kolnul << endl;

	cout << endl << endl << endl << endl;
	system("pause");
	return 0;
}