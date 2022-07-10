#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<array>


using namespace std;
using  std::cout;
using std::cin;
using std::endl;

int test01() 
{
	using namespace std;
	char charr1[20] = "qwer";
	char charr2[20];
	strcpy_s(charr2, charr1);
	string str1 = "penguin";
	string str2, str3;
	cout << "You can assign one string object to another : s1 = s2" << endl;
	//str2 = str1;
	

	str1 += str2;
	cout << "str1 += str2  "<<str1<<" str2 = "<<charr2<<"lenth of charr2 :"<<sizeof(charr2)<<endl;

	return 0;

}

struct inflatable
{
	char name[20];
	float volume;
	double price;

};


int test02() 
{

	using namespace std;
	inflatable guest =
	{
		"GGG",
		1.88,
		29.99
	};
	inflatable pal =
	{

		"AAA",
		3.12,
		32.99

	};
	inflatable gifts[2] =
	{
		{"AAA",
		3.12,
		32.99},
		{"GGG",
		1.88,
		29.99}
	};


	cout << "G G name = " <<gifts[0].name << "A A name = " << gifts[1].name << endl;
	
	return 0;
}

int test3()
{

	union one2all
	{
		char ch;
		int n;
	};
	one2all num;
	std::cout << sizeof(num) << std::endl;  //4个字节

	num.ch = 'A';

	std::cout << int(num.n) << std::endl;

	return 0;

}

int test04()
{
	

	double cups = 4.5;
	double* donuts = &cups;
	int nights = 1001;
	int* pt = new int;
	*pt = 1001;
	std::cout << "nights  value  " << nights << std::endl;
	std::cout << "nights  location  " << &nights << std::endl;
	std::cout << "int  value  " << *pt << std::endl;
	std::cout << "nights  location  " << &*pt << std::endl;

	double* pd = new double;
	*pd = 10000001.0;
	std::cout << "nights  value  " << *pd << std::endl;
	std::cout << "nights  location  " << &pd << std::endl;
	std::cout << "nights  location  " << sizeof(pt)<< std::endl;
	std::cout << "nights  location  " << sizeof(*pt) << std::endl;
	std::cout << "nights  location  " << sizeof(pd) << std::endl;
	std::cout << "nights  location  " << sizeof(*pd) << std::endl;

	return 0;
}

void test05()
{

	double* p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	std::cout << "nights  location  " << p3[1] << std::endl;
	p3 = p3 + 1;
	p3 = p3 - 1;
	std::cout << "nights  location  " << p3[0] << std::endl;
	delete [] p3;
	double wages[3] = { 100.0,200.0,3000.0 };
	short stack[3] = { 3,2,1 };
	double* pw = wages;
	short* ps = &stack[0];
	std::cout << "ps  " << ps[2] << std::endl;
	std::cout << "*ps  " << *(stack+1) << std::endl;
	ps = ps + 1;
	std::cout << "ps  " << ps << std::endl;
	std::cout << "*ps  " << *ps << std::endl;
	std::cout << "sizeof(wages):  " << sizeof(wages) << std::endl;
	std::cout << "sizeof(pw):  " << sizeof(pw) << std::endl;
}
void test06()
{

	using namespace std;
	char animal[20] = "bear";
	const char* bird = "wren";
	//char* ps;
	std::cout << "animal):  " << animal << std::endl;
	std::cout << "bird:  " << bird << std::endl;
	std::cout << "Enter animal" << std::endl;
	cin >> animal;
	//cout << ps;




}

#include<set>



int secondHighest(std::string s)
{
	std::set<int> a;
	for (auto c : s)
	{
		if (isdigit(c) != 0)
			a.insert(c - '0');
	}
	if (a.size() < 2)
		return -1;

	auto it = a.rbegin();
	it++;
	return *it;
}

void test07()

{
	struct inflatable
	{
		char name[20];
		float volume;
		double prince;
	};
	inflatable* ps = new inflatable;
	std::cout << "请输入name;"<< std::endl;
	std::cin.get(ps->name, 20);
	std::cout << "请输入volume;" << std::endl;
	std::cin >> (*ps).volume;
	delete ps;

}
#include<cstring>
char  *test08()
{
	char tmp[80];
	std::cout << "请输入name;" << std::endl;
	std::cin >> tmp;
	char* pn = new char[strlen(tmp) + 1];
#pragma warning(suppress : 4996)
	strcpy(pn, tmp);


	return pn;
}

