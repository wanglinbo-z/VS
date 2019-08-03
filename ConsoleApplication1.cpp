#include <iostream>

using namespace std;

int main()
{
		int e = 0;
		long long a = 0;
		int c = 0;
		int d[32];

		while (e <= 0)
		{
			cout << endl << "请输入需要转换的数字：";
			cin >> a;
			c = 0;
			if (a >= 9223372036854775808)
			{
				cout << endl << "数据错误" << endl;
			}
			else
			{
				if (a == 0)
				{
					cout << "再见";
					e = 1;
				}

				else
				{
					for (; a > 0;)
					{
						d[c] = a % 2;
						a = a / 2;
						c++;
					}

					c--;
					cout << "结果：";

					while (c >= 0)
					{
						cout << d[c];
						c--;
					}
				}
			}
			while (c > 0)
			{
				d[c] = 0;
				c--;
			}
		}
		return 0;
	
}
