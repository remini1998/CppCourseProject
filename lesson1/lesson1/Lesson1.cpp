// Lesson1.cpp : �������̨Ӧ�ó������ڵ㡣
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
	map->insert(std::map<string, float>::value_type("ˮ��", 40));
	map->insert(std::map<string, float>::value_type("����", 44));
	map->insert(std::map<string, float>::value_type("����", 310));
	map->insert(std::map<string, float>::value_type("����", 315));
	map->insert(std::map<string, float>::value_type("ľ��", 438));
	Line* line = new Line(798, map);
	Card* card1 = new Card();
	Card* card2 = new Card(Card::Student);

	card1->recharge(20);
	card2->recharge(6);

	cout << "Aˢ���ϳ����۷ѣ�" << card1->di(line, "����") << endl;
	cout << "Bˢ���ϳ����۷ѣ�" << card2->di(line, "����") << endl;

	cout << "Aˢ���³����۷ѣ�" << card1->di(line, "����") << endl;
	cout << "Bˢ���³����۷ѣ�" << card2->di(line, "����") << endl;

	cout << "A��" << card1->getBalance() << endl;
	cout << "B��" << card2->getBalance() << endl;
	
	system("pause");
    return 0;
}

