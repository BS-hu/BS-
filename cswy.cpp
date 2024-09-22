#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 114514//常量
#define CPDD(nishi,weiyi) ((nishi)+(weiyi))//宏




#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<time.h>




//结构体
//struct student
//{
//	int age_1;
//	char name_1[10]; 
//	double score;
//	char sex[5];
//
//};
//
////函数
////输入求值小游戏_2   前置
//int Add(int num1, int num2, int num3)
//{
//
//	int sum_1 = num1 + num2+ num3;
//
//	return sum_1;
//}
//
//
//
////关键字 typedef  前置
//typedef unsigned int uint_32;//把1+2变成3
////          1     2    3
//
//
////关键字 void  前置
//void text_1()
//{
//	int suiji_1 = 1;
//	suiji_1++;
//	printf("%d\n", suiji_1);
//}
//
//void text_2()
//{
//	static int suiji_2 = 1;
//	suiji_2++;
//	printf("%d\n", suiji_2);
//}
//
//extern int suiji_3;//声明外部函数
//
//
//
//int age = 0;//全局变量
//
//int main()
//{
//	printf("hello world\n");
//
//
//	//习题
//	{
//		
//		//输入A，求整合集
//		{
//			int n4 = 0;
//			int n1, n2, n3,a,b;
//			scanf("%d", &a);
//			for (n1 = a; n1 <= a + 3; n1++)
//			{
//				for (n2 = a; n2 <= a + 3; n2++)
//				{
//					for (n3 = a; n3 <= a + 3; n3++)
//					{
//						if (n1 != n2 && n2 != n3 && n1 != n3)
//						{
//							n4++;
//							b = n4 % 6;
//							printf("%d%d%d", n1, n2, n3);
//							if ( b != 0)
//							{
//								printf(" ");
//
//							}
//
//							else
//							{
//
//								printf("\n");
//							}
//						}
//					}
//				}
//			}
//
//
//
//
//
//		}
//
//
//
		//水仙花数
