#include"mytime3.h"
#include <iostream>
Time::Time()
{
	hours = mins = 0;

}

Time::Time(int h, int m)
{
	this->hours = h;
	this->mins = m;

}

void Time::AddMin(int m)
{
	this->mins += m;
	hours += this->mins / 60;
	this->mins %= 60;

}

void Time::AddHr(int h)
{
	this->hours += h;
}

void Time::Reset(int h, int m)
{
	this->hours = h;
	this->mins = m;
}

Time Time::operator+(const Time& t) const
{
	Time sum;
	sum.mins = this->mins + t.mins;
	sum.hours = this->hours + t.hours + sum.mins / 60;
	sum.mins %= 60;
	return sum;
}

//void Time::show() const
//{
//
//	std::cout << this->hours << "  hours  " << this->mins << "  mins  " << std::endl;
//
//}



Time::~Time()
{
}

std::ostream& operator <<(std::ostream& os, const Time& t)
{

	

}