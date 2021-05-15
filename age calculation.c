#include<stdio.h>
 int main() {
 int x;
 scanf("%d",&x);
 int p,q,r;
 p= x/365;
 q = x-365;
 r= q;
 printf("%d ano(s)\n",p);
 printf("%d mes(es)\n",q);
 printf("%d dia(s)\n",r);
 return 0;

}
