#include<stdio.h>
#include<conio.h>
void main(){
int a,b,i,j;
clrscr();
for(i=5;i>=1;i--){
for(j=1;j<=i;j++){
printf("%d",j);
}
printf("\n");
}
for(a=1;a<=5;a++){
for(b=1;b<=a;b++){
printf("%d",b);
}
printf("\n");
}
getch();
}