#include <stdio.h>
int power(int n, int y)
{
	if (y == 0)
		return 1;
	else
		return n * power(n, y - 1);
}
int main()
{
	int i, testCases, stringLen, num, onum = 0, mod;
	printf("Testcases: ");
	scanf("%d", &testCases);
	printf("string lenght and k: ");
	scanf("\n%d %d", &stringLen, &num);
	int a[stringLen];
	printf("Enter thr number: ");
	for (i = 0; i < stringLen; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < stringLen; i++)
	{
		onum += a[i] * power(10, (stringLen - 1 - i));
	}
	while (testCases > 0)
	{
		onum /= 10;
		testCases--;
	}
	mod = onum % num;
	printf("%d", onum);
	printf("\n%d", mod);
}