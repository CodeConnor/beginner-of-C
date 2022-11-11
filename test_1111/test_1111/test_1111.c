#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int g_val = 2022;
//
//int main()
//
//{
//	printf("hello\n");
//
//	printf("1:%d\n", g_val);
//
//	{
//		//该大括号内是局部变量a的作用域	
//		int a = 10;
//
//		printf("a = %d\n", a);
//
//		printf("2:%d\n",g_val);
//		
//	}
//
//	printf("3:%d\n", g_val);
//
//	//printf("a = %d\n", a);----该处的a的值打印不出来，因为超过了局部变量a的作用域
//
//	return 0;
//}


////当在工程的某源文件中使用其他源文件定义的全局变量时，需要用`extern 变量类型 变量名`来声明变量。
//extern int g_val;//声明变量
//int main()
//{
//	printf("%d\n", g_val);
//
//
//	return 0;
//}



//int main()
//{
//	////1.字面常量
//	//3.14;
//	//2022;
//	//'a';
//	//'abcdefg';
//
//	////2. const修饰的常变量
//	//const int a = 10;//a此时为常变量，具有无法改变的属性
//	//
//	////a = 20;//无法改变a而报错
//
//	//printf("a = %d\n", a);
//
//	////证明n本质是变量
//	//const int n = 10;
//	//int arr[n] = {0};//数组元素个数应为常量，常变量不行，会报错
//
//	return 0;
//}


////3. #define定义的标识符常量，定义后无法更改
//#define MAX 2022;
//int main()
//{
//	int n = MAX;
//
//	printf("%d", n);
//
//	//int arr[MAX] = {0};//同样报错
//	return 0;
//}


//4.枚举常量
//括号内是枚举常量，这些常量是创建的枚举类型未来可能取到的值
enum Sex//创建一个名为Sex的枚举类型
{
	MALE = 3,//可以对枚举常量赋值，赋值后，接下来的值就+1增长
	FEMALE,
	SECRET
};

int main()
{
	//枚举常量的值默认从0开始+1上升
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}