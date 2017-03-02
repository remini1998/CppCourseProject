#pragma once
#include "stdafx.h"
#include "student.h"

#define MAX_STUDENT 50

using namespace std;

class EduClass
{
public:
	bool addStudent(Student* student);
	bool addStudent(string id, string name);
	//float static englishMaxScore = 150;
	//float static mathMaxScore = 150;
	EduClass();
	~EduClass();
private:
	int studentNum = 0;
	Student* students[MAX_STUDENT];
	
};

