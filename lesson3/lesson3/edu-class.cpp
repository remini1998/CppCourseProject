#include "stdafx.h"
#include "edu-class.h"


bool EduClass::addStudent(Student * student)
{
	if (studentNum >= MAX_STUDENT - 1)
		return false;
	students[studentNum++] = student;
	studentNum++;
	return true;
}

bool EduClass::addStudent(string id, string name)
{
	return addStudent(new Student(id, name));
}

EduClass::EduClass()
{
}


EduClass::~EduClass()
{
}
