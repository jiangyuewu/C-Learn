#pragma once
#ifndef  STACK_H_
#define STACK_H_

typedef unsigned long Itme;

class Stack
{
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(Itme& item);
	bool pop(Itme& item);


	~Stack();


private:
	enum 
	{
		MAX = 10
	};
	Itme itemes[MAX];
	int top;
};
































#endif // ! STACK_H_
