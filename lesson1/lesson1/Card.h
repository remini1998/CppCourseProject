#pragma once
#include "line.h"
class Card
{
public:

	enum Type {
		Common, Student
	};
	Card(Type type = Common);
	~Card();

	Type getType();

	float getBalance();

	bool recharge(float money);

	//À¢ø®∑Ω∑®
	float di(Line* line, std::string currentStop);

private:

	//”‡∂Ó
	float balance = 0;

	Type type;

	std::string getOnStop;

	Line* nowLine;

	float calcPrice(float distance);
};

