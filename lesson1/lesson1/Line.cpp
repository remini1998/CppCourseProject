#include "stdafx.h"
#include <string.h>
#include <map>
#include "line.h"


Line::Line(int busNum, std::map<std::string, float>* busStop)
{
	this->busNum = busNum;
	this->busStop = busStop;
}


Line::~Line()
{
	delete busStop;
}

int Line::getBusNum()
{
	return busNum;
}

float Line::calcDistance(std::string stopA, std::string stopB)
{
	float result = busStop->find(stopA)->second - busStop->find(stopB)->second;
	if (result < 0)result = -result;
	return result;
}
 
float Line::getMaxDistance()
{
	float result = busStop->begin()->second - busStop->end()->second;
	if (result < 0) result = -result;
	return result;
}

bool Line::equal(Line* a, Line* b)
{
	if (!a || !b) return false;
	if (a->busNum != b->busNum)
		return false;
	if (a->busStop->size() != b->busStop->size()) return false;
	std::map<std::string, float>::iterator iterA;
	std::map<std::string, float>::iterator iterB;
	for (iterA = a->busStop->begin(), iterB = b->busStop->begin(); iterA != a->busStop->end(); iterA++, iterB++)
	{
		if (iterA->first != iterB->first) return false;
		if (iterA->second != iterB->second) return false;
	}
	return true;
}
