#pragma once
#include <string>
using namespace std;

class Student
{
public:

	void print();
	
	void setScore(float math, float english);

	float getTotalScore();

	float getAverScore();

	Student(string id, string name);

	~Student();
	

private:
	string name;
	string id;
	float mathScore;
	float englishScore;
};

