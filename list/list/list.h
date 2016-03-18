#pragma once
#include "link.h"
class list : public link
{
protected: link * first;
		   int size;
private:   link * last;

public:
	list() {
		last = 0;
		size = 0;
	};
	~list() {
		delete first;
	};
	void add(int _mem)
	{
		link * tmp = new link(_mem);

		if (size == 0) {
			first = tmp;
			last = tmp;
		}
		else {
			last->SetNext(tmp);
			last = tmp;
		}
		size++;
	};
	/*list(const int & tmp) {
		element* cur = tmp.last;
		while (cur != 0)
		{
			this->Push(cur->Getmem());
			cur = cur->Getnext();
		}
	}
	int & operator=(const int & tmp) {

		last = 0;
		size = 0;
		last = 0;
		element *cur = tmp.last;
		while (cur != 0)
		{
			Push(cur->Getmem());
			cur = cur->Getnext();
		}
		*/
	int getValue(int index) {
		if (index <= size && index >= 0) {
			link * tmp = first;
			for (size_t i = 0; i < index; i++)
			{
				tmp = tmp->GetNext();
			}
			return (tmp->GetMem());
		}

	};
	int getsize() {
		return size;
	};
};