struct years
{
	int year;

};


void test09() 
{
	years s01, s02, s03;
	s01.year = 1998;
	years* pa = &s02;
	pa->year = 1999;

	years year_arr[3];
	year_arr[0].year = 2003;

	const years* arp[3] = { &s01,&s02,&s03 };

	const years **ppa = arp;
	auto ppb = arp;
	(*(ppb + 1));
	

	std::cout << (*(ppb + 1))->year << std::endl;


}
void test10() 
{
	double a[4] = { 1.2,2.3,3.4,4.8 };
	vector<double> a2(4);

	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;
	
	array<double, 4> a3 = { 3.14,2.72,1.62,1.41 };
	array<double, 4> a4;
	a4 = a3;
	std::cout << " a[2]= " << a[2] << "  &a[2]= " << &a[2]<< std::endl;
	std::cout << a2[2] << &a2[2] << std::endl;
	std::cout << a3[2] << &a3[2] << std::endl;
	std::cout << a4[2] << &a4[2] << std::endl;
	a[-2] = 20.2;
	std::cout << a[-2] << &a[-2] << std::endl;
}

#include<algorithm>


int maxAscendingSum(vector<int>& nums) {
	vector<int>sum;
	for (int i = 1; i < (nums.size())-1; i++)
	{
		if (nums[i - 1] < nums[i] && nums[i] < nums[i + 1])
		{
			int sum1 = nums[i - 1] + nums[i] + nums[i + 1];
			sum.push_back(sum1);
		}

	}
	sort(sum.rbegin(), sum.rend());

	return sum[0];

}
void test11()
{
	const int arsize = 16;
	long long f[arsize];
	f[1] = f[0] = 1ll;
	for (size_t i = 2; i < arsize; i++)
	{
		f[i] = i * f[i - 1];
	}
	for (size_t i = 0; i < arsize; i++)
	{
		std::cout << i << "! = " << f[i] << std::endl;

	}


}
void test12()
{
	double arr[5] = { 21.2,32.8,23.4,45.2,37.4 };
	double* pt = arr;
	string word = "?ate";
	for (char ch = 'a'; word!="mate"; ch++)
	{
		cout << word << endl;
		word[0] = ch;

	}
	std::cout <<word << std::endl;
	



}
#include<ctime>
void test13()
{
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "start\a\n";
	clock_t start = clock();
	



	



}

const int Cities = 5;
const int Years = 4;

void test20()
{
	const char* cities[Cities] =
	{
		"eww",
		"dwd",
		"dea",
		"dff",
		"dwd",

	};
	int maxtem[Years][Cities] =
	{
		{43,3,3,3,3},
		{3,3,3,3,3},
		{5,5,667,7,7},
		{45,5,56,6,6}

	};

	for (size_t i = 0; i < Cities; i++)
	{
		cout << cities[i] << endl;
		for (size_t j = 0; j < Years; j++)
		{

			cout << maxtem[j][i]<<"\t";


		}
		cout << endl;
	}






}
void test61()
{
	int space = 0;
	int total = 0;
	char ch;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')
			++space;
		++total;
		cin.get(ch);
	}

	cout << "total " << total << "space  " << space << endl;



}
 


void test16()
{
	int a, b,c;
	cout << "Enter 2 int:" << endl;
	cin >> a >> b;
	c = a > b ? a : b;
	cout << "Max = " << c << endl;
}

enum Color
{
	red,orange,yellow,green,blue,violent,indigo

};



void showmanu()
{

	cout << "Please enter 1,2,3,4,5,as your choice" << endl;
	
}

void report()
{

	cout << "report\n";

}

void comfort()
{


	cout << "comfort\n";

}

