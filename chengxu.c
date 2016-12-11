        输入一个数输出逆序数
法-
#include <stdio.h>
#include <stdlib.h>
int main()
{
	    int inum, n;
	    while (1)                       //运用两层循环主要是为了增加一个负数检测功能  
		   {
		       printf("请输入一个正整数：");
		        scanf_s("%d", &inum);
		        printf("\n");
		       if (0 > inum)               //输入为负数是，跳到循环开始，重新来过。  
			        {
			           continue;
			       }
		      while (0 < inum)            //输出反序数  
		       {
			          n = inum % 10;
					  inum = inum / 10;
			            printf("%d", n);
			            
			        }
		        break;                    // 结束循环  
		    }
	  return 0;
	}

法二
#include<stdio.h>
void main()
{
	int n, m;
	printf("请输入一个正整数\n");
	scanf_s("%d", &n);
	while (n > 0)
	{
		m = n % 10;
	    n= n / 10;
		printf("%d", m);
	} 
	while (n< 0)
	{
		printf("请重新输入正整数");
		scanf_s("%d", &n);
		continue;
	}
}
从终端输入一些数计算正整数的个数，并求和
#include<stdio.h>
void main()
{
	int a[10] = { 0 };
	int n = 0;
	int sum = 0;
	printf("请输入10个整数\n");
	for (int i = 0; i<10; i++)
	{
		scanf_s("%d", &a[i]);
		if (a[i]>0)
		{
			n++;
			sum += a[i];
		}
	}
	printf("正数个数为%d个，正数和为%d\n", n, sum);
}
指针输入五个数，逆序复制到另一数组中
#include<stdio.h>

int main()
{
	int a[5] = { 0 };
	int b[5] = { 0 };
	int *p = a;
	int *p2 = b;
	int i = 0, j = 0;

	printf("input 5 numbers :\n");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", p++);
	}
	p -= 5;
	for (j = 4; j >= 0; j--)
	{
		*(p2 + j) = *p++;
	}
	printf("The result: \n");
	for (j = 0; j < 5; j++)
	{
		printf("%d ", b[j]);
	}
	printf("\n");

	return 0;
}

指针
#include<stdio.h>
void main()
{
	int a = 100,b=10;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("a=%d,b=%d,*p1=%d,*p2=%d\n", a, b, *p1, *p2);
	
}

#include<stdio.h>
void main()
{

	int *p1, *p2, *p, a, b;
	printf("输入两个数\n");
	scanf_s("%d%d", &a, &b);
	p1 = &a;
	p2 = &b;
	if (a<b)
	{
		p = p1; p1 = p2; p2 = p;
	}
	printf("a=%d,b=%d,*p1=%d,*p2=%d\n", a, b, *p1, *p2);
	
}


#include<stdio.h>
void main()
{

	void J(int *p1, int *p2);
	int a, b, *p1, *p2;
	printf("输入两个数");
	scanf_s("%d%d", &a, &b);
	p1 = &a;
	p2 = &b;
	if (a > b)
		J(p1, p2);
	printf("a=%d,b=%d,*p1=%d,*p2=%d\n", a, b, *p1, *p2);
	
}
	void J(int *p1, int *p2)
	{
		int *p;
		p = p1;
		p1 = p2;
		p2 = p;
	}



#include<stdio.h>
int main()
{

	void exchange(int *q1, int *q2, int *q3);
 
	int a, b, c, *p1, *p2, *p3;
	printf("输入两个数");
	scanf_s("%d%d%d", &a, &b, &c);
	p1 = &a;
	p2 = &b;
	p3 = &c;
	exchange(p1, p2, p3);
	printf("%3d%3d%3d\n",a, b, c);
	return 0;
	
}
void exchange(int *q1, int *q2, int *q3)
{
	void 	swap(int *pt1, int *pt2);
		if (*q1 < *q2)
	
			swap(q1, q2);
	
	if (*q1 < *q3)
	
		swap(q1, q3);
	
	if (*q2 < *q3)
	
		swap(q2, q3);
	
	
}
	
	

void  swap(int *pt1, int *pt2)
	{
		int temp;
		temp = *pt1;
		*pt1 = *pt2;
		*pt2 = temp;
	}
