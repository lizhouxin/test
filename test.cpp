// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char a[10] = {};
	char b[10] = "12";

	cin >> a;

	if(!strcmp(a,b))
	{
		cout << "oktwo" << endl;
	}
	for(;;)
	{
		cin >> a;
		if(!strcmp(a,b))
		{
			cout << "oktwo" << endl;
		}
	}
	return 0;
}