void test17()
{

	showmanu();
	int choice;
	cin >> choice;
	while (choice != 5)
	{
		switch (choice)
		{
		case red:cout << "Warning!!! red\a\n";
			break;
		case orange:report();
			break;
		case yellow:cout << "The boss was in all day.orange\n";
			break;
		case indigo:comfort();
			break;
		default:cout << "That's not a choice.\n";
			break;
		}
		showmanu();
		cin >> choice;

	}
	cout << "Bey\n";

	return;
}
#include<cstdio>
#include<fstream>   //ofstream  ifstream
void test18()
{

	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;
	outFile.open("carinfo.txt");


	cout << "shuruqichepaizi" << endl;
	cin.getline(automobile, 50);
	cout << "year" << endl;
	cin >> year;
	cout << "a_price" << endl;
	cin >> a_price;
	d_price = a_price * 0.913;
	
	

	cout << "shuruqichepaizi: "<< automobile << endl;
	cout << "year: " << year << endl;
	cout << "a_price: " << a_price <<endl;
	cout << "d_price: " << d_price << endl;

	outFile << "shuruqichepaizi: " << automobile << endl;
	outFile << "year: " << year << endl;
	outFile << "a_price: " << a_price << endl;
	outFile << "d_price: " << d_price << endl;

	outFile.close();

	ifstream inFile;
	inFile.open("carinfo.txt");
	if (!inFile.is_open())
	{
		cout << "Open failed!" << endl;
		exit(EXIT_FAILURE);

	}
	double value =0.0;
	double sum = 0.0;
	int count = 0;
	inFile >> value;
	if (inFile.good())
	{
		++count;
		sum += value;
		inFile >> value;
	}

	if (inFile.eof())
	{
		cout << "end of eof\n";
	}
	else if (inFile.fail())
	{
		cout << "bufuhe" << endl;
	}
	else
	{
		cout << "unknow reason" << endl;
	}
	if (count==0)
	{
		cout << "nodata" << endl;
	}
	else
	{
		cout<<"Item: "<<count<<endl;
		cout << "sum: " << sum << endl;


	}

	inFile.close();

}

int sum_arr(int arr[],int n)
{

	cout <<  arr << endl;
	cout << sizeof arr << endl;
	int sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		sum += arr[i];



	}
	return sum;

}


void test19()
{
	const int ArSize = 8;
	int cookies[ArSize] = { 1,2,3,4,5,6,7,8 };
	int sum = sum_arr(cookies, ArSize);

	cout << sum << endl;



}

#include<stdio.h>
#include<string.h>
int main_1(void) {
	int n;
	char y[10] = "ntse";
	char* x = y;
	n = strlen(x);
	*x = x[n];
	x++;
	printf("x=%s,", x);
	printf("y=%s\n", y);
	return 0;
}
const int Max = 5;



int  fill_arr(double arr[], int limit)
{
	double temp;
	int	i = 0;
	for (size_t i = 0; i < Max; i++)
	{

		cout << "enter value " << i + 1 << ":";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get()!= '\n')
			{
				continue;
			}

			cout << "bad input" <<endl;
			break;
		}
		else if (temp<0)
		{
			break;
		}
		else
		{
			arr[i] = temp;
		}



	}

	return i;
}
void test(void)
{
	double pro[Max];
	fill_arr(pro, Max);
	return;


}



void testconst()
{

	int n = 10;
	int *const pt = &n;
	int m = 20;
	cout << "1):n = " << n << endl;

	//pt = &m;
	cout << "2):n = " << n << endl;


}
unsigned int  c_in_str(const char* str, char ch)
{

	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
		{
			count++;
		}
		str++;

	}

	return count;

}

char* build(char ch,int n)
{
	char *ptr = new char[n + 1];
	ptr[n] = '\0';
	for (size_t i = 0; i < n; i++)
	{

		ptr[i] = ch;


	}

	return ptr;
}




void zifuchuan()
{

	char mm[15] = "minimum";
	
	const char * wail = "ululate";

	unsigned int ms = 	c_in_str(mm,'m');
	unsigned int  Us = c_in_str(wail, 'u');

	cout << "  " << ms << "  " << Us << endl;
	char ch;
	int times;
	cout << "Enter a char" << endl;

	cin >> ch;

	cout << "Enter an int" << endl;

	cin >> times;

	char* ps = build(ch, times);

	cout << ps << endl;
	delete []ps;
	return;




}
struct traval_time
{
	int hours;
	int mins;

};

