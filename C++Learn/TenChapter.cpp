#include "TenChapter.h"

Stock::Stock()
{

}

Stock::Stock(const std::string & company,long shares,double shar_value)
{
	this->company = company;
	this->shars = shares;
	this->share_val = shar_value;
	set_tot();
}

Stock::~Stock()
{
	std::cout << "Bye: " << company <<std::endl;
}

void Stock::acquire(const std::string& company, long n, double pr)
{
	this->company = company;
	if (n<0)
	{


		std::cout << "Number of shares can't be nagative " << company << "shares set to 0.\n ";
		this->shars = 0;
	}
	else
	{
		this->shars = n;
	}
	this->share_val = pr;
	set_tot();

}

void Stock::buy(long num, double price)
{
	if (num<0)
	{
		std::cout << "Number of shares can't be nagative .\n ";

	}
	else
	{
		this->shars += num;
		this->share_val = price;
		this->set_tot();
	}


}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares can't be nagative .\n ";
	}
	else if (num > this->shars)
	{
		std::cout << "Number of shares can't be nagative .\n ";

	}
	else
	{

		this->shars -= num;
		this->share_val = price;
		this->set_tot();

	}
	

}

void Stock::update(double price)
{
	this->share_val = price;
	this->set_tot();

}

void Stock::show() const
{

	std::cout << "company: " << this->company << std::endl;

	std::cout << "shares: " << this->shars << std::endl;

	std::cout << "Share price: " << this->share_val << std::endl;

	std::cout << "total : " << this->total_val << std::endl;

}

const Stock Stock::topval(const Stock& s) const
{
	if (s.total_val > total_val)
	{
		return s;
	}
	else
	{
		return *this;
	}
	
}



inline void Stock::set_tot2()
{
	printf("inline");
}
	