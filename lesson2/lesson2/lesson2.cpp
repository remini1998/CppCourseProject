// lesson2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "student.h"

int main()
{
	Student* A = new Student("D-103", "������");
	Student* B = new Student("D-214", "PDD");
	A->setScore(23, 14);
	B->setScore(86587, 75657);
	A->print();
	B->print();
	system("pause");
    return 0;
}