const int Mins_per_hour = 60;
traval_time sum(traval_time& day1, traval_time& day2)
{
	traval_time sum_time;
	sum_time.mins = day1.mins + day2.mins;
	if (sum_time.mins >= Mins_per_hour)
	{
		sum_time.mins = sum_time.mins % Mins_per_hour;
		sum_time.hours = day1.hours + day2.hours + 1;
	}
	else
	{

		sum_time.hours = day1.hours + day2.hours;

	}
	
	
	return sum_time;
}

void testjiegouti()
{
	traval_time day1 = { 5,45 };
	traval_time day2 = { 4,55 };
	traval_time trip = sum(day1, day2);
	cout << "hours: " << trip.hours << "mins: " << trip.mins << endl;

}
#include<cmath>
#include<iostream>
struct polar
{
	double length;
	double angle;
};

struct rect
{
	double x;
	double y;

};

polar r2p(const rect *rec)
{
	polar res;

	res.length = sqrt(rec->x * rec->x + rec->y * rec->y);

	res.angle = atan2(rec->y, rec->x)*57.29577951;
	
	return res;

}



void testzuobian()
{
	using namespace std;
	rect rplace;
	polar pplace;
	cout <<"Enter x and y" << endl;

	while (cin >> rplace.x >> rplace.y)
	{
		pplace = r2p(&rplace);
	}


	cout << "angle: " << pplace.angle << "length: " << pplace.length << endl;

}


void  display(const string sa[], int n)
{


	for (size_t i = 0; i < 5; i++)
	{

		cout << sa[i];
	

	}




}

void stringtest()
{

	cout << "Enter 5 food"<<endl;

	string list[5];

	for (size_t i = 0; i < 5; i++)
	{

		cout << i + 1 << ": ";
		getline(cin, list[i]);



	}
	cout << "your list :";
	display(list, 5);

}
#include<array>
const int Seas = 4;
array<string, Seas> seasons = { "Sp","Su","Fall","Win" };
void fill(array<double,Seas> *pa)
{
	for (size_t i = 0; i < Seas; i++)
	{

		cout << "Enter  " << seasons[i] << "  exp:";
		cin >> (*pa) [i] ; //*pa[i]



	}


}


void showimage(array<double, Seas> *exp)
{
	double total = 0.0;
	for (size_t i = 0; i < Seas; i++)
	{

		cout << seasons[i] << " : " << (*exp)[i] << endl;
		total += (*exp)[i];

	}
	
	cout << "total: " << total << endl;

}

void ararrytest()
{
	array<double, Seas> exp;
	fill(&exp);

	showimage(&exp);
}


void countDown(int n)
{
	cout << "Conuting Down..." << n << "N add : "<<&n<<endl;
	if (n>0)
	{
		countDown(n - 1);
	
	}

	cout << n << " :zhihou"<<  "  N-down add : " << &n <<endl;


}



void digiu()
{

	countDown(4);

	return;
}


//定义标尺
const int Len = 66;
const int Divs = 6;
void subdivide(char arr[],int hight,int low,int levels)
{
	if (levels == 0)
	{
		return;
	}
	int mid = (low + hight) / 2;
	arr[mid] = '|';
	subdivide(arr, low, mid,levels-1);
	subdivide(arr, hight, mid,levels-1);
}



void ruler()
{
	char ruler[Len];
	for (size_t i = 0; i < Len; i++)
	{
		ruler[i] = ' ';



	}
	int min = 0;
	int max = Len - 2;
	ruler[Len - 1] = '\0';
	ruler[min] = ruler[max] = '|';
	cout << ruler << endl;
	for (size_t i = 1; i <= Divs; i++)
	{
		subdivide(ruler, min, max,i);
		cout << ruler << endl;
	}
	
	


}

///函数指针
double Rick(int lines)
{

	return lines * 0.05;

}

double Jack(int lines)
{

	return lines * 0.5;

}



void estimate(int lines,double (*pf)(int))
{
	cout << lines << "lines code will take " << (*pf)(lines) << " hours" << endl;

}


