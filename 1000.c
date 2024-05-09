/*
Task #1 Begin 
#include <stdio.h>
int main ()
{
    int a;
    scanf ("%d", &a);
    int res = a * a * a * a;
    printf ("%d", res);
    return 0;
}*/


/*Task # 2 Begin
#include <stdio.h>
int main ()
{
    int a, res;
    scanf ("%d", &a);
    res = a * a;
    printf ("%d", res);
    return 0;
}*/

/*Task # 30 Integer
#include <stdio.h>
int main ()
{
int year, century;
scanf ("%d", &year);
century = year / 100 + 1;
printf ("%d столетие", century);
return 0;
}*/

/*Task # 15 Integer
#include <stdio.h>
int main ()
{
    int num, res;
    scanf ("%d", &num); // 123
    int tens = (num / 10) % 10; //2
    int hund = num / 100; // 1 
    res = tens * 100 + hund * 10 + (num - ((hund * 100) + (tens * 10)));
    printf ("%d\n", res);
    return 0;
}*/

/*Task # 1 Integer
#include <stdio.h>
int main ()
{
    int met, san;
    scanf ("%d", &san);
    met = san / 100;
    printf ("%d", met);
    return 0;
}*/

/*Task # 2 Integer
#include <stdio.h>
int main ()
{
int kg, tn;
scanf ("%d", &kg);
printf ("%d", kg/100);
return 0;
}*/

/* Task # 3 Integer 
#include <stdio.h>
int main ()
{
    int kb;
    scanf ("%d", &kb);
    printf ("%d", kb*1024);
    return 0;
}*/

/*Task # 4 Integer
#include <stdio.h>
int main ()
{
    int A,B;
    scanf ("%d%d", &A, &B);
    printf ("%d", A/B);
    return 0;
}*/

/*Task # 5 Integer
#include <stdio.h>
int main ()
{
    int A, B;
    scanf ("%d%d", &A, &B);
    printf ("%d", A%B);
    return 0;
}*/

/*Task # 6 Integer 
#include <stdio.h>
int main ()
{
    int num, fd, ld;
    scanf ("%d", &num);
    if ((num <= 99 && num >= 10 || num >= -99 && num <= -10)==1)
    {
        printf ("%d %d", num/10, num % 10);
    }
    else{
        printf ("It's not two-digit number");
        }
    return 0;
}*/

/*Task # 7 Integer
#include <stdio.h>
int main ()
{
    int A;
    scanf ("%d", &A);
    int fd = A/10;
    int sd = A%10;
    printf ("%d %d", fd+sd, fd * sd);
    return 0;
}*/

/*Task # 8 Integer 
#include <stdio.h>
int main ()
{
    int a;
    scanf ("%d", &a);
    printf ("%d", ((a%10)*10)+(a/10));
    return 0;
}*/

/*Task # 9 Integer 
#include <stdio.h>
int main ()
{
    int a; 
    scanf ("%d", &a);
    printf ("%d", a/100);
    return 0;
}*/

/*Task # 10 Integer 
#include <stdio.h>
int main ()
{
    int num;
    scanf ("%d", &num);
    printf ("%d %d", (num%10), ((num%100-num%10)/10));
    return 0;
}*/

/*Task # 11 Integer
#include <stdio.h>
int main ()
{
    int num;
    scanf ("%d", &num); //154
    int ld, fd, md;
    md = (num%100)/10;
    fd = num/100;
    ld = (num%100)%10;
    printf ("%d %d",  md+fd+ld, md*fd*ld); //1 + 5 + 4   
    return 0;
}*/

/*Task # 12 Integer 
#include <stdio.h>
int main ()
{
    int num, fd, sd, td;
    scanf ("%d", &num);
    fd = num / 100;
    sd = (num % 100) / 10;
    td = (num % 100) % 10;
    printf ("%d%d%d ", td, sd ,fd);
    return 0;
}*/

/*Task # 13 Integer 
#include <stdio.h>
int main ()
{
    int num, fd,md,ld;
    scanf ("%d", &num);
    fd = num / 100;
    md = (num%100) / 10 ;
    ld = (num%100) % 10;
    printf ("%d%d%d", md, ld, fd );
    return 0; 
}*/


/*Task # 1 If
#include <stdio.h>
int main (){
int number; 
if (scanf("%d", &number)>=0)
{
    printf ("%d", number + 1);
}else{
    printf ("%d", number);}
    return 0;
}*/

/*Task # 2 If
#include <stdio.h>
int main() {
    int num;
    printf("Введите целое число: ");
    scanf("%d", &num);
    if (num > 0) {
        num = num + 1;
    } else {
        num = num - 2;
    }
    printf("Результат: %d\n", num);
    return 0;
}*/

/* Task # 3 If
#include <stdio.h>
int main() {
    int num;
scanf ("%d", &num);
    if (num > 0) {
        printf("%d\n", num+1);
    } else if (num < 0) {
        printf("%d\n", num-2);
    } else if (num == 0) {
        printf("%d\n", num = 10);
    } else {
        printf("Число не положительное, не отрицательное, не равно нулю и нечетное\n");
    }
    return 0;
}*/

/*Task # 4 IF
#include <stdio.h>

int main() {
    int num1, num2, num3;
    int count = 0;

    printf("Введите три целых числа: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > 0) {
        count++;
    }
    if(num2 > 0) {
        count++;
    }
    if(num3 > 0) {
        count++;
    }
    
    printf("Количество положительных чисел: %d\n", count);

    return 0;
}*/

/*Task # 5 If
#include <stdio.h>
int main ()
{
    int num1, num2, num3;
    int count1 = 0;
    int count2 = 0;
    scanf ("%d %d %d", &num1, &num2, &num3);
    if (num1 > 0){
        count1++;
    }else {
        count2++;
    }
        if (num2 > 0){
        count1++;
    }else {
        count2++;
    }
        if (num3 > 0){
        count1++;
    }else {
        count2++;
    }
    printf ("The amount of positive number is %d, negative is %d", count1, count2);
    return 0;    
}
*/