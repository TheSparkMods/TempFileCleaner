/*
 * cleaner.c
 *
 *  Created on: Jul 23, 2016
 *      Author: Anthony
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	system("rd %temp% /s /q");
	system("md %temp%");

		getch();
		return 0;
}