void hanshuozhizhen()
{
	int code;
	cout << "How many lines of your code do you need!" << endl;
	cin >> code;
	cout << "How is Rick's estimate:" << endl;
	estimate(code,Rick);
	estimate(code, Jack);

	return;
}


//深入探讨函数指针
const double *f1(const double* ar,int n)
{
	return ar;


}
const double* f2(const double* ar,int n)
{
	return ar+1;


}
const double* f3(const double* ar,int n)
{
	return ar + 2;


}


void zhizhen()
{
	double av[3] = { 1.22,2.3234,1.233 };
	//part1: 
	//pointer to a function
	const double *(*p1)(const double*, int) = f1;
	auto p2 = f2;
	cout << "Part2 : Address Value " << endl;
	cout << (*p1)(av, 3) << " : " << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << " : " << *p2(av, 3) << endl;
	//part2 
	//pa is a array of pointers
	const double* (*pa[3])(const double*, int) = {f1,f2,f3};
	auto pb = pa;
	for (size_t i = 0; i < 3; i++)
	{
		cout << "Part 2 : Address Value " << endl;
		cout<< pa[i](av, 3)<< *pa[i](av, 3)<< endl;

	}
	for (size_t i = 0; i < 3; i++)
	{
		cout << "Part 2 :Pb  Address Value " << endl;
		cout << pb[i](av, 3) << *pb[i](av, 3) << endl;

	}
	//part3 
	const double *(*(*pd)[3])(const double*,int) = &pa;
	auto pc = &pa;

	cout << "Part 3 :Pc  Address Value " << endl;
	cout << (*pc)[0](av, 3) << (*pc)[1](av, 3) << endl;


	return;
}


//第八章 函数探幽
// 8.1 内联函数

inline double square(double x) { return x * x; };


void neilian()
{

	double a, b;
	double c = 13.0;
	a = square(5.0);
	b = square(4.5 + 7.5);
	cout << "a =  " << a << ", b = " << b<<endl;
	cout << " c = " << c << endl;
	cout << " c_squaer = " <<square( c) << endl;


	return;

}

// 8.2 引用变量



void swap(int& a, int& b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;



}

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;



}
void swapv(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;



}
double cube(double a)
{
	return a * a * a;

}


struct free_th
{
	string name;
	int made;
	int attemps;
	float per;


};

free_th & set_pc(free_th &ft)
{  
	if (ft.attemps != 0)
	{
		ft.per = ft.made / float(ft.attemps);
	}

	else
	{
		ft.attemps = 0;
	}

	return ft;
}


string version(const string& str1, const string& str2)
{
	string temp;
	temp = str2 + str1 + str2;
	return temp;
	
}

string &version2(string &str1,const string &str2)
{

	str1 = str2 + str1 + str2;
	return str1;

}

string&version3(string& str1, const string& str2)
{
	string temp;
	temp = str2 + str1 + str2;
	return temp;

}


void yinyong()
{

	int rats = 10;
	int& rates = rats;
	rats++;
	//cout << "rats: " << rats << &rats << "\n rates:  " << rates << &rates << endl;
	int bun = 50;
	rates = bun; //赋值语句操作，操作的是一块地址
	//cout << rats << &rats << endl;
	//cout << &bun << endl;
	int wallet1 = 300;
	int wallet2 = 350;
	/*cout << "wallet1: " << wallet1 << endl;
	cout << "wallet2: " << wallet2 << endl;*/
	swap(wallet1, wallet2);
	/*cout << "wallet1: " << wallet1 << endl;
	cout << "wallet2: " << wallet2 << endl;*/
	swap(&wallet1, &wallet2);

	/*cout << "wallet1: " << wallet1 << endl;
	cout << "wallet2: " << wallet2 << endl;*/
	swapv(wallet1, wallet2);

	/*cout << "wallet1: " << wallet1 << endl;
	cout << "wallet2: " << wallet2 << endl;*/
	double x = 3.0;
	//cout << cube(x) << endl;
	free_th one = { "Rick",13,14 };
	free_th two = { "Rick",13,14 };
	free_th three = { "Rick",13,14 };
	free_th four = { "Rick",13,14 };
	free_th team = { "Rose",0,0 };

	set_pc(one);

	//cout << "Name :" << one.name << "Per : " << one.per << endl;
	string input;

	cout << "Enter a string: ";
	getline(cin, input);
	auto copy = input;
	cout << "Your input:" << input << endl;
	string result = version(input, "**");
	cout << "Your string enhance: " << result << endl;
	cout << "Your origin: " << input << endl;

	cout << "_________________________\n";

	string result2 = version2(input, "###");

	cout << "Your string enhance: " << result2 << endl;
	cout << "Your origin: " << input << endl;

	cout << "_________________________\n";

	string result3 = version3(input, "&&&");
	input = copy;
	cout << "Your string enhance: " << result3 << endl;
	cout << "Your origin: " << input << endl;

	
}
void file_it(ostream& os, double fo, const double fe[],int n)
{

	os << "Focal lenght" << fo << endl;

	os << "ep: " << endl;
	for (size_t i = 0; i < n; i++)
	{
		os<<  "" << endl;
	}
}


