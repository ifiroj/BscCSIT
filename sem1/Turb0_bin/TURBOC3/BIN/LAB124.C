#include <stdio.h>
#include <conio.h>
#include <string.h>
struct complex
{
int r;int im;};
void display(struct complex ,struct complex);
void main ()
{
struct complex c1;
struct complex c2;
clrscr ();
printf ("Enter real and imaginary value for c1:\n");
scanf ("%d%d",&c1.r,&c1.im);
printf ("Enter real and imaginary value for c2:\n");
scanf ("%d%d",&c2.r,&c2.im);
display (c1,c2);
getch ();
}
void display (struct complex x,struct complex y)
{
struct complex c3;
c3.r=x.r+y.r;
c3.im=x.im+y.im;
printf ("Result is %d+%di",c3.r,c3.im);
}
