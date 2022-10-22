#pragma once

struct audi
{
	char model[20];				//Модель (A3/A4/A6/A8/Q5/Q7/Quattro)
	unsigned short int year;	//Год (1913-2018)
	char engine[20];			//Двигатель (2.0/1.8/3.2)
	char body[20];				//Кузов (B5/B6/B7/B8)
	unsigned short int turbine;	//Наличие турбины (в стандарной комплектации)
	char type[20];				//Тип двигателя (Бензин/Дизель/Газ)
	unsigned short int wheel;	//Колеса в дюймах (14-19)
	unsigned short int sline;	//наличине Sline версии
	double secure;				//Оценка безопасности (0,0-5,0)
	unsigned short int HP;		//Количество лошадиных сил(45-600)
	unsigned short int airbag;	//Количество подушек безопасности(0-20)
};

struct List {
	audi Rec;
	List *Next, *Prev;
};

extern List *Head;				//указатель головы
extern List *Last;				//указатель хвоста

extern int n, n1;