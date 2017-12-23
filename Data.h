#pragma once
#ifndef DATA_H
#define DATA_H

#include <string>

class Data {
public:
	Data();
	~Data();
	virtual std::string getType();
	virtual int getPriority();
	void setPriority(int n);
	virtual double getValue();

	virtual bool operator==(const Data &D) const; //virtual ó���� �ϸ鼭 ���� �����÷� ����
	bool operator!=(const Data &D) const; //Data Ÿ�԰��� ���迬���� �ϱ� ���� �����ε�

protected:
	std::string unitType;
	int priority;
	double value;
};

#endif