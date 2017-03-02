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
//ģ��ˢ�������ؿ۷ѽ����������-1��
float Card::di(Line* line, std::string currentStop)
{
	//ûǮ������ͷ
	if (balance <= 0) {
		return -1;
	}
	//����ǵ�һ���ϳ�
	else if (!this->nowLine) {
		this->nowLine = line;
		getOnStop = currentStop;
		return 0;
	}
	//����Ƿ����³�
	else if (Line::equal(line, nowLine)) {
		float distance = nowLine->calcDistance(getOnStop, currentStop);
		//printf("%f\n", distance);
		float fee = calcPrice(distance);
		printf("%f\n", fee);
		balance -= fee;
		getOnStop = "";
		this->nowLine = NULL;
		return fee;
		//��ע�⣬��Ϊ����line����Ϊ���ã���������û���ͷ�lineռ�õ��ڴ�ռ䡣ʵ��ʹ��ʱӦ��ע���ͷ�
	}
	//�ϳ��������ϴ��³�ûˢ��
	else {
		float fee = calcPrice(nowLine->getMaxDistance());
		balance -= fee;
		nowLine = NULL;
		currentStop = "";
		if (di(line, currentStop) < 0) return -1;
		else return fee;
	}
}
//�������������۸�
float Card::calcPrice(float distance)
{
	if (distance < 0) return 0;

	float result = 0;

	//����ԭʼ�۸�
	if (distance <= 10)
		result = 2;
	else {
		result = (float)((int)((distance - 10) / 5));
		//����С�����
		if (distance - (int)distance > 0) result++;
	}

	//�����ۿ�
	if (type == Common) {
		result *= 0.5;
	}
	else if (type == Student) {
		result *= 0.25;
	}

	return result;

}
