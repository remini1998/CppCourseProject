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

//打印学生成绩
void Student::print()
{
	cout << "——————————————————" << endl;
	cout << "学号：" << id << "    姓名：" << name << endl;
	cout << "数学：" << mathScore << "    英语：" << englishScore << endl;
	cout << "总分：" << getTotalScore() << "    平均：" << getAverScore() << endl;
	cout << "——————————————————" << endl;
}

//设置分数
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
