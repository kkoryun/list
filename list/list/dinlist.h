#pragma once
#include "list.h"
class dinlist : public list
{
public:

	void del(int index) {
		link * tmp  = getLink(index    );
		link * pred = getLink(index - 1);
		link * sled = getLink(index + 1);
		pred->SetNext(sled);
		tmp->SetNext(0);
		delete tmp;
	};
	void ins(link * _tmpins, int after) {
		link * tmp = getLink(after);
		tmp->SetNext(_tmpins);
		tmp = getLink(after + 1);
		_tmpins->SetNext(tmp);
	};

private: link * getLink(int index) {
	if (index <= size && index >= 0) {
		link * tmp = first;
		for (size_t i = 0; i < index; i++)
		{
			tmp = tmp->GetNext();
		}
		return tmp;
	}
}



};
