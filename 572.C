#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k;
clrscr();
for(i=5;i>=1;i--){
for(k=i;k<5;k++){
printf(" ");
}
for(j=i;j>=1;j--){
printf("%d",j);
}
printf("\n");
}
getch();
}