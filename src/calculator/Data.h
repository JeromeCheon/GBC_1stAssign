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

	virtual bool operator==(const Data &D) const; //virtual 처리를 하면서 스택 오버플로 방지
	bool operator!=(const Data &D) const; //Data 타입간의 관계연산을 하기 위한 오버로딩

protected:
	std::string unitType;
	int priority;
	double value;
};

#endif
