

//打印hello world!
//#include <stdio.h>
//int main()
//{
//
//	printf("hello world!\n");//换行：\n
//
//	printf("%d\n",100);//打印整数
//
//	return 0;
//}


////计算各数据类型大小
//#include <stdio.h>
//int main()
//{
//
//	printf("size_char = %d\n", sizeof(char));//sizeof：计算数据类型或者变量所占空间大小，单位是字节byte
//	printf("size_short = %d\n", sizeof(short));
//	printf("size_int = %d\n", sizeof(int));
//	printf("size_long = %d\n", sizeof(long));
//	printf("size_long long = %d\n", sizeof(long long));
//	printf("size_float = %d\n", sizeof(float));
//	printf("size_double = %d\n", sizeof(double));
//
//	return 0;
//}



////变量
//#include <stdio.h>
//int main()
//{
//
//	//创建两个变量，再分别给两个变量赋值
//	int age = 21;
//	float weight = 77.7;
//
//	//改变变量的值
//	age = age + 1;
//	weight = weight - 5;
//
//	printf("age = %d\n", age);
//	printf("weight = %f\n", weight);//float对应%f
//
//	return 0;
//}



////变量冲突
//#include <stdio.h>
//
//int a = 1;//全局变量
//
//int main()
//{
//	int a = 10;//局部变量
//
//	printf("%d\n",a);
//
//	return 0;
//}



//求和
#define _CRT_SECURE_NO_WARNINGS 1//解决vs认为scanf函数不安全而无法调用的错误
#include <stdio.h>

int main()
{

	int a = 0;
	int b = 0;
	int sum = 0;

	scanf("%d %d", &a, &b);//输入a和b的值
	sum = a + b;
	printf("sum = %d\n", sum);

	//gitee test1111111111111
    //gitee  test2222222222222
	//github test11111111111
	//Speed test1111111111

	return 0;
}
