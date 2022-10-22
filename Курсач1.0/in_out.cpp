#include "stdafx.h"
#include <iostream>
#include <iostream>
#include <cstring>
#include <windows.h>
#include <fstream>
#include "in_out.h"


using namespace std;

List* createList()
{
	List *tmp = (List*)malloc(sizeof(List));
	return tmp;
}

void Record_to(List *list)
{
	List *value = new List;
	char buff[50];
	cout << "|===================================|" << endl;
	cout << "|           Авто №" << n + 1 << endl;
	while (1)
	{
		fflush(stdin);
		cout << "| Модель: ";
		gets_s(value->Rec.model);
		if (strlen(value->Rec.model) < 20 && strlen(value->Rec.model)>1) break;
		else cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		cout << "| Год: ";
		gets_s(buff);
		value->Rec.year = atoi(buff);
		if (value->Rec.year > 1913 && value->Rec.year < 2018)
			break;
		else
			cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		cout << "| Двигатель: ";
		gets_s(value->Rec.engine);
		if (strlen(value->Rec.engine)<20 && strlen(value->Rec.engine)>2)break;
		else cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		cout << "| Кузов: ";
		gets_s(value->Rec.body);
		if (strlen(value->Rec.body)<20 && strlen(value->Rec.body)>1)break;
		else cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		cout << "| Турбина(0/1): ";
		gets_s(buff);
		bool f = 1;
		
		if (buff[0]>'1' || buff[0] < '0'||strlen(buff)>1)
				f = 0;
		if (f == 1)
		{
			value->Rec.turbine = atoi(buff);
			if (value->Rec.turbine == 0 || value->Rec.turbine == 1)break;
		}
		if(f==0) cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		cout << "| Тип двигателя: ";
		gets_s(value->Rec.type);
		if (strlen(value->Rec.type)<20 && strlen(value->Rec.type) >= 3)break;
		else cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		cout << "| Диаметр колес: ";
		gets_s(buff);
		value->Rec.wheel = atoi(buff);
		if (value->Rec.wheel >= 14 && value->Rec.wheel <= 19)break;
		else cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		bool f = 1;
		cout << "| Sline(0/1): ";
		gets_s(buff);

		if (buff[0]>'1' || buff[0] < '0' || strlen(buff)>1)
		f = 0;
		if (f == 1)
		{
			value->Rec.sline = atoi(buff);
			if (value->Rec.sline == 0 || value->Rec.sline == 1)break;
		}
		if (f == 0) cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		bool f = 1;
		cout << "| Безопасность(0,0-5,0): ";
		gets_s(buff);

		if (buff[0]>'5' || buff[0] < '0' || strlen(buff)>3 || buff[2]>'9' || buff[2]<'0' || buff[1] != ',')
			f = 0;
		if (f == 1)
		{
			value->Rec.secure = atof(buff);
			if (value->Rec.secure >= 0.0 && value->Rec.secure <= 5.0)break;
		}
		else cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		bool f = 1;
		cout << "| Лошадиных сил: ";
		gets_s(buff);

		if (buff[0] > '6' || buff[0] < '1' || strlen(buff)>3 || strlen(buff) < 2)
		{
			f = 0;
		}
		
		if (f == 1)
		{
			value->Rec.HP = atoi(buff);
			if (value->Rec.HP >= 45 && value->Rec.HP <= 600)break;
		}
		cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		bool f = 1;
		cout << "| Подушек безопасности: ";
		gets_s(buff);
		if (buff[0]>'9' || buff[0] < '0' || strlen(buff)>2)
			f = 0;
		if (f == 1)
		{
			value->Rec.airbag = atoi(buff);
			if (value->Rec.airbag >= 0 && value->Rec.airbag <= 20)break;
		}
		cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}
	cout << "|===================================|" << endl;

	n++;
	if (Head == NULL)
	{
		Head = Last = value;
		value->Next = NULL;
		value->Prev = NULL;
	}
	else
	{
		value->Next = NULL;
		value->Prev = Last; //Указываем адрес на предыдущий элемент в соотв. поле
		Last->Next = value; //Указываем адрес следующего за хвостом элемента
		Last = value;
	}
}

