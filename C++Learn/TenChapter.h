#pragma once
#ifndef __STOCK__H__
#define __STOCK__H__
#include<iostream>
#include <string>
class Stock
{
public:
	Stock();
	Stock(const std::string& company, long shares, double shar_value);
	~Stock();
	void acquire(const std::string& company, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show() const;
	const Stock topval(const Stock& s) const;
private:
	std::string company;
	long shars;
	double share_val;
	double total_val;
	void set_tot()
	{
	   total_val =  shars * share_val;
	}
	inline void set_tot2();
};



#endif // !__STOCK__H__
