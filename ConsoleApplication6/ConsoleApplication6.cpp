//// ConsoleApplication6.cpp : �������̨Ӧ�ó������ڵ㡣
////
#include "stdafx.h"
# include <iostream>  
# include <fstream>  
#include <string>
#include <conio.h>//��system("pause");����getch();  
#include "LoginForm.h"
using namespace std;
const string STUDENT_INFO_FILE_NAME=("student_info.data");

int main()
{
	LoginForm loginform;
	loginform.show();
	system("pause");
	return 0;
}

////�k�k�k�k�k�k�k�k�k�k�k�k�������k�k�k�k�k�k�k�k�k�k�k�k  
////int main()
////{
////	int x, i = 0;
////	bool quit = false;
////	cout << "\t\t���������������������������" << endl;
////	for (i = 0; i < 3; i++)
////		cout << "\t\t��\t\t\t\t\t\t  ��" << endl;
////	cout << "\t\t�����  ��ӭ����ѧ���ɼ�����ϵͳ  ��������" << endl;
////	for (i = 0; i < 3; i++)
////		cout << "\t\t��\t\t\t\t\t\t  ��" << endl;
////	cout << "\t\t���������������������������\n" << endl;;
////	Studentmassage Grade;
////	system("pause");
////	while (!quit)
////	{
////		system("cls");
////		Grade.ShowMenu();
////		cin >> x;
////		switch (x)
////		{
////		case 0:quit = true; break;
////		case 1:Grade.AddItem(); break;
////		case 2:Grade.Display(); break;
////		case 3:Grade.Sort(); break;
////		case 4:Grade.Find(); break;
////		case 5:Grade.RemoveItem(); break;
////		case 6:Grade.ModifyItem(); break;
////		}
////	}
////	return 0;
////}
////�k�k�k�k�k�k�k�k�k�kStudent��k�k�k�k�k�k�k�k�k�k�k  
//class Student
//{
//public:
//	string name;
//	string Id;
//	int Cnum;       //C++�γ̵÷�  
//	int Mnum;       //���γ̵÷�  
//	int Enum;       //Ƕ��ʽ����ϵͳ�γ̵÷�  
//	int sum;        //�ܷ�       
//	Student * Next;
//	void Input()
//	{
//		cout << "\t\t������ѧ����������";  cin >> name;
//		cout << "\t\t������ѧ����ѧ�ţ�";  cin >> Id;
//		cout << "\t\t������C++�γ̵ĳɼ���";  cin >> Cnum;
//		cout << "\t\t��������γ̵ĳɼ���";  cin >> Mnum;
//		cout << "\t\t������Ƕ��ʽ����ϵͳ�γ̵ĳɼ���";  cin >> Enum;
//		sum = Cnum + Mnum + Enum;
//	}
//	void ReadFile(istream & in)
//	{
//		in >> name >> Id >> Cnum >> Mnum >> Enum >> sum;
//	}
//	void Show()
//	{
//		cout << "����:" << name << endl << "ѧ��:" << Id << endl << "C++:" << Cnum << endl
//			<< "���:" << Mnum << endl << "Ƕ��ʽ����ϵͳ��" << Enum << endl << "�ܳɼ�:" << sum << endl << endl << endl;
//	}
//};
//
////�k�k�k�k�k�k�k�k�kStudentmassage��k�k�k�k�k�k�k�k�k�k�k�k  
//class Studentmassage
//{
//public:
//	Studentmassage();
//	~Studentmassage();
//	void ShowMenu();
//	void Find();
//	void Save();
//	void ModifyItem();
//	void RemoveItem();
//	void Swap(Student *, Student *);
//	void Sort();
//	//void Unpass();  
//	int ListCount();
//	//void Average();  
//	void Display()
//	{
//		for (Student * p = Head->Next; p != End; p = p->Next)
//			p->Show();
//		system("pause");
//	}
//	void AddItem()
//	{
//		End->Input();
//		End->Next = new Student;
//		End = End->Next;
//		cout << "���ӳɹ�!" << endl;
//		system("pause");
//	}
//private:
//	Student * Head, *End;
//	ifstream in;
//	ofstream out;
//	Student *FindItem(char * name)
//	{
//		for (Student * p = Head; p->Next != End; p = p->Next)//ƥ��ɹ��򷵻���һ��ָ�룬���ɹ��ͷ��ؿ�  
//			if (!strcmp(p->Next->name, name))return p;
//		return NULL;
//	}
//	Student *FindID(char * Id)
//	{
//		for (Student * p = Head; p->Next != End; p = p->Next)//ƥ��ɹ��򷵻���һ��ָ�룬���ɹ��ͷ��ؿ�  
//			if (!strcmp(p->Next->Id, Id))return p;
//		return NULL;
//	}
//};
//
////�k�k�k�k�k�k�k�k�k�k�k�k���캯���k�k�k�k�k�k�k�k�k�k�k�k  
//Studentmassage::Studentmassage()
//{
//	Head = new Student;
//	Head->Next = new Student;
//	End = Head->Next;
//	in.open(STUDENT_INFO_FILE_NAME);
//	if (!in)
//		cout << "����һ����ϵͳ����ѧ����Ϣ���������롣" << endl;
//	else
//	{
//		while (!in.eof())
//		{
//			End->ReadFile(in);
//			if (End->name[0] == '\0')break;
//			End->Next = new Student;
//			End = End->Next;
//		}
//		in.close();
//		cout << "\t\t��ȡѧ����Ϣ�ɹ�!" << endl;
//	}
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�k���������k�k�k�k�k�k�k�k�k�k�k�k  
//Studentmassage::~Studentmassage()
//{
//	Save();
//	for (Student * temp; Head->Next != End;)
//	{
//		temp = Head->Next;
//		Head->Next = Head->Next->Next;
//		delete temp;
//	}
//	delete Head, End;
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�k�˵��k�k�k�k�k�k�k�k�k�k�k�k  
//void Studentmassage::ShowMenu()
//{
//	cout << "********************************************************************************" << endl;
//	cout << "��������������������  ��   ѧ �� �� �� �� �� ϵ  ͳ     ��  ��������������������" << endl;
//	cout << "��������������������         ��������         �������������������" << endl;
//	cout << "��������������������  ��          1.����ѧ���ɼ�        ��  �������������������" << endl;
//	cout << "��������������������  ��          2.��ʾѧ���ɼ�        ��  �������������������" << endl;
//	cout << "��������������������  ��          3.����ͳ�Ƴɼ�        ��  �������������������" << endl;
//	cout << "��������������������  ��          4.����ѧ���ɼ�        ��  �������������������" << endl;
//	cout << "��������������������  ��          5.ɾ��ѧ���ɼ�        ��  �������������������" << endl;
//	cout << "��������������������  ��          6.�޸�ѧ����Ϣ        ��  �������������������" << endl;
//	cout << "��������������������  ��          0.��ȫ�˳�ϵͳ        ��  �������������������" << endl;
//
//	cout << "\n\t\t\n\t\t��ѡ��";
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�k���Һ����k�k�k�k�k�k�k�k�k�k�k�k  
//void Studentmassage::Find()
//{
//	char name[20], Id[10];
//	int x;
//	Student * p = NULL;
//	cout << "\n\t\t*********************************\n";
//	cout << "\t\t�� 1.��ѧ������������\n\t\t�� 2.��ѧ��ѧ�Ų���";
//	cout << "\n\t\t*********************************\n��ѡ��";
//	cin >> x;
//	switch (x)
//	{
//	case 1: {cout << "\t\t������Ҫ���ҵ�ѧ����������"; cin >> name;
//		if (p = FindItem(name))
//		{
//			p->Next->Show();
//			system("pause");
//		}
//		else
//		{
//			cout << "\t\tû���ҵ���������ѧ����" << '\n' << endl;
//			system("pause");
//		}
//	}break;
//	case 2:
//	{
//		cout << "\t\t������Ҫ���ҵ�ѧ����ѧ�ţ�"; cin >> Id;
//		if (p = FindID(Id))
//		{
//			p->Next->Show();
//			system("pause");
//		}
//		else
//		{
//			cout << "\t\tû���ҵ���ѧ�õ�ѧ����" << '\n' << endl;
//			system("pause");
//		}
//	}break;
//	}
//
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�k�޸���Ϣ�k�k�k�k�k�k�k�k�k�k�k�k  
//void Studentmassage::ModifyItem()     //�޸���Ϣ  
//{
//	char name[20];
//	Student * p = NULL;
//	cout << "\t\t������Ҫ�޸ĵ��˵�����:"; cin >> name;
//	if (p = FindItem(name))
//	{
//		cout << "\t\t���ҵ�ѧ������Ϣ���������µ���Ϣ!" << endl;
//		p->Next->Input();
//		cout << "�޸ĳɹ���" << endl;
//		system("pause");
//	}
//	else
//	{
//		cout << "\t\tû���ҵ�!" << endl;
//		system("pause");
//	}
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�kɾ����Ϣ�k�k�k�k�k�k�k�k�k�k�k�k  
//void Studentmassage::RemoveItem()         // ɾ����Ϣ  
//{
//	char name[20];
//	Student * p = NULL, *temp = NULL;
//	cout << "\t\t������Ҫɾ����ѧ��������:" << endl; cin >> name;
//	if (p = FindItem(name))
//	{
//		temp = p->Next;
//		p->Next = p->Next->Next;
//		delete temp;
//		cout << "\t\tɾ���ɹ�!" << endl;
//		system("pause");
//	}
//	else
//	{
//		cout << "\t\tû���ҵ�!" << endl;
//		system("pause");
//	}
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k  
//void Studentmassage::Swap(Student *p1, Student *p2)//��������combox������������  
//{
//	Student *temp = new Student;
//	strcpy(temp->name, p1->name);
//	strcpy(temp->Id, p1->Id);
//	temp->Cnum = p1->Cnum;
//	temp->Mnum = p1->Mnum;
//	temp->Enum = p1->Enum;
//	temp->sum = p1->sum;
//
//	strcpy(p1->name, p2->name);
//	strcpy(p1->Id, p2->Id);
//	p1->Cnum = p2->Cnum;
//	p1->Mnum = p2->Mnum;
//	p1->Enum = p2->Enum;
//	p1->sum = p2->sum;
//
//	strcpy(p2->name, temp->name);
//	strcpy(p2->Id, temp->Id);
//	p2->Cnum = temp->Cnum;
//	p2->Mnum = temp->Mnum;
//	p2->Enum = temp->Enum;
//	p2->sum = temp->sum;
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k  
//int Studentmassage::ListCount()//ͳ�Ƶ�ǰ�����ļ�¼����������һ������  
//{
//	if (!Head)
//		return 0;
//	int n = 0;
//	for (Student * p = Head->Next; p != End; p = p->Next)
//	{
//		n++;
//	}
//	return n;
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k  
//void Studentmassage::Sort()//�Ե�ǰ������������  
//{
//	cout << "Sorting..." << endl;
//	Student *p = NULL, *p1 = NULL, *k = NULL;
//	int n = Studentmassage::ListCount();
//	if (n < 2)
//		return;
//	for (p = Head->Next; p != End; p = p->Next)
//		for (k = p->Next; k != End; k = k->Next)
//		{
//			if (p->sum > k->sum)
//			{
//				Studentmassage::Swap(p, k);
//			}
//		}
//	cout << "������ɣ�" << endl;
//	system("pause");
//	return;
//}
//
////�k�k�k�k�k�k�k�k�k�k�k���溯���k�k�k�k�k�k�k�k�k�k�k�k�k  
//void Studentmassage::Save()
//{
//	out.open(STUDENT_INFO_FILE_NAME);
//	for (Student *p = Head->Next; p != End; p = p->Next)
//		out << p->name << "\t" << p->Id << "\t" << p->Cnum << "\t"
//		<< p->Mnum << "\t" << p->Enum << "\t" << p->sum << '\n';
//	out.close();
//}
//
//
//
//#include "stdafx.h"
//
//# include <iostream>  
//# include <fstream>  
//# include <string.h>  
////#include <conio.h>//��system("pause");  
//using namespace std;
//
////�k�k�k�k�k�k�k�k�k�kStudent��k�k�k�k�k�k�k�k�k�k�k  
//class Student
//{
//public:
//	char name[20];
//	char Id[20];
//	int Cnum;       //C++�γ̵÷�  
//	int Mnum;       //���γ̵÷�  
//	int Enum;       //Ƕ��ʽ����ϵͳ�γ̵÷�  
//	int sum;        //�ܷ�       
//	Student * Next;
//	void Input()
//	{
//		cout << "\t\t������ѧ����������";  cin >> name;
//		cout << "\t\t������ѧ����ѧ�ţ�";  cin >> Id;
//		cout << "\t\t������C++�γ̵ĳɼ���";  cin >> Cnum;
//		cout << "\t\t��������γ̵ĳɼ���";  cin >> Mnum;
//		cout << "\t\t������Ƕ��ʽ����ϵͳ�γ̵ĳɼ���";  cin >> Enum;
//		sum = Cnum + Mnum + Enum;
//	}
//	void ReadFile(istream & in)
//	{
//		in >> name >> Id >> Cnum >> Mnum >> Enum >> sum;
//	}
//	void Show()
//	{
//		cout << "����:" << name << endl << "ѧ��:" << Id << endl << "C++:" << Cnum << endl
//			<< "���:" << Mnum << endl << "Ƕ��ʽ����ϵͳ��" << Enum << endl << "�ܳɼ�:" << sum << endl << endl << endl;
//	}
//};
//
////�k�k�k�k�k�k�k�k�kStudentmassage��k�k�k�k�k�k�k�k�k�k�k�k  
//class Studentmassage
//{
//public:
//	Studentmassage();
//	~Studentmassage();
//	void ShowMenu();
//	void Find();
//	void Save();
//	void ModifyItem();
//	void RemoveItem();
//	void Swap(Student *, Student *);
//	void Sort();
//	//void Unpass();  
//	int ListCount();
//	//void Average();  
//	void Display()
//	{
//		for (Student * p = Head->Next; p != End; p = p->Next)
//			p->Show();
//		system("pause");
//	}
//	void AddItem()
//	{
//		End->Input();
//		End->Next = new Student;
//		End = End->Next;
//		cout << "���ӳɹ�!" << endl;
//		system("pause");
//	}
//private:
//	Student * Head, *End;
//	ifstream in;
//	ofstream out;
//	Student *FindItem(char * name)
//	{
//		for (Student * p = Head; p->Next != End; p = p->Next)//ƥ��ɹ��򷵻���һ��ָ�룬���ɹ��ͷ��ؿ�  
//			if (!strcmp(p->Next->name, name))return p;
//		return NULL;
//	}
//	Student *FindID(char * Id)
//	{
//		for (Student * p = Head; p->Next != End; p = p->Next)//ƥ��ɹ��򷵻���һ��ָ�룬���ɹ��ͷ��ؿ�  
//			if (!strcmp(p->Next->Id, Id))return p;
//		return NULL;
//	}
//};
//
////�k�k�k�k�k�k�k�k�k�k�k�k���캯���k�k�k�k�k�k�k�k�k�k�k�k  
//Studentmassage::Studentmassage()
//{
//	Head = new Student;
//	Head->Next = new Student;
//	End = Head->Next;
//	in.open(STUDENT_INFO_FILE_NAME);
//	if (!in)
//		cout << "����һ����ϵͳ����ѧ����Ϣ���������롣" << endl;
//	else
//	{
//		while (!in.eof())
//		{
//			End->ReadFile(in);
//			if (End->name[0] == '\0')break;
//			End->Next = new Student;
//			End = End->Next;
//		}
//		in.close();
//		cout << "\t\t��ȡѧ����Ϣ�ɹ�!" << endl;
//	}
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�k���������k�k�k�k�k�k�k�k�k�k�k�k  
//Studentmassage::~Studentmassage()
//{
//	Save();
//	for (Student * temp; Head->Next != End;)
//	{
//		temp = Head->Next;
//		Head->Next = Head->Next->Next;
//		delete temp;
//	}
//	delete Head, End;
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�k�˵��k�k�k�k�k�k�k�k�k�k�k�k  
//void Studentmassage::ShowMenu()
//{
//	cout << "********************************************************************************" << endl;
//	cout << "��������������������  ��   ѧ �� �� �� �� �� ϵ  ͳ     ��  ��������������������" << endl;
//	cout << "��������������������         ��������         �������������������" << endl;
//	cout << "��������������������  ��          1.����ѧ���ɼ�        ��  �������������������" << endl;
//	cout << "��������������������  ��          2.��ʾѧ���ɼ�        ��  �������������������" << endl;
//	cout << "��������������������  ��          3.����ͳ�Ƴɼ�        ��  �������������������" << endl;
//	cout << "��������������������  ��          4.����ѧ���ɼ�        ��  �������������������" << endl;
//	cout << "��������������������  ��          5.ɾ��ѧ���ɼ�        ��  �������������������" << endl;
//	cout << "��������������������  ��          6.�޸�ѧ����Ϣ        ��  �������������������" << endl;
//	cout << "��������������������  ��          0.��ȫ�˳�ϵͳ        ��  �������������������" << endl;
//
//	cout << "\n\t\t\n\t\t��ѡ��";
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�k���Һ����k�k�k�k�k�k�k�k�k�k�k�k  
//void Studentmassage::Find()
//{
//	char name[20], Id[10];
//	int x;
//	Student * p = NULL;
//	cout << "\n\t\t*********************************\n";
//	cout << "\t\t�� 1.��ѧ������������\n\t\t�� 2.��ѧ��ѧ�Ų���";
//	cout << "\n\t\t*********************************\n��ѡ��";
//	cin >> x;
//	switch (x)
//	{
//	case 1: {cout << "\t\t������Ҫ���ҵ�ѧ����������"; cin >> name;
//		if (p = FindItem(name))
//		{
//			p->Next->Show();
//			system("pause");
//		}
//		else
//		{
//			cout << "\t\tû���ҵ���������ѧ����" << '\n' << endl;
//			system("pause");
//		}
//	}break;
//	case 2:
//	{
//		cout << "\t\t������Ҫ���ҵ�ѧ����ѧ�ţ�"; cin >> Id;
//		if (p = FindID(Id))
//		{
//			p->Next->Show();
//			system("pause");
//		}
//		else
//		{
//			cout << "\t\tû���ҵ���ѧ�õ�ѧ����" << '\n' << endl;
//			system("pause");
//		}
//	}break;
//	}
//
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�k�޸���Ϣ�k�k�k�k�k�k�k�k�k�k�k�k  
//void Studentmassage::ModifyItem()     //�޸���Ϣ  
//{
//	char name[20];
//	Student * p = NULL;
//	cout << "\t\t������Ҫ�޸ĵ��˵�����:"; cin >> name;
//	if (p = FindItem(name))
//	{
//		cout << "\t\t���ҵ�ѧ������Ϣ���������µ���Ϣ!" << endl;
//		p->Next->Input();
//		cout << "�޸ĳɹ���" << endl;
//		system("pause");
//	}
//	else
//	{
//		cout << "\t\tû���ҵ�!" << endl;
//		system("pause");
//	}
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�kɾ����Ϣ�k�k�k�k�k�k�k�k�k�k�k�k  
//void Studentmassage::RemoveItem()         // ɾ����Ϣ  
//{
//	char name[20];
//	Student * p = NULL, *temp = NULL;
//	cout << "\t\t������Ҫɾ����ѧ��������:" << endl; cin >> name;
//	if (p = FindItem(name))
//	{
//		temp = p->Next;
//		p->Next = p->Next->Next;
//		delete temp;
//		cout << "\t\tɾ���ɹ�!" << endl;
//		system("pause");
//	}
//	else
//	{
//		cout << "\t\tû���ҵ�!" << endl;
//		system("pause");
//	}
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k  
//void Studentmassage::Swap(Student *p1, Student *p2)//��������combox������������  
//{
//	Student *temp = new Student;
//	strcpy(temp->name, p1->name);
//	strcpy(temp->Id, p1->Id);
//	temp->Cnum = p1->Cnum;
//	temp->Mnum = p1->Mnum;
//	temp->Enum = p1->Enum;
//	temp->sum = p1->sum;
//
//	strcpy(p1->name, p2->name);
//	strcpy(p1->Id, p2->Id);
//	p1->Cnum = p2->Cnum;
//	p1->Mnum = p2->Mnum;
//	p1->Enum = p2->Enum;
//	p1->sum = p2->sum;
//
//	strcpy(p2->name, temp->name);
//	strcpy(p2->Id, temp->Id);
//	p2->Cnum = temp->Cnum;
//	p2->Mnum = temp->Mnum;
//	p2->Enum = temp->Enum;
//	p2->sum = temp->sum;
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k  
//int Studentmassage::ListCount()//ͳ�Ƶ�ǰ�����ļ�¼����������һ������  
//{
//	if (!Head)
//		return 0;
//	int n = 0;
//	for (Student * p = Head->Next; p != End; p = p->Next)
//	{
//		n++;
//	}
//	return n;
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k  
//void Studentmassage::Sort()//�Ե�ǰ������������  
//{
//	cout << "Sorting..." << endl;
//	Student *p = NULL, *p1 = NULL, *k = NULL;
//	int n = Studentmassage::ListCount();
//	if (n < 2)
//		return;
//	for (p = Head->Next; p != End; p = p->Next)
//		for (k = p->Next; k != End; k = k->Next)
//		{
//			if (p->sum > k->sum)
//			{
//				Studentmassage::Swap(p, k);
//			}
//		}
//	cout << "������ɣ�" << endl;
//	system("pause");
//	return;
//}
//
////�k�k�k�k�k�k�k�k�k�k�k���溯���k�k�k�k�k�k�k�k�k�k�k�k�k  
//void Studentmassage::Save()
//{
//	out.open(STUDENT_INFO_FILE_NAME);
//	for (Student *p = Head->Next; p != End; p = p->Next)
//		out << p->name << "\t" << p->Id << "\t" << p->Cnum << "\t"
//		<< p->Mnum << "\t" << p->Enum << "\t" << p->sum << '\n';
//	out.close();
//}
//
////�k�k�k�k�k�k�k�k�k�k�k�k�������k�k�k�k�k�k�k�k�k�k�k�k  
//int main()
//{
//	int x, i = 0;
//	bool quit = false;
//	cout << "\t\t���������������������������" << endl;
//	for (i = 0; i < 3; i++)
//		cout << "\t\t��\t\t\t\t\t\t  ��" << endl;
//	cout << "\t\t�����  ��ӭ����ѧ���ɼ�����ϵͳ  ��������" << endl;
//	for (i = 0; i < 3; i++)
//		cout << "\t\t��\t\t\t\t\t\t  ��" << endl;
//	cout << "\t\t���������������������������\n" << endl;;
//	Studentmassage Grade;
//	system("pause");
//	while (!quit)
//	{
//		system("cls");
//		Grade.ShowMenu();
//		cin >> x;
//		switch (x)
//		{
//		case 0:quit = true; break;
//		case 1:Grade.AddItem(); break;
//		case 2:Grade.Display(); break;
//		case 3:Grade.Sort(); break;
//		case 4:Grade.Find(); break;
//		case 5:Grade.RemoveItem(); break;
//		case 6:Grade.ModifyItem(); break;
//		}
//	}
//	return 0;
//}
//