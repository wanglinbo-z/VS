#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct ins
{
	string name;
	int c1;
	int c2;
	int c3;
	int c4;
	int c5;
	int c6;
	int c7;
};

void cj()
{
	int i = 0;
	ins a[20];

	for (;i <= 20;)
	{
		cout << "Name :";
		cin >> a[i].name;
		if (a[i].name == "0")
			break;
		cout << "Chinese:";
		cin >> a[i].c1;
		cout << "Math:";
		cin >> a[i].c2;
		cout << "English:";
		cin >> a[i].c3;
		cout << "Chemistry:";
		cin >> a[i].c4;
		cout << "Physics:";
		cin >> a[i].c5;
		cout << "History:";
		cin >> a[i].c6;
		cout << "Politics:";
		cin >> a[i].c7;
		i++;
	}
	
	i--;
	cout << "\nName\t" << "Ch`\t" << "Ma`\t" << "En`\t" << "Ch`\t" << "Ph`\t" << "Hi`\t" << "Po`\t\n";

	while (i >= 0)
	{
		cout << a[i].name << "\t" << a[i].c1 << "\t" << a[i].c2 << "\t" << a[i].c3 << "\t" << a[i].c4 << "\t" << a[i].c5 << "\t" << a[i].c6 << "\t" << a[i].c7 << "\t";
		cout.put('\n');
		i--;
	}

	cout.put('\n');

}

void tow()
{
	int i = 0;
	long long in = 0;
	bool yu = 0;
	const short t = 2;
	int a[32];

	cout << "\n\nPlease input unmber:";
	cin >> in;

	while (in > 0)
	{
		yu = in % t;
		in = in / t;
		a[i] = yu;
		i++;
	}
	
	i--;
	cout << "Out number:";

	while (i >= 0)
	{
		cout << a[i];
		i--;
	}
	cout.put('\n');
}

void choice()
{
    short* i = new short;
	bool t = true;


	while (t) {
		cout <<"0,退出\n"
			<<"1,二进制\n"
			<< "2,结构成绩表\n"
			<< "Please input number:";
		cin >> *i;
		if (*i == 0)
			break;

		switch (*i)
		{
		case 1:tow();
			break;
		case 2:cj();
			break;
		default:cout << "Error";
			break;
		}
	}

}

int main()
{
    choice();

	return 0;
}