int main()
{

			
				int n, num_1, num_2, num_3, num_4, num_5,i, j, k, l;
				printf("到__位数(n>=3)");
				scanf("%d", &n);
				for(k=3;k<=n;k++)
				{
					for (num_1 = 1, num_2 = 1; num_1 < n; num_1++)
					{
						num_2 * 10;
					}

					i = 100;



					for (num_4 = 0; i > 0; i %= 10)
					{
						num_3 = i / 10;
						num_4 += num_3;//幂未施工

						if (num_4 == i)
						{
							printf("%d\n", i);
						}
					}
				}
					
}
//
//			
//
//
//
//
//		}
//
//		
//
//		//
//
//
//
//		//
//
//
//
//
//
//
//
//
//
//
//
//	}
//
//
//	//sizeof 求长度
//	{
//
//		//标识符
//		printf("%d\n", sizeof(char));//字符数据类型
//		printf("%d\n", sizeof(short));//短整型
//		printf("%d\n", sizeof(int));//整形
//		printf("%d\n", sizeof(long));//长整型
//		printf("%d\n", sizeof(long long));//更长的整形
//		printf("%d\n", sizeof(float));//单精度浮点数
//		printf("%d\n", sizeof(double));//双精度浮点数
//		printf("%d\n", sizeof(long double));
//
//		int a = 10;
//		printf("%d\n", sizeof(int));//函数括号不可省略
//		printf("%d\n", sizeof(a));//变量可省略
//		printf("%d\n", sizeof a);
//
//		int arr[10] = { 0 };
//		printf("%d\n", sizeof(arr[10]));
//		printf("%d\n", sizeof(arr));
//		int sz = sizeof(arr[10]) / sizeof(arr);
//		printf("%d\n", sz);
//
//	}
//
//
//
//	//操作符
//	{
//		//	算术操作符
//		//		+   -  *  /   %
//		//      加 减 乘 除 取余
//		// 
//		//	移位操作符-- > 移动的是二进制位
//		//		>> <<
//		//			int a = 2;
//		//			int b = a << 1;
//		//			-->b=4
//
//
//		//	位操作符
//		//		& 按位与   ^ 按位或   |按位异或
//
//		//	赋值操作符
//		//		= += -= *= /= &= ^= |= >>= <<=
//
//		//	单目操作符
//		//		!	逻辑反操作
//		//		-	负值
//		//		+	正值
//		//		&	取地址
//		//		sizeof      操作数的类型长度（以字节为单位）
//		//		~	对一个数的二进制按位取反----->0变1，1变0,且符号位不变
//		//		--  前置、后置--
//		//		++	前置、后置++
//		//		*	间接访问操作符(解引用操作符)
//		//		(类型)强制类型转换
//
//		//	关系操作符
//		//		>
//		//		>=
//		//		<
//		//		<=
//		//		!=   用于测试“不相等”
//		//		== 用于测试“相等
//
//		//	逻辑操作符
//		//		&& 逻辑与
//		//		|| 逻辑或
//
//		//	条件操作符  (三目操作符)
//		//		exp1 ? exp2 : exp3
//
//		//	逗号表达式
//		//		exp1, exp2, exp3, …expN
//
//		//	下标引用、函数调用和结构成员
//		//		[]() . ->
//	}
//
//
//	
//	//常见关键字
//	{
//		/*auto  break   case  char  const   continue  default  do   double else  enum
//			extern  float  for   goto  if   int   long  register    return   short  signed
//			sizeof   static struct  switch  typedef union  unsigned   void  volatile  while*/
//
//
//
//		//关键字 typedef-->顾名思义是类型定义，这里应该理解为类型重命名。
//		{
//
//			//观察num1和num2,这两个变量的类型是一样的
//			unsigned int num1 = 0;
//			uint_32 num2 = 0;
//
//		}
//
//
//		//关键字static
//		{
//			/*在C语言中：
//				static是用来修饰变量和函数的
//				1. 修饰局部变量 - 称为静态局部变量
//				2. 修饰全局变量 - 称为静态全局变量
//				3. 修饰函数 - 称为静态函数*/
//
//			//printf("%d\n", suiji_3);  无法使用，因为被static修饰，外部链接属性变成内部链接属性
//			//printf("%d\n", add_1(2,4));同理
//		}
//		
//
//		//关键字register
//		{
//			register int soooooooooo_suibianyige = 12;//建议a的值寄放在寄存器中
//
//		}
//
//
//		//关键字 void
//		{
//			int i = 0;
//			while (i < 3);
//			{
//				text_1();
//				text_2();
//				i++;
//			}
//
//		}
//
//
//
//	}
//
//
//
//	//一些定义
//	{
//		printf("age = %d\n", age);
//		printf("%d\n", 4 * CPDD(3, 4));
//
//		int age = 20;
//
//		printf("age = %d\n", age);
//
//		//age = age + 1;
//		//age = age - 1;
//
//		printf("age = %d\n", age);
//
//
//
//		printf("%d\n", 100);
//
//		char cn = 'a';
//
//		short num = 10;
//
//
//		printf("%d\n", num);
//
//		printf("%d\n", cn);
//
//
//
//		char ch = 'w';
//		float weight = 45.5f;
//
//
//
//		//使用顺序
//		{
//			int k = 10;
//			int r = ++k;
//			printf("%d", k);//11
//			printf("%d", r);//11
//			int t = k++;
//			printf("%d", k);//12
//			printf("%d", t);//11
//		}
//
//		//强制类型转换
//		{
//			int t = (int)3.14;
//
//			printf("%d", t);
//
//		}
//
//		{
//			int ch = getchar();//获取字符
//			printf("%c\n", ch);
//
//			putchar(ch);//输出字符
//		}
//		{
//			int ch = 0;
//			while ((ch = getchar()) != EOF)//EOF是end of file
//			{
//				putchar(ch);
//
//			}//按住Crlt + Z即可让其读取到EOF
//
//
//		}
//	}
//
//
//
//	//常量
//	{
//
//		//const定义常量
//		{
//			const int num = 13;//会将变量 更改为 常变量，不可更改
//
//			int arr_1[10] = { 0 };
//			int arr_2[num] = { 0 };
//
//		}
//
//
//		//枚举常量
//		{
//			enum NAME  //定义一个新量    NAME只能是以下值
//			{
//				BS,
//				happer,
//				happeriness = 1919810,//赋值
//
//			};
//
//			printf(" %d\n", BS);
//			printf(" %d\n", happer);
//			printf(" %d\n", happeriness);
//		}
//	}
//
//
//
//	//字符串
//	{
//		char arr_4[] = "YOU";
//		char arr_5[] = { 'Y', 'O', 'U' };
//		char arr_6[] = { 'Y', 'O', 'U' ,'\0'};
//
//		//此处用于 监视(调试状态f10 调试按键 窗口 监视) 观察结束标志-->\0  不算长度
//
//		printf(" % s\n", arr_4);
//		printf(" % s\n", arr_5);
//		printf(" % s\n", arr_6);
//
//
//		//strlen计算字符串长度
//		int long_1 = strlen("YOU");
//
//		printf("%d\n", arr_4);
//		printf("%d\n", arr_5);//会打印随机值
//		printf("%d\n", arr_6);
//
//	}
//
//	
//	//转义字符-->算长度
//	{
//
//		//%d打印整形--int   %c打印字符--char  %s打印字符串--
//		//%lf打印浮点数--double  %f打印--float  %l打印  --long
//				//（printf里用%f）
//
//		printf("%s\n", 'YOU');
//		printf("%c\n", '\'');// \' 用于表示字符常量'
//		//printf("%c\n", ''');错误的
//
//		printf("%c\n","\"");//\“ 用于表示一个字符串内部的双引号
//		printf("%c\n", "'");
//
//		printf("c:\test\test.c");
//		printf("c:\\test\\test.c");//\\ 用于表示一个反斜杠，防止它被解释为一个转义序列符。
//
//		printf("\a\a\a\a\a"); //  \a 警告字符，蜂鸣
//
//		printf("\b\b\b");//\b 退格符
//
//		printf("\f\f\f");//\f 进纸符
//
//		printf("\r\r\r");//\r 回车
//
//		printf("\n\n\n");//\n 换行
//
//		printf("\t\t\t"); //\t 水平制表符
//
//		printf("a\?\?");//\? 在书写连续多个问号时使用，防止他们被解析成三字母词
//
//		printf("a??");
//
//		printf("\v\v\v");//\v 垂直制表符
//
//		printf("%c\n",'\130');
//		//\ddd ddd表示1~3个八进制的数字。 如： \130 X
//		
//		printf("%c\n", '\x30');
//		//\xdd dd表示2个十六进制数字。 如： \x30 0
//	}
//
//
//
//	//转换进制
//	{
//
//		//16进制
//		{
//			int i, o, p, j;
//			printf("请输入:\n");
//			scanf("%d", &i);
//			printf("\n");
//
//			o = i / 16;
//			p = i % 16;
//			j = o * 10 + p;
//
//			printf("%d", j);
//		}
//
//
//
//
//	}
//
//
//
//	//输入求值小游戏
//	{
//		//输入求值小游戏_2
//		{
//
//			int num1 = 0;
//			int num2 = 0;
//			int num3 = 0;
//
//			int sum = 0;
//
//			printf("输入3个数:>");
//			scanf("%d %d %d", &num1, &num2, &num3);
//
//			sum = Add(num1, num2, num3);
//
//			printf("\n和 = % d\n", sum);
//
//
//
//		}
//
//
//		//输入求值小游戏_1
//		{
//			int num1 = 0;
//			int num2 = 0;
//			int num3 = 0;
//
//			int sum = 0;
//
//			printf("输入3个数:>");
//
//			scanf("%d %d %d", &num1, &num2, &num3);
//
//			sum = num1 + num2 + num3;
//
//			printf("\n和 = % d\n", sum);
//
//		}
//	}
//
//
//
//	//取最大值小游戏
//	{
//
//		
//		int time_3 = 0;
//		printf("输入__个数，取最大值");
//		scanf("%d", &time_3);
//		const int time_2 = time_3;
//		int arr_3[10] = { 0 };
//		
//		//施工未完成
//		// 
//		// 
//		//int arr_3[time_2] = { 0 };
//		
//		//time_2 = time_2 -1;
//
//
//		//输入
//		int time_1 = 0;
//		for (time_1 = 0; time_1 <= time_2; time_1++)
//		{
//			scanf("%d\n", &arr_3[time_1]);
//		}
//
//		//取值
//		int max_1 = arr_3[0];
//		for (time_1 = 0; time_1 < time_2; time_1++)
//		{
//			//比较
//			if (arr_3[time_1] > max_1)
//			{
//				//更新
//				max_1 = arr_3[time_1];
//			}
//
//		}
//
//		//打印
//		printf("最大值%d\n", max_1);
//
//		int sum_1 = 0;
//		for (time_1 = 0; time_1 < time_2; time_1++)
//		{
//			sum_1 = sum_1 + arr_3[time_1];
//
//		}
//		int avg = sum_1 / time_2;
//		printf("平均值%d", arr_3[time_1]);
//
//	}
//
//
//
//	//选择语句
//	{
//		//BMI指数
//		{
//			int high = 0;
//			int weight = 0;
//			int c = 0;
//
//			while (0 == c)
//			{
//				printf("请输入你的身高(m)");
//				scanf("%lf\n", &high);
//
//				printf("请输入你的体重(m)");
//				scanf("%lf\n", &weight);
//
//				if (high / weight * 2 > 24.9)
//				{
//					printf("太重了\n");
//				}
//
//				else if (high / weight * 2 < 18.5)
//				{
//					printf("太轻了\n");
//				}
//
//				else  /*if (high / weight * 2 <= 24.9 && high / weight * 2 = > 18.5)*/
//				{
//					printf("正常\n");
//				}
//
//				printf("如果想继续请输入0");
//				scanf("%d\n", &c);
//			}
//
//
//
//
//
//		}
//
////等价的代码
//	{
//	int a = 0;
//	int b = 0;
//	int bigger = 0;
//
//
//	//1
//	{
//		if (a > b)
//			bigger = a;
//
//		else//就近原则
//			bigger = b;
//
//	}
//
//	//2
//	{
//		//	条件操作符  (三目操作符)
//		bigger = a > b ? a : b;
//		// 0        1     2   3
//		//若1成立，则0=2，否则0=3
//	}
//
//
//
//		}
//
//
////switch语句
//{
//	//星期几判断
//	{
//		//在switch语句中，我们没办法直接实现分支，搭配break使用才能实现真正的分支
//		int day = 0;
//		int KFC = 0;
//
//
//		printf("今天星期_\n");
//		scanf("%d\n", &day);
//
//		switch (day)
//		{
//		case 1:
//			printf("今天星期一\n");
//			break;
//
//		case 2:
//			printf("今天星期二\n");
//			break;
//
//		case 3:
//			printf("今天星期三\n");
//			break;
//
//		case 4:
//			printf("今天星期四\n");
//
//			switch (KFC)
//			{
//			case 0:
//				printf("v我50\n");
//				KFC++;
//				break;
//
//			default:
//				printf("v我50\n");
//				KFC++;
//				break;
//
//			}
//
//
//		case 5:
//			printf("今天星期五\n");
//			break;
//
//		case 6:
//		case 7:
//			printf("今天周末\n");
//			break;
//
//		default:
//			printf("乐");
//			break;
//
//		}
//		printf("吃了KFC%d次", KFC);
//
//	}
//}
//
//
//
//	}
//
//
//
//	//循环语句
//	{
//
//		//输出100以内的奇数
//		
//		{
//			int app = 0;
//			for (app = 0; app < 100; app++)
//			{
//				if (app % 2 == 1)
//				{
//					printf("%d\n", app);
//
//				}
//
//
//			}
//		}
//
//
//
//			
//		
//				
//			
//		
//		
//			//猜随机数小游戏	
//		{
//
//
//			//随机数库
//			srand(time(0));
//
//
//
//			srand(time(0));
//
//			int a = 0;
//			int b = 0;
//			int c = rand();
//
//
//
//
//
//			while (a != c)
//			{
//				printf("请输入你猜的值");
//				b++;
//				scanf("%d\n", &a);
//
//				if (a < c)
//				{
//					printf("小了\n");
//
//				}
//				else if (a > c)
//				{
//					printf("大了\n");
//
//				}
//
//				else
//				{
//					printf("猜对了,用了%d次\n",b);
//
//				}
//
//			}
//			
//		}
//
//
//		//while语句
//		{
//
//			{
//				int l = 0;
//				while (l <= 99)
//				{
//					if (l == 10)
//					{
//						printf("%d\n", l);
//						continue;
//
//					}
//					if (l = 15)
//					{
//						printf("%d\n", l);
//						break;
//					}
//					l++;
//
//				}
//
//				printf("%d\n", l);
//			}
//
//
//
//
//			//九九乘法表
//			{
//				int q = 1;
//				int o = 1;
//				int k = 0;
//
//
//				while (o <= 9)
//				{
//
//					while (q <= o)
//					{
//						k = q * o;
//						printf("%d*%d=%d ", q, o, k);
//						q++;
//
//
//					}
//					printf("\n");
//					o++;
//					q = 1;
//				}
//				printf("\a");
//			}
//
//
//		}
//
//
//		//do while语句
//		{
//
//			//九九乘法表
//			{
//				int i = 1;
//				int o = 0;
//				int q = 0;
//				do
//				{
//
//					do
//					{
//						o++;
//						q = i * o;
//
//						printf("%d*%d=%d ", o, i, q);
//					} while (i > o);
//					i++;
//					o = 0;
//
//
//
//				} while (i <= 9);
//
//
//			}
//
//
//			//阶乘
//			{
//				//1
//				{
//
//
//					int i = 1;
//					int o = 1;
//					int k = 1;
//					int p = 0;
//					int u = 0;
//					int l = 2;
//
//
//
//					printf("多少\n");
//					scanf("%d\n", &u);
//
//					do
//					{
//
//						do
//						{
//							o *= i;
//							i++;
//						} while (i <= k);
//
//
//						p += o;
//						o = 1;
//						i = 1;
//
//						printf("1!");
//
//						for (l = 2; l <= k;)
//						{
//							printf("+%d!", l);
//							l++;
//
//						}
//						printf("=%d\n", p);
//						l = 1;//或许可以等于2？
//
//
//						k++;
//						o = 1;
//					} while (k <= u);
//
//
//				}
//
//
//				//2
//				{
//					int i;
//					int p = 1;
//					int o = 0;
//					scanf("%d", i);
//
//					for (; i >= o;)
//					{
//						o++;
//						p *= o;
//
//					}
//					printf("%d!=", p);
//				}
//				
//				//指针版---待施工
//			}
//
//
//
//
//
//
//
//
//
//
//		}
//
//		//输入密码
//		{
//			char password[20] = { 0 };
//			printf("密码；\n");
//			scanf("%s", password);
//			printf("请确认密码（Y/N）：\n");
//			int mmp = 0;
//			while ((mmp = getchar())!='\n')
//			{
//				;
//			}//处理  \n，防止下面输入
//			int ch = getchar();
//
//			if (ch == 'Y')
//			{
//				printf("成功\n");
//
//			}
//			else
//			{
//				printf("失败\n");
//
//			}
//
//		}
//
//
//		//for语句
//		{
//
//			//九九乘法表
//			{
//				int i = 1;
//				int o = 1;
//				int k = 0;
//
//				for (i = 1; i < 10; printf("\n"), o = 1, i++)
//				{
//
//
//					for (k != -1; o <= i; printf("%d*%d=%d ", o, i, k), o++)
//					{
//
//						k = i * o;
//						;
//						;
//					}
//					;
//					;
//
//				}
//
//
//				//素数判断
//				{
//					int o = 1;
//					int i = 2;
//					int p = 0;
//					int k = 0;
//
//					printf("多少以内");
//					scanf("%d", &k);
//
//					//scanf("%d", &o);
//
//
//					for (; o <= k; o++)
//					{
//
//
//						for (; i < o;)
//						{
//
//							if (o % i == 0)
//							{
//								p = 1;
//								break;
//							}
//							else
//							{
//								p = 2;
//							}
//
//							i++;
//
//						}
//
//						i = 2;
//						if (p == 1)
//						{
//							printf("%d不是素数\n", o);
//						}
//						else
//						{
//
//							printf("%d是素数\n", o);
//						}
//
//
//					}
//				}
//
//
//
//
//				//打印奇数
//				{
//					int i = 1;
//					int o = 0;
//					int p = 0;
//
//					printf("多少内\n");
//					scanf("%d\n",&o);
//
//
//
//
//					for (i = 1; i <= o; i++)
//					{
//						p = i % 2;  //取余，未施工？
//						if (p == 1)
//						{
//							break;
//						}
//
//						else if (p <= 0)
//						{
//							printf("乐");
//							continue;
//
//						}
//						printf("%d\n",i);
//					}
//					
//
//
//				}
//
//
//
//
//
//
//
//			}
//
//
//
//		}
//
//
//
//
//
//
//
//
//
//
//
//	}
//
//
//
//	//数组
//	{
//		//示例
//		{
//			int arr[5] = { 1,2,3,4,5 };
//			char ch[5] = { 1,2,5 };
//
//			int i = 0;
//
//			while (i < 5);
//			{
//				printf("\n", arr[i], ch[i]);//下标引用操作符
//				//				^ ^   ^ ^
//				i++;
//			}
//		}
//
//
//		//游戏开始字幕
//		{
//			char arr_1[] = "welcome to GAME!";
//			char arr_2[] = "################";
//
//			int left = 0;
//			int right = strlen(arr_1 - 1);
//
//			
//
//
//			while (left < right)
//			{
//
//
//				arr_2[left] = arr_1[left];
//				arr_2[right] = arr_1[right];
//
//				printf("%s\n", arr_2);
//				left++;
//				right--;
//			}
//
//
//
//
//		}
//
//		
//	}
//
//	
//	//折半查找
//	{
//		//找数字
//		{
//			int COC[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//			//设置随机库
//
//			int left = 0;
//			int right = sizeof(COC) / sizeof(COC[0] - 1);
//			int mid = 0;
//			int guest = 6;
//
//			while (left <= right)
//			{
//				mid = (left + right) / 2;
//
//
//				if (COC[mid] < guest)
//				{
//					left += 1;
//
//
//				}
//
//				else if (COC[mid] > guest)
//				{
//					right -= 1;
//
//				}
//
//				else
//				{
//
//					break;
//				}
//
//				if (left <= right)
//				{
//					printf("找到了,%d\n", guest);
//				}
//				else
//				{
//					printf("找不到了");
//				}
//			}
//		}
//
//
//		//找函数---------尚未施工完毕
//		{
//			int bin_search(int COC[], int left, int right, int guest);
//			int COC[] = { 0 };
//			//设置随机库
//			int left = 0;
//			int right = sizeof(COC) / sizeof(COC[0]) - 1;
//			int mid = 0;
//			int guest = 6;
//
//			while (left <= right)
//			{
//				mid = (left + right) / 2;
//
//
//				if (COC[mid] < guest)
//				{
//					left += 1;
//
//
//				}
//
//				else if (COC[mid] > guest)
//				{
//					right -= 1;
//
//				}
//
//				else
//				{
//
//					break;
//				}
//
//				if (left <= right)
//				{
//					printf("找到了,%d\n", guest);
//				}
//				else
//				{
//					printf("找不到了");
//				}
//			}
//		}
//
//
//
//
//	}
//
//
//
//	//goto语句
//	{
//		//示例
//		{
//			for (;;)
//			{
//				for (;;)
//				{
//					for (;;)
//					{
//						goto ok;
//
//					}
//					printf("error");
//
//				}
//
//			}
//
//		ok:
//			printf("ok");
//		}
//
//
//
//		
//	}
//
//
//
//	//随机库相关
//	{
//
//		//整数求逆
//		{
//			srand(time(0));
//			int a = rand();
//
//			int time_1 = 0;
//			int num_1 = 0;
//			int num_2 = 0;
//			int hap;
//
//			do {
//				num_1 = a % 10;
//				num_2 = num_2 * 10 + num_1;
//
//
//				printf("a=%d\nnum_1=%d\nnum_2=%d\n", a, num_1, num_2);
//
//				a /= 10;
//
//
//			} while (hap > 0);
//		}
//
//
//		//最大公约数--辗转相除法
//		{
//			srand(time(0));
//			int a = rand();
//			int b = rand();
//			int t;
//
//			while (b != 0)
//			{
//				t = a % b;
//				a = b; 
//				b = t;
//
//				printf("a=%d,b=%d,t=%d", a, b, t);
//			}
//			
//			printf("gcd=%d",a);
//
//
//		}
//
//
//		//整数求正_1
//		{
//			srand(time(0));
//			int a = rand();
//
//			//int num_1, num_2, num_3, num_4;
//
//			int num_1 = 0;
//			int num_2 = 0;
//			int num_3 = 0;
//			int num_4 = 0;
//
//			for(;a>0;a/=10)
//			{
//				num_1 = a % 10;
//				num_2 = num_2 * 10 + num_1;
//				
//				printf("a=%d\nnum_1=%d\nnum_2=%d\n", a, num_1, num_2);
//				
//			}
//
//			for (; num_2 > 0; a /= 10)
//			{
//				
//				num_3 = num_2 % 10;
//				num_4 = num_4 * 10 + num_3;
//				;
//				printf("num_2=%d\nnum_3=%d\nnum_4=%d\n", num_2, num_3, num_4);
//			}
//
//
//
//
//
//
//		}
//
//
//		//整数求正_2
//		{
//			srand(time(0));
//			int a = rand();
//
//			int num_1 = a;
//			int num_2 = 1;
//			int num_3 = 0;
//			int end = 0;
//
//			for (;a > 9;a /= 10)
//			{
//				num_2 *= 10;
//
//
//			}
//
//			
//
//			for (; num_2 > 0; num_2 /= 10)
//			{
//				num_3 = num_1 / 10;
//				printf("%d", num_3);
//
//				num_1 %= 10;
//				num_2 /= 10;
//
//				if (num_1 > 9)
//				{
//					printf(" ");
//
//				}
//
//			}
//			printf("\n");
//
//
//			
//		}
//
//
//
//
//	}
//
//
//
//	//逗号表达式
//	{
//		int a = 0;
//		int b = 6;
//		int c = 3;
//		printf("%d\n", a);
//		printf("%d\n", b);
//		printf("%d\n", c);
//
//		int d = (a = b - 3, c = a - 2, b = c + 2);//d为最后一个表达式结果
//		printf("%d\n", a);
//		printf("%d\n", b);
//		printf("%d\n", c);
//		printf("%d\n", d);
//	}
//
//
//
//	//指针
//	{
//		
//		//解释
//		{
//			int me = 0;
//			&me;//取出me的地址
//			//注：这里me的4个字节，每个字节都有地址，取出的是第一个字节的地址（较小的地址）
//			printf("%p\n", &me);//打印地址，%p是以地址的形式打印
//
//			printf("%d\n", sizeof(char*));
//			printf("%d\n", sizeof(short*));
//			printf("%d\n", sizeof(int*));
//			printf("%d\n", sizeof(double*));
//
//
//			//指针大小在32位平台是4个字节，64位平台是8个字节
//		}
//
//
//		//演示
//		{
//
//			//one
//			{
//
//				//此处可能有bug？
//				int pc = 0;
//				int pl = 0;
//
//				printf("请输入想看的数据");
//				scanf("%d\n", &pc);
//				printf("请输入想看的数据地址");
//				scanf("%d\n", &pl);
//
//
//				int* kp = &pc;
//				*kp = pl;
//			}
//
//
//			//two
//			{
//				char coc = 'call';
//				char* Cthulhu = &coc;//存放地址
//				*Cthulhu = 'HFL';//此处*是解引用操作，并更改内容
//				printf("%c\n", &coc);
//
//				//结果是coc的内容变成了HFL
//			}
//		}
//
//
//	}
//
//
//
//	//结构体
//	{
//		//结构体的初始化
//		{
//			//打印结构体信息
//			
//			struct student Stu = { 18,"张三",87, "男"};
//			//.为结构成员访问操作符
//
//
//			printf("1:年龄是%d  名字是%s  分数是%lf  性别是%s\n", Stu.age_1, Stu.name_1, Stu.score, Stu.sex);
//
//			//->操作符
//			struct student* STU = &Stu;
//			printf("2:age=%d name=%s score=%lf sex=%s\n", STU->age_1,STU->name_1,STU->score,STU->sex);
//			printf("3:age=%d name=%s score=%lf sex=%s\n", (*STU).age_1, (*STU).name_1, (*STU).score, (*STU).sex);
//
//		};
//
//		
//	}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}
//



