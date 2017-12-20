#ifndef DATA_H
#define DATA_H

class Data{
protected:
	string unitType; // Will be used in Op class such as Plus after
public:
	virtual string getType();  // to use to get type in Op and RawElement subclass
};
#endif
