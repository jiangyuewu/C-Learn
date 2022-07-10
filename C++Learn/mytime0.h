#pragma once
#ifndef _MYTIME0_H_
#define _MYTIME0_H_

class Time
{
public:
	Time();
	Time(int h, int m = 0);

	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time& t) const;
	void show() const;
	/*friend Time operator*(double mult,const Time)*/


	~Time();

private:
	int hours;
	int mins;

};





#endif // !_MYTIME0_H_
