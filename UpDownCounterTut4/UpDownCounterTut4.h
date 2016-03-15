#pragma once
#ifndef UpDownCounter_H
#define UpDownCounter_H
class UpDownCounter
{
private:
	int start;                                              //starting time
	int stop;                                               //stop time
public:
	UpDownCounter(int initial = 0, int stoppage = 255);
	~UpDownCounter();
	void setStart(int initial);
	void setStop(int stoppage);
	int getStart();
	int getStop();
	void increment(int start, int stop);
	void decrement(int start, int stop);
};
#endif