void wenjian()
{
	const int limit = 5;
	fstream fout;
	const char* fn = "ep.txt";
	fout.open(fn);
	if (!fout.is_open())
	{
		cout << "open fail" << endl;

	}
	double obj;
	cout<<"shuru wuju" << endl;
	cin >> obj;

	double ep[limit];
	for (size_t i = 0; i < limit; i++)
	{
		cout << " es #" << i + 1 << endl;
		cin >> ep[i];

	}
	file_it(cout,obj,ep,limit);
	file_it(fout,obj,ep,limit);


	return;

}

char* left(const char* str, int n = 1)
{
	char *p= new char[n + 1];

	
	if (n<0)
	{
		n = 0;
	}

	for (size_t i = 0; i < n && str[i]; i++)
	{
		p[i] = str[i];
	}

	int i = {};

	while (i < n )
	{
		p[i++] = '\0';
	}

	return p;
	

}

//函数设置默认值
const int Arsize = 80;
void fxfeault()
{
	char sample[Arsize];
	cout << "Enter a string " << endl;
	cin.get(sample, Arsize);

	char* ps = left(sample, 4);
	cout << "———————————— ："<<ps << endl;
	delete  [] ps;
	ps = left(sample);
	cout << "_________________________ :"<<ps << endl;
	delete[] ps;
	return;

}






int main1()
{
	std::string str = "swe2334423";
	//secondHighest(str);

	//void test07();
	/*char* name;
	name = test08();
	cout << name << "at" << (int*)name << endl;*/
	//test10();
	vector<int> a2(4);

	a2[0] = 1;
	a2[1] = 5; 
	a2[2] = 7;
	a2[3] = 9;

	
	//main_1();


	/*delete[] name;*/

	//testconst();
	//testjiegouti();
	//zifuchuan();
	//testzuobian();
	//stringtest();
	//ararrytest();
	//digiu();
	//ruler();
	//hanshuozhizhen();
	//zhizhen();
	//neilian();
	//yinyong();
	fxfeault();
	return 0;

}






template <typename T>
void Swap(T &a,T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
void Swap(T a[], T b[], int n)
{

	T temp;
	for (size_t i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}


}



void show(int arr[], int n)
{

	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i]<<"-";
	}

	cout << endl;

}


void moban()
{
	const int length = 8;
	int i = 10;
	int j = 20;
	cout << "i, j  = " << i << " " << j << endl;
	Swap(i, j);
	cout << "jiaohuanhou i, j  = " << i << " " << j << endl;
	double x = 10.3;
	double y = 20.5;
	cout << "i, j  = " << i << " " << j << endl;
	Swap(x, y);
	cout << "jiaohuanhou x, y  = " << x << " " << y << endl;

	int dl[length] = {7,3,0,1,1,12,1,7};
	int d2[length] = {0,7,0,1,1,12,1,2};
	show(dl, length);
	show(d2, length);
	Swap(dl, d2,length);
	show(dl, length);
	show(d2, length);
	


}

template <typename T>
void ShowArray(T arr[],int n)
{
	cout << "template A" << endl;
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << "-";
	}

	cout << endl;
}

