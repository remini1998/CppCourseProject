#include "stdafx.h"
#include "card.h"


Card::Card(Type type)
{
	this->type = type;
	getOnStop = "";
}

Card::~Card()
{
}

Card::Type Card::getType()
{
	return type;
}

float Card::getBalance()
{
	return balance;
}

bool Card::recharge(float money)
{
	if (money < 0) return false;
	balance += money;
	return true;
}
//模拟刷卡，返回扣费金额。如果出错返回-1。
float Card::di(Line* line, std::string currentStop)
{
	//没钱你坐个头
	if (balance <= 0) {
		return -1;
	}
	//如果是第一次上车
	else if (!this->nowLine) {
		this->nowLine = line;
		getOnStop = currentStop;
		return 0;
	}
	//检测是否是下车
	else if (Line::equal(line, nowLine)) {
		float distance = nowLine->calcDistance(getOnStop, currentStop);
		//printf("%f\n", distance);
		float fee = calcPrice(distance);
		printf("%f\n", fee);
		balance -= fee;
		getOnStop = "";
		this->nowLine = NULL;
		return fee;
		//请注意，因为考虑line可能为公用，所以这里没有释放line占用的内存空间。实际使用时应该注意释放
	}
	//上车，但是上次下车没刷卡
	else {
		float fee = calcPrice(nowLine->getMaxDistance());
		balance -= fee;
		nowLine = NULL;
		currentStop = "";
		if (di(line, currentStop) < 0) return -1;
		else return fee;
	}
}
//根据里程数计算价格
float Card::calcPrice(float distance)
{
	if (distance < 0) return 0;

	float result = 0;

	//计算原始价格
	if (distance <= 10)
		result = 2;
	else {
		result = (float)((int)((distance - 10) / 5));
		//处理小数里程
		if (distance - (int)distance > 0) result++;
	}

	//计算折扣
	if (type == Common) {
		result *= 0.5;
	}
	else if (type == Student) {
		result *= 0.25;
	}

	return result;

}
