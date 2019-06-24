/*
 ============================================================================
 Name        : kalk.c
 Author      : D.Nest
 Version     : 1.0
 Description : С клавиатуры вводится два числа и операция, которую нужно провести над этими числами.
               1) Сложение
               2) Вычитание
               3) Деления
               4) Умножение
               5) Возведение в степень
               6) Факториал
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int kom,a,b,c,n,z,f=1;
    printf("Team:\n\t Sum=1\n\t Difference=2\n\t Multiplication=3\n\t Division=4\n\t Degree=5\n\t Factorial=6\n\t If repeat=7 to stop program\n\t");
    while (z!=7){
    printf("Type the command:");//Ввывод запроса
    scanf("%d",&kom);
    if (kom==1){//Операция сложения
        printf("Entered value a=");//Запрос на первое значение
        scanf("%d",&a);
        printf("Entered value b=");//Запрос на второе значение
        scanf("%d",&b);
        c=a+b;
        printf("Sum=%d\n",c);// Вывод результата
    }
    if (kom==2){//Операция вычитания
        printf("Entered value a=");//Запрос на первое значение
        scanf("%d",&a);
        printf("Entered value b=");//Запрос на второе значение
        scanf("%d",&b);
        c=a-b;
        printf("difference= %d\n",c);// Вывод результата
    }
    if (kom==3){//Операция умножения
        printf("Entered value a=");//Запрос на первое значение
        scanf("%d",&a);
        printf("Entered value b=");//Запрос на второе значение
        scanf("%d",&b);
        c=a*b;
        printf("Multiplication= %d\n",c);// Вывод результата
    }
    if (kom==4){//Операция деления
        printf("Entered value a=");//Запрос на первое значение
        scanf("%d",&a);
        printf("Entered value b=");//Запрос на второе значение
        scanf("%d",&b);
        c=a/b;
        printf("Division= %d\n",c);// Вывод результата
   }
    if (kom==5){//Операция возведения в степень
        printf("Entered value a=");//Запрос на  значение
        scanf("%d",&a);
        printf("Enter the degree n=");// Запос на степень
        scanf("%d",&n);
        c=a;
        if(a>-10 && a<10 && n>0 && n<10){//Условие предела ввода степени
            for(int i=1; i < n; ++i){
                a=a*c;
            }
            printf("Result= %d\n",a);// Вывод результата
        }
        else{
            printf("a does not belong to scope -10<A<10 or n does not belong to scope 0<N<10\n ");//Вывод ошибки если не правильно введен диапазон
        }
    }
     if  (kom==6){//Операция факториал
         printf("Entered value a=");
         scanf("%d",&a);
         while (a>0){
             f*=a;
             a--;
         }
         printf("Factorial= %d\n", f);// Вывод результата
     }
     printf("Repeat?=");//Запрос на повтор
     scanf("%d",&z);
  }
}
