#include <stdio.h>
int main() {
int t[7];
int f=0;
for(int i=0;i<7;i++) {
printf("Ticket number of person %d: ",i+1);scanf("%d",&t[i]);printf("\n");
}
printf("_ Gate report _\n");
for(int j=0;j<7;j++) {
for(int k=0;k<j;k++) {
if(t[k]==t[j]) {
printf("FROGGED:person %d used ticket %d,which was already being used by %d\n",j+1,t[j],k+1);
f++;
break;}
}

}

printf("Geniune: %d,Forgged: %d",7-f,f);




return 0;}