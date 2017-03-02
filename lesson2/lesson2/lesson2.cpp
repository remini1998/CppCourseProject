// lesson2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "student.h"

int main()
{
	Student* A = new Student("D-103", "王尼玛");
	Student* B = new Student("D-214", "PDD");
	A->setScore(23, 14);
	B->setScore(86587, 75657);
	A->print();
	B->print();
	system("pause");
    return 0;
}

