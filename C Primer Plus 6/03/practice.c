//
// Created by Administrator on 2023/7/18.
//
#include <stdio.h>

//int main(void)
//{
//    float weight;
//    float value;
//    printf("Are you worth weight in platinum?\n");
//    printf("Let's enter your weight in pounds: ");
//    scanf("%f", &weight);
//    value = 1700.0*weight*14.5833;
//    printf("Your weight in platinum is worth $%.2f.\n", value);
//    printf("eat more to maintain your value.\n");
//    return 0;
//}

//int main(void)
//{
//    int ten = 10;
//    int two = 2;
//    printf("right:");
//    printf("%d minus %d is %d\n", 11);
//    printf("%d minus %d is %d\n", ten, two, ten-two);
//    printf("wrong:");
//    return 0;
//}

//int main(void)
//{
//    int x = 100;
//    printf("dec = %d; octal = %o; hex=%x\n", x,x,x);
//    printf("dec = %d; octal = %#o; hex = %#x\n", x,x,x);
//    return 0;
//}

//int main(void)
//{
//    int i = 2147483647;
//    unsigned int j = 4294967295;
//    printf("%d %d %d\n",i,i+1, i+2);
//    printf("%u %u %u\n",j,j+1,j+2);
//    return 0;
//}

//int main(void)
//{
//    printf("Size of int: %d bytes\n", sizeof(int));
//    printf("Size of char: %d bytes\n", sizeof(char));
//    return 0;
//}

//int main(void)
//{
//    char grade = 'b';
//    char a = 'FATE';
//    printf("grade is: %d\n", grade);
//    printf("a is: %d\n", a);
//    return 0;
//}
//
//int main(void)
//{
//    char a = '\'';
//    printf("%c", a);
//}

//int main(void)
//{
//    char ch;
//    printf("please enter a character.\n");
//    scanf("%c", &ch);
//    printf("the code for %c is %d.\n", ch, ch);
//    return 0;
//}

//#include <inttypes.h>
//
//int main(void)
//{
//    int32_t me32;
//    me32 = 45933945;
//    printf("First, assume int32_t is int: ");
//    printf("me32 = %d\n", me32);
//    printf("Next, let's not make any assumptions.\n");
//    printf("Instead, use a \"macro\" from inttypes.h: ");
//    printf("me32 = %" PRId32 "\n", me32);
//    return 0;
//}

/*以两种方式显示float类型的值*/
//int main(void)
//{
//    float aboat = 32000.0;
//    double abet = 2.14e9;
//    double dip = 5.32e-5;
//    printf("%f can be written %e\n", aboat, aboat);
//    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
//    printf("%f can be written %e\n", abet, abet);
//    printf("%Lf can be written %Le\n", dip, dip);
//    return 0;
//}

//int main(void)
//{
//    float toobig = 3.4E38*100.0f;
//    printf("%e\n", toobig);
//    return 0;
//}

//int main(void)
//{
//    float a,b;
//    b = 2.0e20 + 1.0;
//    a = b -2.0e20;
//    printf("%f \n", a);
//    return 0;
//}

//int main(void)
//{
//    int imate = 2;
//    long shot = 53456;
//    char grade = 'A';
//    float log = 2.71828;
//    printf("The odds against the %d were %ld to 1.\n", imate, shot);
//    printf("A score of %f is not an %c grade.\n", log, grade);
//}

//int main(void) /* this program is perfect*/
//{
//    int cows, legs, integer;
//    printf("How many cow legs did you count?\n");
//    scanf("%d", &legs);
//    cows = legs / 4;
//    printf("That implies there are %d cows.\n", cows);
//}

int main(void)
{
    int a;
    printf("你好");
    scanf("%d", &a);
    printf("对应的字符为：%c\n", a);
    return 0;
}









