// Lesson1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <map>
#include <iostream>
#include "line.h"
#include "Card.h"

using namespace std;

int main()
{
	//TestCase1
	map<string, float>* map = new std::map<string, float>();
	map->insert(std::map<string, float>::value_type("水星", 40));
	map->insert(std::map<string, float>::value_type("土星", 44));
	map->insert(std::map<string, float>::value_type("地球", 310));
	map->insert(std::map<string, float>::value_type("火星", 315));
	map->insert(std::map<string, float>::value_type("木星", 438));
	Line* line = new Line(798, map);
	Card* card1 = new Card();
	Card* card2 = new Card(Card::Student);

	card1->recharge(20);
	card2->recharge(6);

	cout << "A刷卡上车，扣费：" << card1->di(line, "火星") << endl;
	cout << "B刷卡上车，扣费：" << card2->di(line, "火星") << endl;

	cout << "A刷卡下车，扣费：" << card1->di(line, "地球") << endl;
	cout << "B刷卡下车，扣费：" << card2->di(line, "土星") << endl;

	cout << "A余额：" << card1->getBalance() << endl;
	cout << "B余额：" << card2->getBalance() << endl;
	
	system("pause");
    return 0;
}

