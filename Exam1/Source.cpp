#include<stdio.h> 
#include<locale.h> 
#include<iostream> 



void task1()
{

		int n, m;

		printf("print n: ");
		scanf_s("%d", &n);

		if (n >= 64)
		{
			m = n / 64;
			n = n % 64;
			printf("There are %d of 64 bills\n", m);
		}

		

		if (n >= 32)
		{
			m = n / 32;
			n = n % 32;
			printf("There are %d of 32 bills\n", m);
		}

	

		if (n >= 16)
		{
			m = n / 16;
			n = n % 16;
			printf("There are %d of 16 bills\n", m);
		}

		

		if (n >= 8)
		{
			m = n / 8;
			n = n % 8;
			printf("There are %d of 8 bills\n", m);
		}

		

		if (n >= 4)
		{
			m = n / 4;
			n = n % 4;
			printf("There are %d of 4 bills\n", m);
		}

		

		if (n >= 2)
		{
			m = n / 2;
			n = n % 2;
			printf("There are %d of 2 bills\n", m);
		}

		

		if (n >= 1)
		{
			m = n;
			printf("There are %d of 1 bills\n", m);
		}	
		system("pause");
	}
		
	


void task2()
{


	int i, sum = 0;


	for (i = 1; i <= 50; i += 2)
	{
		sum = sum + i;
	}

	printf("Sum is %d\n", sum);
	system("pause");
}




void task3()
{


	int n = 5 + rand() % 15, sum = 0, price, i = 0;
	
	printf("There are %d products\n", n);

	do
	{
		n--;
		price = 800 + rand() % 400;
		

		if (price > 1000)
		{
			i++;
			sum = sum + price;
		}
		
	} while (n > 0);

	printf("There are %d products with price > 1000\n", i);
	printf("There sum of prices of these products is %d \n", sum);

	system("pause");
}


void task4()
/*Известны данные о количестве страниц в каждой из
нескольких газет и в каждом из нескольких журналов. Число
страниц в газете не более 16. Найти общее число страниц во
всех журналах (количество журналов неизвестно, но известно,
что объем любого журнала превышает объем любой газеты).*/
{
	setlocale(LC_ALL, "");
	int n, j, sumj = 0, sumn = 0, i = 20;

	do
	{
	
		do
		{
			n = 10 + rand() % 5;
			j = 10 + rand() % 10;
		} while (j <= n);
		
		
		sumj += j;
		sumn += n;

		printf("%d - amount of papers in newspaper\n", n);
		printf("%d - amount of papers in journal\n\n", j);

		i--;
	} while (i > 0);

	printf("Sum of the papers in newspapers is %d\n", sumn);
	printf("Sum of the papers in journals is %d\n", sumj);

	system("pause");
}


void task5()
{

	int cl, n, sum = 0;


	for (cl = 1; cl <= 11; cl++)
	{
		n = 15 + rand() % 10;
		if (cl % 2 != 0)
		{
			printf("In %d class there are %d pupils\n", cl, n);
			sum += n;
		}

	}
	printf("The sum of pupils in odd classes is %d\n", sum);

	system("pause");
}

void task6()
{
	int i, year, i1 = 0, i2 = 0;

	for (i = 1; i <= 20; i++)
	{
		year = 1980 + rand() % 20;

		printf("%d\n", year);

		if (year < 1985) 
		{
			i1++;
		}

		if (year > 1990)
		{
			i2++;
		}

	}
	printf("There are %d people born < 1985\n", i1);

	printf("There are %d people born > 1990\n", i2);

	system("pause");
}

void task7()
{

	int i, win, lost, i1 = 0;
	
	for (i = 1; i <= 20; i++)
	{
		do
		{
			win = 1 + rand() % 9;
			lost = 1 + rand() % 9;
		} while (win + lost != 10);

		printf("For team %d there are %d wins and %d losses\n", i, win, lost);

		if (win > lost)
		{
			i1++;
		}
	}

	printf("There are %d teams with more wins than losses\n", i1);
	system("pause");
}

void task8()
{

	int i, grade, i1 = 0;

	for (i = 1; i <= 20; i++)
	{
		grade = 2 + rand() % 3;

		printf("Grade of student %d is %d\n", i, grade);

		if (grade == 2)
		{
			i1++;
		}
	}
	printf("There are %d students with grade 2\n", i1);

	system("pause");
}

void task9()
{

	int i, m, i1 = 0, sum1 = 0, sum = 0, t = 0;
	float av1, av2;

	for (i = 1; i <= 20; i++)
	{
		m = 60 + rand() % 50;

	
		if (m > 100)
		{
			i1++;
			sum1 += m;
		}
		sum += m;

		printf("The mass of %d person is %d\n", i, m);
	}
	printf("There are %d fat people\n", i1);
	sum -= sum1;

	printf("The sum of masses of fat people is %d\n", sum1);
	printf("The sum of masses of other people is %d\n", sum);

	av1 = float(sum1) / float(i1);
	av2 = float(sum) / float(i - i1);

	printf("The average mass of fat people is %f\n", av1);
	printf("The average mass of other people is %f\n", av2);

	system("pause");
}

void task10()
{

	int i, res, res1 = 50;

	for (i = 1; i <= 20; i++)
	{
		res = 15 + rand() % 15;
		printf("Time of the sportsman %d is %d minutes\n", i, res);

		if (res < res1)
		{
			res1 = res;
			printf("The new record of time is %d minutes\n", res);
		}

	}
	
	system("pause");
}


void task11()
{

	int i, grade, max = 0, min = 30, i1, sum = 0;
	float av;

	for (i = 1; i <= 10; i++)
	{
		sum = 0;
		min = 30;
		max = 0;
		for (i1 = 1; i1 <= 5; i1++)
		{
			grade = 1 + rand() % 9;

			if (grade > max)
			{
				max = grade;
			}

			if (grade < min)
			{
				min = grade;
			}
			sum += grade;
			printf("For the sportsman %d the grade of the referee %d is %d\n", i, i1, grade);
		}

		sum = sum - (min + max);
		printf("For the sportsman %d the total grade is %d\n", i, sum);

		av = float(sum) / 3;

		printf("For the sportsman %d the average grade is %f\n\n", i, av);
	}

	system("pause");
}




int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("Введите номер задания: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

		break;
	}
	case 2:
	{
		task2();

		break;
	}
	case 3:
	{
		task3();

		break;
	}
	case 4:
	{
		task4();
	}
	case 5:
	{
		task5();

		break;
	}
	case 6:
	{
		task6();

		break;
	}
	case 7:
	{
		task7();

		break;
	}
	case 8:
	{
		task8();

		break;
	}
	case 9:
	{
		task9();

		break;
	}
	case 10:
	{
		task10();

		break;
	}
	case 11:
	{
		task11();

		break;
	}

	}

	printf("Хотите продолжить 1 или 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}