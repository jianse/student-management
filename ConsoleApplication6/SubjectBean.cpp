
#include "SubjectBean.h"


SubjectBean::SubjectBean()
{
}

SubjectBean::SubjectBean(string id, string name, int teachernum, vector<string> teachersid, bool singel, int length, string des)
{
	SubjectBean::id = id;
	SubjectBean::name = name;
	SubjectBean::teachernum = teachernum;
	SubjectBean::teachersid = teachersid;
	SubjectBean::issingal = singel;
	SubjectBean::length = length;
	SubjectBean::description = des;
}


SubjectBean::~SubjectBean()
{
}

bool SubjectBean::operator==(SubjectBean & s2)
{
	if (SubjectBean::id == s2.id)
	{
		return true;
	}
	else
	{
		return false;
	}
}

SubjectBean & SubjectBean::operator=(SubjectBean & s2)
{
	this->id = s2.id;
	this->name = s2.name;
	this->teachernum = s2.teachernum;
	this->teachersid = s2.teachersid;
	this->teacher = s2.teacher;
	this->issingal = s2.issingal;
	this->length = s2.length;
	this->time = s2.time;
	this->description = s2.description;
	return *this;
}

bool SubjectBean::operator==(Bean & b2)
{
	return false;
}

Bean & SubjectBean::operator=(Bean & b2)
{
	return *this;
}

void SubjectBean::display()
{
	cout << "�γ�ID:\t:" << SubjectBean::id << endl;
	cout << "�γ���\t:" << SubjectBean::name << endl;
	//cout << "teacher\t:" << endl;
	cout << "���\t:" << SubjectBean::description << endl;
}

string SubjectBean::getid()
{
	return id;
}

istream & operator >> (istream & is, SubjectBean & data)
{
	is >> setw(12) >> data.id >> setw(18) >> data.name >> setw(3) >> data.teachernum;
	for (int i = 0; i < data.teachernum;i++)
	{
		string tid;
		is >> setw(12) >> tid;
		data.teachersid.push_back(tid);
	}
	is >> setw(3) >> data.issingal >> setw(3) >> data.length >> setw(32) >> data.description;
	return is;
}

ostream & operator<<(ostream & ou, SubjectBean & data)
{
	ou << setw(12) << data.id << setw(18) << data.name << setw(3) << data.teachernum;
	for (int i = 0; i < data.teachernum; i++)
	{
		ou << setw(12) <<data.teachersid[i];
	}
	ou << setw(3) << data.issingal << setw(3) << data.length << setw(32) << data.description << endl;
	return ou;
}
