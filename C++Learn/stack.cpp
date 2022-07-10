#include"stack.h"


Stack::Stack()
{
	this->top = 0;
}

bool Stack::isempty() const

{
	return this->top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(Itme& item)
{
	if (top<MAX)
	{
		this->itemes[top++] = item;
		return true;
	}
	else
	{
		return false;

	}
	
}

bool Stack::pop(Itme& item)
{
	if (this->top > 0)
	{
		item = this->itemes[--this->top];
		return true;
	}
	else
	{
		return false;
	}
	
}

Stack::~Stack()
{
}