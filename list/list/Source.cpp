#include "list.h"
#include "dinlist.h"
#include<iostream>
using namespace std;
void main(){
	/*list l;
	int i = 0;
	while (i < 10)
	{
		l.add(2*i);
		i++;
	}
	cout << l.getsize() << endl;
	i = 0;
	while (i<10)
	{
		cout << l.getValue(i) << endl;
		i++;
	}*/
	dinlist l;

	int i = 0;
	while (i < 10)
	{
		l.add(2 * i);
		i++;
	}
	cout <<"size:"<< l.getSize() << endl;
	i = 0;
	while (i < 10)
	{
		cout << l.getValue(i) << endl;
		i++;
	}
	i = 0;
	l.del(1);
	l.del(1);
	
	int size = l.getSize();
	cout << size<<"________________________________\n";
	while (i < size )
	{
        cout << l.getValue(i) << endl;
		i++;
	}
	system("pause");
} 