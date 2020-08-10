#include<windows.h>
#include<stdio.h>
/* int main()
{
	int i;
	int a[10];
	for (i = 0; i <= 10; i++){
		a[i] = 0;
		printf("%d", a[i]);
	}
	//system("pause");
	return 0;
} */

int check_sys()
{
	int i = 1;
	return(*(char*)&i);

}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë\n");
	}
	return 0;

}