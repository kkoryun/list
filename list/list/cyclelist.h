#pragma once
#include "dinlist.h"
class cyclelist : public dinlist
{
public:
	cyclelist() {
     
		first->SetNext = first;
	}
};