template <typename T>
void ShowArray(T *arr[], int n)
{ 
	cout << "template A" << endl;
	for (size_t i = 0; i < n; i++)
	{
		cout << *arr[i] << "-";
	}

	cout << endl;
}

struct debts
{
	char name[50];
	double amount;


};


void chongzaimoban()
{

	int things[6] = { 13,31,103,301,310,130 };
	debts mr[3] =
	{
		{"R",2400.00},
		{"J",1300.00},
		{"ROSE",1800.00},
	};

	double* pd[3];
	for (size_t i = 0; i < 3; i++)
	{
		
		pd[i] = &mr[i].amount;

	}


	ShowArray(things, 6);
	ShowArray(pd, 3);



	return;

}
template<class T>
T lasse(T a, T b)
{
	printf("muban:\n");
	return a < b ? a : b;
 
}


int lasse(int a, int b)
{
	a = a < 0 ? -a : a;
	b = b < 0 ? -b : b;
	printf("fei mu ban:\n");
	return a < b ? a : b;

}



void _15cpp()
{

	int m = 20;
	int n = 30;
	double x = 20.5;
	double y = 25.9;
	int c = lasse(m,n );
	cout << "C = " << c << endl;
	cout << "C = " << lasse(x, y) << endl;
	
	cout << "C = " << lasse<>(x, y) << endl;

	cout << "C = " << lasse<int>(x ,y) << endl;

	return;
}


void _oil()
{

	int T = 31;

	int years = 2011;

	cout << "in _oil() T: " << T << "  years： " << years << endl;
	cout << "in _oil() &T: " << &T << "  &years： " << &years << endl;
	return;

}

void _9_1()
{
	int T = 31;

	int years = 2011;

	cout << " _9_1() T: " << T << "  years： " << years << endl;
	cout << " _9_1() &T: " << &T << "  &years： " << &years << endl;
	_oil();
	return;


}


using namespace std;
int tom = 3;
int dick = 30;
static int harry = 300;

const int ARSize = 10;

void strcount(const char *str)
{

	static int total = 0;
	int count = 0;

	while (*str ++ )
	{
		count++;
	}

	total += count;
	cout << "count " << count << endl;
	cout << "total " << total << endl;

}

int main3()
{
	   

		//using namespace std;
		//cout << "main() addr:" << endl;
		//cout << "&tom：" << &tom << "&dick:  " << &dick << " &harry:  " << &harry << endl;
		////return 0;

	char input[ARSize];
	char next;
	cout << "Enter :" << endl;
	cin.get(input, ARSize);
	while (cin)
	{

		cin.get(next);
		while (next != '\n')
		{
			cin.get(next);
		}
		strcount(input);
		cout << "Enter next line" << endl;
		cin.get(input, ARSize);

	}

	cout << "Bye !" << endl;
	
	//_9_1();
	return 0;
}

#include<new>

const int BUF = 512;
const int N = 5;
char BUFFER[BUF];

#include"namespace.h"

int main1()
{

	double * pd1, * pd2;
	cout << "Calling new and placement new" << endl;
	pd1 = new double[N];
	pd2 = new(BUFFER) double[N];
	for (size_t i = 0; i < N; i++)
	{
		pd2[i] = pd1[i] = 1000 + 20.0 * i;
	}
	cout << "pd1 = " << pd1 << ", buffer = " << (void*)BUFFER << endl;
	for (size_t i = 0; i < N; i++)
	{
		cout << pd1[i] << "at  " << &pd1[i] << ";";
		cout << pd2[i] << "at  " << &pd2[i] << endl;

	}
	cout <<  "\nCalling new and placement new--------2" << endl;

	double* pd3,*pd4;
	pd3 = new double[N];
	pd4 = new(BUFFER) double[N];

	for (size_t i = 0; i < N; i++)
	{
		pd4[i] = pd3[i] = 1000 + 40.0 * i;
	}
	cout << "pd1 = " << pd3 << ", buffer = " << (void*)BUFFER << endl;

	Pers::Person Jodan;
	debts::Debets de;
	


	return 0;
}