void Print_List(List *list)
{
	if (n == 0)
	{
		cout << "|===================================|" << endl;
		cout << "|           Список пуст!!!!         |" << endl;
		cout << "|===================================|" << endl;
		return;
	}
	List *tmp = Head;
	int i = 1;
	cout << "|===================================|" << endl;
	cout << "|              Вывод:               |" << endl;
	cout << "|===================================|" << endl;

	cout << "| 1. Прямой вывод.                  |" << endl;
	cout << "| 2. Обратный вывод.                |" << endl;
	cout << "| 10. Выход                         |" << endl;
	cout << "|===================================|" << endl;
	cout << "| Введите ваш выбор: ";
	int select;
	char select_1[2000];
	gets_s(select_1);
	select = atoi(select_1);
	if (select == 0) select--;
	if (select == 10)return;
	while (select < 1 || select>2)
	{
		cout << "|===================================|" << endl;
		cout << "| Ошибка ввода! Повторите ваш ввод! |" << endl;
		cout << "| Введите ваш выбор: ";
		gets_s(select_1);
		select = atoi(select_1);
		if (select == 0) select--;
		if (select == 10)return;
	}

	cout << "|===================================|" << endl;
	switch (select)
	{
	case 1:
		tmp = Head;
		while (tmp)
		{
			cout << "| Авто №" << i << endl;
			cout << "|===================================|" << endl;
			cout << "| Модель: " << tmp->Rec.model << endl;
			cout << "| Год: " << tmp->Rec.year << endl;
			cout << "| Двигатель: " << tmp->Rec.engine << endl;
			cout << "| Кузов: " << tmp->Rec.body << endl;
			cout << "| Турбина: " << tmp->Rec.turbine << endl;
			cout << "| Тип Двигателя: " << tmp->Rec.type << endl;
			cout << "| Размер колес: " << tmp->Rec.wheel << endl;
			cout << "| Sline: " << tmp->Rec.sline << endl;
			cout << "| Безопасность: " << tmp->Rec.secure << endl;
			cout << "| Лошадиные силы: " << tmp->Rec.HP << endl;
			cout << "| Подушек безопасности: " << tmp->Rec.airbag << endl << endl;
			cout << "|===================================|" << endl;
			tmp = tmp->Next;
			i++;
		}
		return;
	case 2:
	{		i = n;
	tmp = Last;//Head;
	while (tmp)
	{
		cout << "| Авто №" << i << endl;
		cout << "|===================================|" << endl;
		cout << "| Модель: " << tmp->Rec.model << endl;
		cout << "| Год: " << tmp->Rec.year << endl;
		cout << "| Двигатель: " << tmp->Rec.engine << endl;
		cout << "| Кузов: " << tmp->Rec.body << endl;
		cout << "| Турбина: " << tmp->Rec.turbine << endl;
		cout << "| Тип Двигателя: " << tmp->Rec.type << endl;
		cout << "| Размер колес: " << tmp->Rec.wheel << endl;
		cout << "| Sline: " << tmp->Rec.sline << endl;
		cout << "| Безопасность: " << tmp->Rec.secure << endl;
		cout << "| Лошадиные силы: " << tmp->Rec.HP << endl;
		cout << "| Подушек безопасности: " << tmp->Rec.airbag << endl << endl;
		cout << "|===================================|" << endl;
		tmp = tmp->Prev;//Next;
		i--;
	}
	printf("\n");
	return;
	}
	}
}

