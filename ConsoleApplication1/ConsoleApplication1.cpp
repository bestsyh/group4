// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
#include "stdafx.h"
#include<time.h>
#include<stdio.h>
#include<Windows.h>

clock_t starttime, endtime;
int main()
{


	void start();
	void end();
	start();

	for (long i = 0; i < 20000000; i++)

	{
		printf("");
	}

	end();
	printf("%f\n", double((endtime - starttime) / CLOCKS_PER_SEC));
	Sleep(100000);
	return 0;
}


void  start()
{
	starttime = clock();
	printf("%d\n", starttime);
}

void end() {
	endtime = clock();
	printf("%d\n", endtime);
}
