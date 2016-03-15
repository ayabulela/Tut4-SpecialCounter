
#include<iostream>
#include "UpDownCounter.h"
#include<windows.h>
#include<stdlib.h>
using namespace std;

UpDownCounter::UpDownCounter(int starting, int stoppage)
{
	start = starting;
	stop = stoppage;
}


UpDownCounter::~UpDownCounter()
{
}

int UpDownCounter::getStart()
{
	return start;
}
void UpDownCounter::setStart(int start)
{
	this->start = start;
}
int UpDownCounter::getStop()
{
	return stop;
}
void UpDownCounter::setStop(int stop)
{
	this->stop = stop;
}
void UpDownCounter::increment(int start, int stop)
{
	int i;
	for (i = start; i <= stop; i += 2)
	{
		Sleep(1000);
		cout << i << endl;
	}
}
void UpDownCounter::decrement(int start, int stop)
{
	int i;
	for (i = start; i >= stop; i -= 3)
	{
		cout << i << endl;
	}
}