void add_after(List *list)
{
	int place = 0;
	char select_1[2000];
	while (place < 1 || place>n + 1)
	{
		cout << "|============================================|" << endl;
		cout << "| Введите номер позиции на которую хотите вставить(1 - " << n + 1 << "): ";
		gets_s(select_1);
		place = atoi(select_1);
		if (place == 0) place--;

	}
	place--;
	List *tmp = Head;
	List *value = new List;
	char buff[50];
	cout << "|============================================|" << endl;
	cout << "|           Авто №" << place + 1 << endl;
	while (1)
	{
		fflush(stdin);
		cout << "| Модель: ";
		gets_s(value->Rec.model);
		if (strlen(value->Rec.model) < 20 && strlen(value->Rec.model)>1) break;
		else cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		cout << "| Год: ";
		gets_s(buff);
		value->Rec.year = atoi(buff);
		if (value->Rec.year > 1913 && value->Rec.year < 2018)
			break;
		else
			cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		cout << "| Двигатель: ";
		gets_s(value->Rec.engine);
		if (strlen(value->Rec.engine)<20 && strlen(value->Rec.engine)>2)break;
		else cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		cout << "| Кузов: ";
		gets_s(value->Rec.body);
		if (strlen(value->Rec.body)<20 && strlen(value->Rec.body)>1)break;
		else cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		cout << "| Турбина(0/1): ";
		gets_s(buff);
		bool f = 1;

		if (buff[0]>'1' || buff[0] < '0' || strlen(buff)>1)
			f = 0;
		if (f == 1)
		{
			value->Rec.turbine = atoi(buff);
			if (value->Rec.turbine == 0 || value->Rec.turbine == 1)break;
		}
		if (f == 0) cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		cout << "| Тип двигателя: ";
		gets_s(value->Rec.type);
		if (strlen(value->Rec.type)<20 && strlen(value->Rec.type) >= 3)break;
		else cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		cout << "| Диаметр колес: ";
		gets_s(buff);
		value->Rec.wheel = atoi(buff);
		if (value->Rec.wheel >= 14 && value->Rec.wheel <= 19)break;
		else cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		bool f = 1;
		cout << "| Sline(0/1): ";
		gets_s(buff);

		if (buff[0]>'1' || buff[0] < '0' || strlen(buff)>1)
			f = 0;
		if (f == 1)
		{
			value->Rec.sline = atoi(buff);
			if (value->Rec.sline == 0 || value->Rec.sline == 1)break;
		}
		if (f == 0) cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		bool f = 1;
		cout << "| Безопасность(0,0-5,0): ";
		gets_s(buff);

		if (buff[0]>'5' || buff[0] < '0' || strlen(buff)>3 || buff[2]>'9' || buff[2]<'0' || buff[1] != ',')
			f = 0;
		if (f == 1)
		{
			value->Rec.secure = atof(buff);
			if (value->Rec.secure >= 0.0 && value->Rec.secure <= 5.0)break;
		}
		else cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		bool f = 1;
		cout << "| Лошадиных сил: ";
		gets_s(buff);

		if (buff[0] > '6' || buff[0] < '1' || strlen(buff)>3 || strlen(buff) < 2)
		{
			f = 0;
		}

		if (f == 1)
		{
			value->Rec.HP = atoi(buff);
			if (value->Rec.HP >= 45 && value->Rec.HP <= 600)break;
		}
		cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}

	while (1)
	{
		fflush(stdin);
		bool f = 1;
		cout << "| Подушек безопасности: ";
		gets_s(buff);
		if (buff[0]>'9' || buff[0] < '0' || strlen(buff)>2)
			f = 0;
		if (f == 1)
		{
			value->Rec.airbag = atoi(buff);
			if (value->Rec.airbag >= 0 && value->Rec.airbag <= 20)break;
		}
		else cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
	}
	cout << "|===================================|" << endl;




	if (Head == NULL)
	{
		Head = Last = value;
		value->Next = NULL;
		value->Prev = NULL;
		n++;
		return;
	}
	if (place == 0)
	{
		Head->Prev = value;
		value->Next = Head;
		value->Prev = NULL;
		Head = value;
		n++;
		return;
	}
	if (place == n)
	{
		Last->Next = value;
		value->Prev = Last;
		value->Next = NULL;
		Last = value;
		n++;
		return;
	}
	if (place>0 && place<n)
	{
		for (int i = 0; i < place - 1; i++)
		{
			tmp = tmp->Next;
		}
		value->Prev = tmp;
		value->Next = tmp->Next;
		tmp->Next->Prev = value;
		tmp->Next = value;
		n++;
		return;
	}
	else
	{
		cout << "|===================================|" << endl;
		cout << "|      Ошибка! Выход в меню...      |" << endl;
		cout << "|===================================|" << endl;

		return;
	}
}

void Print_Table(List *list)
{
	if (n == 0)
	{
		cout << "|===================================|" << endl;
		cout << "|           Список пуст!!!!         |" << endl;
		cout << "|===================================|" << endl;
		return;
	}
	List *array = new List;
	array = Array_save(list);
	cout << "|========================================================================================================================|\n";
	printf("%13s%13.5s%13.10s%13.8s%13.7s%13.3s%15.25s\n",
		"Модель", "Год", "Турбина", "Колеса", "Sline", "Л/С", "  Подушки безопасности");
	for (int i = 0; i<n1; i++)
	{
		printf("%13s%13d%13d%13d%13d%13d%13d",
			array[i].Rec.model,
			array[i].Rec.year,
			array[i].Rec.turbine,
			array[i].Rec.wheel,
			array[i].Rec.sline,
			array[i].Rec.HP,
			array[i].Rec.airbag);
		printf("\n");
	}
	printf("|========================================================================================================================|\n");
	n1 = 0;
	delete array;
}

