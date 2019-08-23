/*
 * search.c
 *
 *  Created on: Nov 15, 2018
 *      Author: abok
 */


#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int id;
	char name[41];
} student;

const int size = 8;

const student roster[8] =
		{{ 100001, "Ziggy Marley" },
		{ 123456, "Abe Lincoln" },
		{ 239484, "Jed Clampett" },
		{ 443892, "Marge Simpson" },
		{ 517840, "Betty Britain" },
		{ 780556, "David Bowie" },
		{ 900154, "Gore Vidal" },
		{ 999900, "Nursultan Jones" } };

int findStudent(int id)
{
	// Modify int array binary search impl.
	// to work with student roster
	int min = 0;
    int max = size - 1;
    int guess;

    while (min <= max)
    {
        guess = (min + max) / 2;

        if (roster[guess].id == id)
        {
            return guess;
        }
        else if (roster[guess].id > id)
        {
            max = guess - 1;
        }
        else
        {
            min = guess + 1;
        }

    }

	return -1;
}

int main(void)
{

    if(findStudent(99) >= 0)
    {
    	printf("Test 0: %s \n", roster[findStudent(99)].name);
    }
    else
    {
    	printf("Test 0: Not found \n");
    }
    if(findStudent(100001) >= 0)
    {
    	printf("Test 1: %s \n", roster[findStudent(100001)].name);
    }
    else
    {
    	printf("Test 1: Not found \n");
    }
    if(findStudent(123456) >= 0)
    {
    	printf("Test 2: %s \n", roster[findStudent(123456)].name);
    }
    else
    {
    	printf("Test 2: Not found \n");
    }
    if(findStudent(300000) >= 0)
    {
    	printf("Test 3: %s \n", roster[findStudent(300000)].name);
    }
    else
    {
    	printf("Test 3: Not found \n");
    }
    if(findStudent(780556) >= 0)
    {
    	printf("Test 4: %s \n", roster[findStudent(780556)].name);
    }
    else
    {
    	printf("Test 4: Not found \n");
    }
    if(findStudent(999900) >= 0)
    {
    	printf("Test 5: %s \n", roster[findStudent(999900)].name);
    }
    else
    {
    	printf("Test 5: Not found \n");
    }
    if(findStudent(999999) >= 0)
    {
    	printf("Test 6: %s \n", roster[findStudent(999999)].name);
    }
    else
    {
    	printf("Test 6: Not found \n");
    }

	return 0;
}
