#pragma once
class link
{
private: 
	long int mem;
    link * next;
public:
	link(int _mem = 0) {
		mem = _mem;
		next = 0;
	};
	link(const link & tmp) {
		mem = tmp.mem;
		next = 0;
	};
	link & operator=(const link & tmp) {
		mem = tmp.mem;
		return *this;
	}
	int  GetMem() { return mem; };
	void SetMem(int value) { mem = value; };
	link * GetNext() { return next; }
	void   SetNext(link * tmp) { next = tmp; }
	~link() { next = 0; }
};

