#include "stdafx.h"
#include <string>
#include <iostream>
#include "student.h"

using namespace std;

Student::Student(string id, string name)
{
	this->id = id;
	this->name = name;
}

//��ӡѧ���ɼ�
void Student::print()
{
	cout << "������������������������������������" << endl;
	cout << "ѧ�ţ�" << id << "    ������" << name << endl;
	cout << "��ѧ��" << mathScore << "    Ӣ�" << englishScore << endl;
	cout << "�ܷ֣�" << getTotalScore() << "    ƽ����" << getAverScore() << endl;
	cout << "������������������������������������" << endl;
}

//���÷���
void Student::setScore(float math, float english)
{
	mathScore = math;
	englishScore = english;
}

float Student::getTotalScore()
{
	return mathScore + englishScore;
}

float Student::getAverScore()
{
	return getTotalScore() / 2;
}

Student::~Student()
{
}
