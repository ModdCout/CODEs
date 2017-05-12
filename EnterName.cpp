#include<iostream>         //���������� ������������ ���� � ��������
#include<string>           //���������� ������

using namespace std;         //���������� ����������� ����������
int main()                   //������ ���������
{
    string name;                                 //������� ������
    cout << "Enter your name: ";                    //������� �� �����
    getline(cin, name);                       //���� ����� � ������
    if (name.length() !=0)                   //���� ��� ����� ������ 0 �������� ��
    cout << "Your name is " << name;           //������� �� ����� ���� ���
    else                             // ���� � ����� 0 ������ ��
        cout << "Error";                  //������� �� ����� ����� � �������



    return 0;                    //���������� ���������
}
