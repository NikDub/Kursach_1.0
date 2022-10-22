#pragma once

struct audi
{
	char model[20];				//������ (A3/A4/A6/A8/Q5/Q7/Quattro)
	unsigned short int year;	//��� (1913-2018)
	char engine[20];			//��������� (2.0/1.8/3.2)
	char body[20];				//����� (B5/B6/B7/B8)
	unsigned short int turbine;	//������� ������� (� ���������� ������������)
	char type[20];				//��� ��������� (������/������/���)
	unsigned short int wheel;	//������ � ������ (14-19)
	unsigned short int sline;	//�������� Sline ������
	double secure;				//������ ������������ (0,0-5,0)
	unsigned short int HP;		//���������� ��������� ���(45-600)
	unsigned short int airbag;	//���������� ������� ������������(0-20)
};

struct List {
	audi Rec;
	List *Next, *Prev;
};

extern List *Head;				//��������� ������
extern List *Last;				//��������� ������

extern int n, n1;