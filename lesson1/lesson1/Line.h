#pragma once
#include <map>
class Line
{
public:
	Line(int busNum, std::map<std::string, float>* busStop);
	~Line();
	int getBusNum();
	float calcDistance(std::string stopA, std::string stopB);
	float getMaxDistance();
	bool static equal(Line* a, Line* b);

private:
	int busNum;
	std::map<std::string, float>* busStop;
};

