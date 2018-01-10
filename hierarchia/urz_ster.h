#pragma once
#include <iostream>
using namespace std;
class urz_ster
{
	friend class urz_ster_zdal;
protected:
	int x;
public:
	virtual void funkcja();
	urz_ster();
	~urz_ster();
};