void edit(List *list)
{
	if (n == 0)
	{
		cout << "|===================================|" << endl;
		cout << "|           Список пуст!!!!         |" << endl;
		cout << "|===================================|" << endl;
		return;
	}
	List *array = new List;
	array = Array_save(list);
	int place, select;
	char buff[21], select_1[2000];
	while (1)
	{
		system("cls");
		Print_List(list);

		cout << endl;
		cout << "|==============================================================|" << endl;
		cout << "| Введите номер записи которую хотите редактировать(10-Выход): " << endl;
		gets_s(select_1);
		cout << "|==============================================================|" << endl;
		place = atoi(select_1);
		if (place == 0) place--;
		if (place == 10)
			return;

		while (place < 1 || place>n + 1)
		{
			cout << "|               Ошибка ввода! Повторите ваш ввод!              |" << endl;
			cout << "| Введите номер записи которую хотите редактировать(10-Выход): ";
			gets_s(select_1);
			place = atoi(select_1);
			if (place == 0) place--;
			cout << "|==============================================================|" << endl;
			if (place == 10)
				return;
		}
		place--;

		cout << endl << "|             Вы будите изменять слудующую запись:             |" << endl;
		cout << "|==============================================================|" << endl;
		cout << "| Авто №" << place + 1 << endl;
		cout << "|==============================================================|" << endl;
		cout << "| Модель: " << array[place].Rec.model << endl;
		cout << "| Год: " << array[place].Rec.year << endl;
		cout << "| Двигатель: " << array[place].Rec.engine << endl;
		cout << "| Кузов: " << array[place].Rec.body << endl;
		cout << "| Турбина: " << array[place].Rec.turbine << endl;
		cout << "| Тип Двигателя" << array[place].Rec.type << endl;
		cout << "| Размер колес: " << array[place].Rec.wheel << endl;
		cout << "| Sline: " << array[place].Rec.sline << endl;
		cout << "| Безопасность: " << array[place].Rec.secure << endl;
		cout << "| Лошадиные силы: " << array[place].Rec.HP << endl;
		cout << "| Подушек безопасности: " << array[place].Rec.airbag << endl;
		cout << "|==============================================================|" << endl;

		while (1)
		{
			cout << endl;
			cout << "| 1. Модель." << endl;
			cout << "| 2. Год." << endl;
			cout << "| 3. Двигатель." << endl;
			cout << "| 4. Кузов." << endl;
			cout << "| 5. Турбина." << endl;
			cout << "| 6. Тип двигателя." << endl;
			cout << "| 7. Диаметр колес." << endl;
			cout << "| 8. Sline." << endl;
			cout << "| 9. Безопасность." << endl;
			cout << "| 10. Лошадиных сил." << endl;
			cout << "| 11. Подушек безопасности." << endl;
			cout << "|==============================================================|" << endl;
			cout << "| Введите номер поля которое хотите изменить(20-Назад): ";
			gets_s(select_1);
			select = atoi(select_1);
			if (select == 0) select--;
			if (select == 20)
				break;
			while (select < 1 || select>11)
			{
				cout << "|==============================================================|" << endl;
				cout << "|               Ошибка ввода! Повторите ваш ввод!              |" << endl;
				cout << "| Введите номер поля которое хотите изменить(0-Назад): ";
				gets_s(select_1);
				select = atoi(select_1);
				if (select == 0) select--;
				cout << "|==============================================================|" << endl;
				if (select == 20)
					break;
			}
			if (select == 20)
				break;

			switch (select)
			{
			case 1:
				cout << "| Модель: ";
				cin >> buff;
				while (strlen(buff)>20 || strlen(buff)<1)
				{
					cout << "| Ошибка ввода! Повторите ваш ввод!" << endl;
					cout << "| Модель: ";
					cin >> buff;
				}
				strcpy_s(array[place].Rec.model, buff);
				strcpy_s(buff, " ");
				break;
			case 2:
				cout << "| Год: ";
				gets_s(buff);
				array[place].Rec.year = atoi(buff);
				while (array[place].Rec.year >= 1913 && array[place].Rec.year <= 2018)
				{
					cout << "| Ошибка ввода! Повторите ваш ввод!" << endl;
					cout << "| Год: ";
					cin >> array[place].Rec.year;
				}
				break;
			case 3:
				cout << "| Двигатели: ";
				cin >> buff;
				while (strlen(buff)>20 || strlen(buff)<3)
				{
					cout << "| Ошибка ввода! Повторите ваш ввод!" << endl;
					cout << "| Двигатели: ";
					cin >> buff;
				}
				strcpy_s(array[place].Rec.engine, buff);
				strcpy_s(buff, " ");
				break;
			case 4:
				cout << "| Кузова: ";
				cin >> buff;
				while (strlen(buff)>20 || strlen(buff)<2)
				{
					cout << "| Ошибка ввода! Повторите ваш ввод!" << endl;
					cout << "| Кузова: ";
					cin >> buff;
				}
				strcpy_s(array[place].Rec.body, buff);
				strcpy_s(buff, " ");
				break;
			case 5:
				while (1)
				{
					fflush(stdin);
					cout << "| Турбина(0/1): ";
					gets_s(buff);
					bool f = 1;

					if (buff[0]>'1' || buff[0] < '0' || strlen(buff)>1)
						f = 0;
					if (f == 1)
					{
						array[place].Rec.turbine = atoi(buff);
						if (array[place].Rec.turbine == 0 || array[place].Rec.turbine == 1)break;
					}
					if (f == 0) cout << "|    Ошибка ввода! Повторите ввод!  " << endl;
				}
				break;
			case 6:
				cout << "| Тип двигателя: ";
				cin >> buff;
				while (strlen(buff)>20 || strlen(buff)<3)
				{
					cout << "| Ошибка ввода! Повторите ваш ввод!" << endl;
					cout << "| Тип двигателя: ";
					cin >> buff;
				}
				strcpy_s(array[place].Rec.type, buff);
				strcpy_s(buff, " ");
				break;
			case 7:
				cout << "| Диаметр колес: ";
				gets_s(buff);
				array[place].Rec.wheel = atoi(buff);
				while (array[place].Rec.wheel>19 || array[place].Rec.wheel<14)
				{
					cout << "| Ошибка ввода! Повторите ваш ввод!" << endl;
					cout << "| Диаметр колес: ";
					cin >> array[place].Rec.wheel;
				}
				break;
			case 8:
				while (1)
				{
					fflush(stdin);
					bool f = 1;
					cout << "| Sline(0/1): ";
					gets_s(buff);

					if (buff[0]>'1' || buff[0] < '0' || strlen(buff)>1)
						f = 0;
					if (f == 1)
					{
						array[place].Rec.sline = atoi(buff);
						if (array[place].Rec.sline == 0 || array[place].Rec.sline == 1)break;
					}
					if (f == 0) cout << "|    Ошибка ввода! Повторите ввод!  " << endl;
				}
				break;
			case 9:
				while (1)
				{
					fflush(stdin);
					bool f = 1;
					cout << "| Безопасность(0,0-5,0): ";
					gets_s(buff);

					if (buff[0]>'5' || buff[0] < '0' || strlen(buff)>3 || buff[2]>'9' || buff[2]<'0' || buff[1] != ',')
						f = 0;
					if (f == 1)
					{
						array[place].Rec.secure = atof(buff);
						if (array[place].Rec.secure >= 0.0 && array[place].Rec.secure <= 5.0)break;
					}
					else cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
				}
				break;
			case 10:
				while (1)
				{
					fflush(stdin);
					bool f = 1;
					cout << "| Лошадиных сил: ";
					gets_s(buff);

					if (buff[0] > '6' || buff[0] < '1' || strlen(buff)>3 || strlen(buff) < 2)
					{
						f = 0;
					}

					if (f == 1)
					{
						array[place].Rec.HP = atoi(buff);
						if (array[place].Rec.HP >= 45 && array[place].Rec.HP <= 600)break;
					}
					cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
				}
				break;
			case 11:
				while (1)
				{
					fflush(stdin);
					bool f = 1;
					cout << "| Подушек безопасности: ";
					gets_s(buff);
					if (buff[0]>'9' || buff[0] < '0' || strlen(buff)>2)
						f = 0;
					if (f == 1)
					{
						array[place].Rec.airbag = atoi(buff);
						if (array[place].Rec.airbag >= 0 && array[place].Rec.airbag <= 20)break;
					}
					else cout << "|    Ошибка ввода! Повторите ввод!  |" << endl;
				}
				break;
			default:cout << "| Ошибка ввода!" << endl;
				break;
			}
			cout << "|==============================================================|" << endl;
		}
	}
}