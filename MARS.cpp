/*

������ "�������� � ������"

*/

#include <iostream> 
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double distance; // ����������
	double lightSpeed; // �������� �����
	double delay; // ��������
	double delay_in_min; // �������� � �������
	//---------------------------------------------//

	distance = 34000000.0; // ����
	lightSpeed = 186000.0; // ���� � �������

	delay = distance / lightSpeed;
	cout << "��������� �������� ��� ��������� � ������: " << delay << " ������." << endl;
	//---------------------------------------------//

	delay_in_min = delay / 60;
	cout << "��� ���������� " << delay_in_min << " �����." << endl;

	cout << "\n\n\n\a";
	system("pause");
	return 0;
}