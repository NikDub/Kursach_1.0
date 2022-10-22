#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <windows.h>
#include <fstream>
#include "file.h"


using namespace std;

void file_save(List *list)
{
	if (n == 0)
	{
		cout << "|===================================|" << endl;
		cout << "|           ������ ����!!!!         |" << endl;
		cout << "|===================================|" << endl;
		return;
	}
	char name[20];
	cout << "|=============================================================|" << endl;
	cout << "| ������� ��� �����(� �����������)(10-�����): ";
	cin >> name;
	int prov = atoi(name);
	if (prov == 10)return;
	cout << "|=============================================================|" << endl;
	ofstream fout(name, ios_base::trunc | ios_base::out);

	while (fout.is_open() == 0)
	{
		cout <<
			endl << "|             �� ������� ������� ���� ��� ������!!!           |" << endl;
		cout << "|=============================================================|" << endl;
		cout << "| ������� �������� ����� ��� ��� ��� �������� ���� �� ������� |" << endl;
		cout << "|=============================================================|" << endl;
		cout << "| ������� ��� �����(� �����������)(10-�����): ";
		cin >> name;
		int prov = atoi(name);
		if (prov == 10)return;
		ofstream fout(name, ios_base::trunc | ios_base::out);
	}

	List *array = new List;
	array = Array_save(list);

	fout << n1 << endl;
	for (int i = 0; i < n; i++)
	{
		fout << array[i].Rec.model << endl;
		fout << array[i].Rec.year << endl;
		fout << array[i].Rec.engine << endl;
		fout << array[i].Rec.body << endl;
		fout << array[i].Rec.turbine << endl;
		fout << array[i].Rec.type << endl;
		fout << array[i].Rec.wheel << endl;
		fout << array[i].Rec.sline << endl;
		fout << array[i].Rec.secure << endl;
		fout << array[i].Rec.HP << endl;
		fout << array[i].Rec.airbag << endl
			<< endl;
	}
	fout.close();
	cout << "|=============================================================|" << endl;
	cout << "| �c����� �������� � ����: " << name << endl;
	cout << "|=============================================================|" << endl;
	n1 = 0;
	delete array;
}

void file_load(List *list)
{
	char name[20];
	while (1)
	{
		cout << "|===================================================|" << endl;
		cout << "| ������� ��� �����(� �����������)(10-�����): ";
		cin >> name;
		int prov = atoi(name);
		if (prov == 10)return;
		cout << "|===================================================|" << endl;
		ofstream fin_1(name, ios_base::in);
		if (!fin_1.is_open())
		{
			cout <<
				endl << "|     �� ������� ������� ���� ��� ����������!!!     |" << endl;
			cout << "| ���������� ��� ��� ��� ���������� � ������� ����� |" << endl;
			cout << "|===================================================|" << endl;

			continue;
		}
		else
		{
			fin_1.close();
			break;
		}
	}

	ifstream fin(name, ios_base::in);
	fin >> n;
	n1 = n;
	List *array = new List[n];
	for (int i = 0; i < n; i++)
	{
		fflush(stdin);
		fin >> array[i].Rec.model;

		fflush(stdin);
		fin >> array[i].Rec.year;

		fflush(stdin);
		fin >> array[i].Rec.engine;

		fflush(stdin);
		fin >> array[i].Rec.body;

		fflush(stdin);
		fin >> array[i].Rec.turbine;

		fflush(stdin);
		fin >> array[i].Rec.type;

		fflush(stdin);
		fin >> array[i].Rec.wheel;

		fflush(stdin);
		fin >> array[i].Rec.sline;

		fflush(stdin);
		fin >> array[i].Rec.secure;

		fflush(stdin);
		fin >> array[i].Rec.HP;

		fflush(stdin);
		fin >> array[i].Rec.airbag;
	}
	fin.close();
	cout << "| �� �����: " << name << " ������� �������� �������: " << n << endl;
	cout << "|===================================================|" << endl;
	Array_Load(list, array);
}

void file_remove()
{
	char name[20];
	cout << "|=============================================|" << endl;
	cout << "| ������� ��� �����(� �����������)(10-�����): ";
	cin >> name;
	int prov = atoi(name);
	if (prov == 10)return;
	cout << "|=============================================|" << endl;

	while (remove(name) != 0)
	{
		cout << "| ������ �������� �����: " << name << endl;
		cout << "| ������� ��� �����(� �����������)(10-�����): ";
		cin >> name;
		int prov = atoi(name);
		if (prov == 10)return;
	}
	cout << "|=============================================|" << endl;
	cout << "| ���� " << name << " ������� ������" << endl;
	cout << "|=============================================|" << endl;
}