#include<stdio.h>
int main()
{
	int a[10];
	int i;
	printf("输入10个数\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < 10; i++)
		printf("%2d", *(a + i));
	printf("\n");
	return 0;
	
 
	}
#include<stdio.h>
int main()
{
	int a[10];
	int i,*p=a;
	printf("输入10个数\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	p = a;
	for (i = 0; i < 10;i++,p++)
		printf("%2d", *p);
	printf("\n");
	return 0;
	
 
}



#include<stdio.h>
int main()
{
	int a[10];
	int *p, i;
	printf("输入十个数\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	for (p = a; p < (a + 10); p++)
		printf("%3d", *p);
}



#include<stdio.h>
int main()
{
	int a[10];
	int *p, i;
	p = a;
	printf("输入十个数\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < 10;i++,p++)
		printf("%3d", *p);
}

#include<stdio.h>
int main()
{
	int a[10];
	int i,*p=a;
	printf("输入十个数\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", p++);
	p = a;
	for (i = 0; i < 10;i++,p++)
		printf("%3d", *p);
}




质数
#include<stdio.h>

int main()
{
	int a, b = 0;
	int i = 2;
	printf("输入一个数\n");
	scanf_s("%d", &a);
	for (i = 2; i < a - 1; i++)
	{
		if (a%i == 0)
		{
			b++;
		}
	}
	if (b == 0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}



斐波那契数列
#include< stdio.h>
long Fib_ite(int n)
{
	long fib1, fib2, fib;
	int i;
	fib1 = 1;
	fib2 = 1;
	fib = 1;
	for (i = 2; i <= n; i++)
	{
		fib = fib1 + fib2;
		fib1 = fib2; fib2 = fib;
	}
	return(fib);
}
long Fib_rec(int n)
{
	if (n<2) return(1);
	else
		return(Fib_rec(n - 1) + Fib_rec(n - 2));
}
int main()
{
	int i, n;
	printf("please input a number n:\n");
	scanf_s("%d", &n);
	printf("递归结果：");
	printf("  %d  ",Fib_rec(n-1));

	printf("\n");

}
Java的99乘法表
package HelloWorld;
public class HelloWorld {
    public static void main(String[] args) {
        int sum;
		System.out.println("打印九九乘法表");
        
		// 外层循环控制行数
		for (int i = 1; i<=9;i++             ) {
            
			// 内层循环控制每行的*号数
			// 内层循环变量的最大值和外层循环变量的值相等
			for (int j = 1;j<=i;j++             ) {
                sum=i*j;
				System.out.print(j+"*"+i+"="+sum);
			}
            
			// 每打印完一行后进行换行
			System.out.println();
		}
	}
}



对成绩加分
package HelloWorld;
import  java.util.Scanner;
public class HelloWorld {
	 public static void main(String[] args) {
		  // 变量保存成绩
		 Scanner input=new Scanner(System.in);
		 System.out.println("输入数据");
		 int score=input.nextInt();
	        
	        // 变量保存加分次数
	        int count = 0;
	        //打印输出加分前成绩 
	          System.out.println("加分前的成绩"+score);
	        // 只要成绩小于60，就循环执行加分操作，并统计加分次数
	        if(score<60)
	        do{score++;
	        count++;}
	        while(score<60);
	        
	        System.out.println("加分后成绩:"+score);
	        System.out.println("共加了"+count+"次"); 
	        //打印输出加分后成绩，以及加分次数
	      


}
}
成绩求平均
package HelloWorld;
import  java.util.Scanner;
public class HelloWorld
{
	 public static void main(String[] args) {
		  // 变量保存成绩
		 int i,j,ClassNum=3;
		 int StuNum=4;
		 double num=0;
		 double avg=0;
		 Scanner input=new Scanner(System.in);
		 for(i=1;i<=ClassNum;i++)
		 { num=0;
		 System.out.println("输入第"+i+"个班级数据");
		 
			 for(j=1;j<=StuNum;j++)
			 { System.out.println("输入第"+j+"个学元数据");
		 int score=input.nextInt();
	        num=num+score;}
	        // 变量保存加分次数
	       avg=num/StuNum;
	        System.out.println("平均分"+avg); 
	         
		 }
}}



数组输出
public class HelloWorld {
    public static void main(String[] args) {
        
		// 定义一个长度为5的字符串数组，保存考试科目信息
		String[] subjects=new string[5];  
		// 分别为数组中的元素赋值
		subjects[0] = "Oracle";
		subjects[1] = "PHP";
		subjects[2] = "Linux";
		subjects[3] = "Java";
		subjects[4] = "HTML";
        
System.out.println("数组中第4个科目为：" +subject[3]);
	}
}



替换，累加，求和
public class HelloWorld {
    
    public static void main(String[] args) {
        
		// 定义一个整型数组，并赋初值
		int[] nums = new int[] { 61, 23, 4, 74, 13, 148, 20 };
        
		int max = nums[0]; // 假定最大值为数组中的第一个元素
		int min = nums[0]; // 假定最小值为数组中的第一个元素
		double sum = 0;// 累加值
		double avg = 0;// 平均值
        
		for (int i = 0; i < nums.length; i++) { // 循环遍历数组中的元素
        // 如果当前值大于max，则替换max的值
		if(max<nums[i])
        max=nums[i];
        
        // 如果当前值小于min，则替换min的值
        if(min>nums[i])
        min=nums[i];
        // 累加求和
        sum+=nums[i];
        
		}
        
        // 求平均值
       avg=sum/nums.length;
        
		System.out.println("数组中的最大值：" + max);
		System.out.println("数组中的最小值：" + min);
		System.out.println("数组中的平均值：" + avg);
	}
}


对数据排序输出

package HelloWorld;
import  java.util.Scanner;
import java.util.Arrays;
public class HelloWorld {
  public static void main(String[] args) {
      int i;
		// 定义一个字符串数组
		String[] hobbys = { "sports", "game", "movie" };
      
		// 使用Arrays类的sort()方法对数组进行排序
		Arrays.sort(hobbys);
      
		// 使用Arrays类的toString()方法将数组转换为字符串并输出    
		for(i=0;i<hobbys.length;i++)
		System.out.println( hobbys[i]           );
	}
}    	











调用	一个函数

package HelloWorld;
import  java.util.Scanner;
import java.util.Arrays;
public class HelloWorld {
    
    public static void main(String[] args) {
        
		// 创建名为hello的对象
		HelloWorld hello = new HelloWorld();
        
		// 调用hello对象的calcAvg()方法，并将返回值保存在变量avg中
		double avg = hello.calcAvg();
        
		System.out.println("平均成绩为：" + avg);
	}

	// 定义一个返回值为double类型的方法
	public     double   calcAvg() {
        
		double java = 92.5;
		double php = 83.0;
		double avg = (java + php) / 2; // 计算平均值
     
		// 使用return返回值
           return avg;
        
	}
}	



返回最大值
package HelloWorld;
import  java.util.Scanner;
import java.util.Arrays;
 public class HelloWorld {
	    
	    //完成 main 方法
	    public static void main(String[] args) {
	        
	        // 创建对象，对象名为hello
			HelloWorld hello = new HelloWorld(); 
	        
	        // 调用方法并将返回值保存在变量中
	        int maxScore=hello.getMaxAge();
	        
			// 输出最大年龄
			System.out.println("最大年龄为：" + maxScore); 
		}

		/*
		 * 功能：输出学生年龄的最大值 
	     * 定义一个无参的方法，返回值为年龄的最大值
	     * 参考步骤：
	     * 1、定义一个整形数组 ages ，保存学生年龄，数组元素依次为 18 ,23 ,21 ,19 ,25 ,29 ,17
	     * 2、定义一个整形变量 max ,保存学生最大年龄，初始时假定数组中的第一个元素为最大值
	     * 3、使用 for 循环遍历数组中的元素，并与假定的最大值比较，如果比假定的最大值要大，则替换当前的最大值
	     * 4、使用 return 返回最大值
		 */
		public int getMaxAge() {
		int i;
		int ages[]={18,23,21,19,25,29,17};
	    int maxScore=ages[0];
	    for(i=0;i<7;i++)
	    {
	        if(maxScore<ages[i])
	        maxScore=ages[i];
	    }
	    return maxScore; 
		}
	}



请在编辑器中的第 15 行后填写完整方法代码
实现功能：编写带参方法计算两门课程考试成绩的平均分，通过方法的参数传入成绩信息
运行结果为： 平均分：87.5

package HelloWorld;
import  java.util.Scanner;
import java.util.Arrays;
public class HelloWorld {
    public static void main(String[] args) {
        
		// 创建对象，对象名为hello
		HelloWorld hello = new HelloWorld();
		
        // 调用方法，传入两门课程的成绩
		hello.calcAge(94, 81);
	}
public void calcAge(int num1,int num2)
{
double num3 = (num1+num2)/2.0;

System.out.println("平均分："+num3);
}}






排序算法
# include <stdio.h> 

int main()

{
int a[10], i, j, t;
printf("Please input 10 numbers: ");
	for (i = 0; i<10; i++)
scanf_s("%d",&a[i]);
 for (j = 0;j<9; j++)
		  for (i = 0;i<9 - j; i++)
 	 
 if (a[i]>a[i + 1])

 {
		t = a[i];
 a[i] = a[i + 1];
		 	a[i + 1] = t;
	}
   printf("The sorted numbers: ");
 for (i = 0; i<10; i++)
 printf("%4d",a[i]); 
 printf("\n");

}
# include <stdio.h> 

int main()

{
	int a[10] = { 1, 2, 4, 3, 5, 7, 6, 9, 8, 11 };
	
	int i,  t;
  for (i = 0;i<9; i++)
		  for (int j = i;j<9 ; j++)
 	 
 if (a[i]>a[i + 1])

 {
		t = a[i];
 a[i] = a[i + 1];
		 	a[i + 1] = t;
	}
   printf("The sorted numbers: ");
 for (i = 0; i<10; i++)
 printf("%4d",a[i]); 
 printf("\n");

}




8皇后问题 
在一个８×８的棋盘里放置８个皇后，要求这8个皇后两两之间互相都不“冲突”。
#include <stdio.h> 
#include <math.h> 
void search(int);
void printresult();      
int canplace(int, int);      
void place(int, int);       
void takeout(int, int);    
int a[8];              
int main()
{
	search(0);           
}
void search(int m)
{ 
	int i;
	 
	if (m >= 8)               
		printresult();        
	else
 {
 for (i = 0; i<8; i++)        
		{ 
	 if (canplace(m, i))     
	 {	place(m, i);  
 search(m + 1); 
 takeout(m, i);  	}
  		}
	 
	}

}
int canplace(int row, int col)

{
 int i;
 for (i = 0; i<row; i++)
 if (abs(i - row) == abs(a[i] - col) || a[i] == col)

 return(0);
	 
	return(1);

} 
void place(int row, int col)

{ a[row] = col;

}

void takeout(int row, int col)

{ a[row] = -1;

}

void printresult()

{ int i, j;
 for (i = 0; i<8; i++)
 {
 for (j = 0; j<8; j++) 
 if (a[i] == j)

 printf(" A "); 
 else 
	 printf(" . ");
  
		printf("\n");
 
	}
  
	printf("\n");

}

未成功：素数环问题 
把从1到20这20个数摆成一个环，要求相邻的两个数的和是一个素数。 分析：用回溯算法，考察所有可能的排列。
#include <stdio.h> 
#include <math.h> 
void search(int);
void init();             
void printresult();       
int isprime(int);        
void swap(int, int);       
int a[21];                
int main()
{
	init(); 
	search(2);           
}
int isprime(int num)
{ 
	int i, k;
	k =sqrt(num);
	for (i = 2; i <= k; i++)
 
	if (num%i == 0)
 	return(0); 
	return(1);

}
void printresult()

{ 
	int i;
	 
	for (i = 1; i <= 20; i++)
 printf("%3d", a[i]);
 printf("\n");
}
void search(int m)
{
int i;
 if (m>20)                    
	{
	  if (isprime(a[1] + a[20]))       
		printresult();        
			return;
			 
	}
  
	else
 
	{ 
		for (i = m; i <= 20; i++)       
		{ 
			swap(m, i);       
				if (isprime(a[m - 1] + a[m]))   
					search(m + 1);        
				 
					swap(m, i);      
		} 
	}
}
void swap(int m, int i)
{ 
	int t;
	t = a[m];
	a[m] = a[i];
	a[i] = t;
}
void init()
{ 
	int i;
	for (i = 0; i<21; i++)
 	a[i] = i;
}


#include <stdio.h>
#include <math.h> 
void search(int,int);
int canplace(int,int); 
void readdata();           //读入数据
void printresult();        //打印结果 
int a[20][20];             //a数组存放迷宫 
int s,t; int main() 
{  
	int row, col; 
	readdata(); 
	row=s/20; 
	col=s%20;  
	search(row,col);   
	//递归搜索
	printresult(); } 
void search(int row, int col) {
	int r, c; 
	a[row][col] = 1; 
	r = row;                  //左 
	c=col-1;  if(canplace(r,c))      //判断(r,c)位置是否已经走过  
		search(r,c);        //递归搜索(r,c)
	r=row+1;                //下 
	c=col;  if(canplace(r,c))        //判断(r,c)位置是否已经走过 
 
		search(r, c);        //递归搜索(r,c)
	r=row;                  //右 
	c=col+1;  if(canplace(r,c))        //判断(r,c)位置是否已经走过 
		search(r,c);        //递归搜索(r,c) 
	r=row-1;                //上 
	c=col;  if(canplace(r,c))        //判断(r,c)位置是否已经走过  
		search(r,c);        //递归搜索(r,c) 
} 
	void printresult()
	{
		int i, j; 
		for (i = 0; i<20; i++) 
		{
			for (j = 0; j<20; j++)  
				printf("%3d", a[i][j]);  
			printf("\n"); } }
	void readdata()
	{
		int i, j; 
		for (i = 0; i<20; i++) 
		{
			for (j = 0; j<20; j++)  
				scanf_s("%d", &a[i][j]); } }
	int canplace(int row, int col)
	{ 
		if (row >= 0 && row<20 && col >= 0 && col<20 && a[row][col] == 0) 
			return 1;  else   return 0; }




走迷宫
#include<stdio.h>  

void readdata();              
void init();                
int search();                 
int emptyopen();           
int takeoutofopen();        
int canmoveto(int, int, int*, int*, int); 
int isaim(int row, int col);

int used(int, int);               
void addtoopen(int, int);         
int a[12][12];       
int n;             
int open[20], head, tail, openlen = 20;  
int s, t;                         
int main()
{ int number;
 readdata();          
		init();               
		number = search();    
		printf("%d", number);   
}
 
int search()
{ 
	int u, row, col, r, c, i, num;
 	while (!emptyopen())    
	{ 
		u = takeoutofopen();   
			row = u / n;          
			col = u%n; 
		num = a[row][col];    
		for (i = 0; i<4; i++) 
		{ 
			if (canmoveto(row, col, &r, &c, i)) 
			{ 
					if (isaim(r, c))         
						return(num + 1);   
					if (!used(r, c))       
					{ 
						a[r][c] = num + 1;    


							addtoopen(r, c);     
					} 
				} 
		} 
	}

}

int emptyopen()
{
if (head == tail)
	return(1);
else
	return(0);
}
int takeoutofopen()
{
	int u;
	if (head == tail)
{
		printf("errer: stack is empty");
	return(-1);
	}
u = open[head++];
	head = head%openlen;
	return(u);
}
int canmoveto(int row, int col, int *p, int *q, int direction)
{
	int r, c;
	r = row;
	c = col;
	switch (direction)
{
	case 0: c--;            //
	break;
case 1: r++;           //
break;
case 2: c++;           //
	break;
case 3: r--;            //
	}

	*p = r;
*q = c;
if (r<0 || r >= n || c<0 || c >= n)   //
return(0);
	if (a[r][c] == 0)           //
	return(1);
return(0);              //
}
int isaim(int row, int col)
{
	if (row*n + col == t)
		return(1);
	else
		return(0);
}
int used(int row, int col)
{
	if (a[row][col] == 0)      // 0
return(0);
else
	return(1);
}
void addtoopen(int row, int col)
{
int u;
	u = row*n + col;
open[tail++] = u;
tail = tail%openlen;
}
void readdata()
{
	int i, j, row, col;
char str[20];
	scanf_s("%d", &n);
scanf_s("%d%d", &row, &col);  //
		s = row*n + col;
	scanf_s("%d%d", &row, &col);  //
		t = row*n + col;
	gets_s(str);

	for (i = 0; i<n; i++)
	{
	gets_s(str);
	for (j = 0; j<n; j++)
if (str[j] == '.')
a[i][j] = 0;   //0
	else
	a[i][j] = -2;

		}
}
void init()
{
	head = 0;
tail = 1;
	open[0] = s;
}

静态变量
package HelloWorld;
public class HelloWorld {
    
    // 定义静态变量score1
   static int score1 = 86;
static int score2 = 92; 
    // 定义静态方法sum，计算成绩总分，并返回总分
	public  static   int sum() { 
      int i = score1+score2;
      return i ;
	}
	public static void main(String[] args) {
		int allScore = sum();
		System.out.println("总分：" + allScore);
	}
}



任务
小伙伴们，做个练习加深对静态初始化块的理解吧！
在编辑器中，分别通过构造方法、初始化块和静态初始化块对变量进行初始化赋值。
将第 8、20、34 行中代码补充完整
参考运行结果： 
 

package HelloWorld;
public class HelloWorld {
    
    String name; // 声明变量name
	String sex; // 声明变量sex
	static int age;// 声明静态变量age
    
    // 构造方法
	public   HelloWorld     () { 
		System.out.println("通过构造方法初始化name");
		name = "tom";
	}
    
    // 初始化块
	{ 
		System.out.println("通过初始化块初始化sex");
		sex = "男";
	}
    
    // 静态初始化块
	  static      { 
		System.out.println("通过静态初始化块初始化age");
		age = 20;
	}
    
	public void show() {
		System.out.println("姓名：" + name + "，性别：" + sex + "，年龄：" + age);
	}
    
	public static void main(String[] args) {
        
        // 创建对象
		HelloWorld hello = new HelloWorld();
		// 调用对象的show方法
        System.out.println("姓名：" + hello.name );
         System.out.println("性别：" + hello.sex );
          System.out.println("年龄：" +age);
	}
} 
