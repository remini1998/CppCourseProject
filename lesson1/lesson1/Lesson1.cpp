// Lesson1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <map>
#include "line.h"
#include "Card.h"

int main()
{
	//TestCase1
	std::map<std::string, float>* map = new std::map<std::string, float>();
	map->insert(std::map<std::string, float>::value_type("水星", 0));
	map->insert(std::map<std::string, float>::value_type("土星", 4));
	map->insert(std::map<std::string, float>::value_type("水星", 5));
	map->insert(std::map<std::string, float>::value_type("地球", 10));
	map->insert(std::map<std::string, float>::value_type("火星", 11));
	map->insert(std::map<std::string, float>::value_type("木星", 18));
	Line* line = new Line(798, map);
	Card* card1 = new Card();
	Card* card2 = new Card(Card::Student);
	card1->recharge(20);
	card2->recharge(6);
    return 0;
}

