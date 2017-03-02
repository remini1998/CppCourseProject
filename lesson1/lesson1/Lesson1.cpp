// Lesson1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <map>
#include "line.h"
#include "Card.h"

int main()
{
	//TestCase1
	std::map<std::string, float>* map = new std::map<std::string, float>();
	map->insert(std::map<std::string, float>::value_type("ˮ��", 0));
	map->insert(std::map<std::string, float>::value_type("����", 4));
	map->insert(std::map<std::string, float>::value_type("ˮ��", 5));
	map->insert(std::map<std::string, float>::value_type("����", 10));
	map->insert(std::map<std::string, float>::value_type("����", 11));
	map->insert(std::map<std::string, float>::value_type("ľ��", 18));
	Line* line = new Line(798, map);
	Card* card1 = new Card();
	Card* card2 = new Card(Card::Student);
	card1->recharge(20);
	card2->recharge(6);
    return 0;
}

