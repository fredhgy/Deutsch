#include <stdio.h>
#include <stdlib.h>

void main()
{
	system("del /f/s/q deutschc.exe");
	system("del /f/s/q readme.txt");
	//system("del /f/s/q updatetool.exe");
	system("wget http://www.heguangyu.net/download/deutschc/deutschc.exe");
	system("wget http://www.heguangyu.net/download/deutschc/readme.txt");
	//system("wget http://www.heguangyu.net/download/deutschc/updatetool.exe");
}


