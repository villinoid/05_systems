# include <stdio.h>
# include <stdlib.h>
int main(){
	char c="c";
	int i=1;
	long l=1;
	printf("&c: %p\n",&c);
	printf("&c: %ul\n",&c);
	printf("&i: %p\n",&i);
	printf("&i: %ul\n",&i);
	printf("&l: %p\n",&l);
	printf("&l: %ul\n",&l);
	
	char *cp=&c;
	int *ip=&i;
	long *lp=&l;
	printf("cp: %p\n",cp);
	printf("ip: %p\n",ip);
	printf("lp: %p\n",lp);
	
	*cp="a";
	*ip=2;
	*lp=3;
	printf("c: %c\n",c);
	printf("i: %d\n",i);
	printf("l: %ld\n",l);
	
	unsigned int ui=25;
	int *uip1=&ui;
	char *uip2=&ui;
	printf("uip1: %p uip1 points to: %u\n",uip1,*uip1);
	printf("uip2: %p uip2 points to: %u\n",uip2,*uip2);
	
	printf("ui in decimal: %u\n",ui);
	printf("ui in hexadecimal: %x\n",ui);
	printf("1st byte:%u\n",*uip2);
	uip2++;
	printf("2nd byte:%u\n",*uip2);
	uip2++;
	printf("3rd byte:%u\n",*uip2);
	uip2++;
	printf("4th byte:%u\n",*uip2);
	uip2-=3;
	
	(*uip2)++;
	printf("1st byte:%hhu\n",*uip2);
	uip2++;
	(*uip2)++;
	printf("2nd byte:%hhu\n",*uip2);
	uip2++;
	(*uip2)++;
	printf("3rd byte:%hhu\n",*uip2);
	uip2++;
	(*uip2)++;
	printf("4th byte:%hhu\n",*uip2);
	uip2-=3;
	
	*uip2+=16;
	printf("1st byte:%hhu\n",*uip2);
	uip2++;
	*uip2+=16;
	printf("2nd byte:%hhu\n",*uip2);
	uip2++;
	*uip2+=16;
	printf("3rd byte:%hhu\n",*uip2);
	uip2++;
	*uip2+=16;
	printf("4th byte:%hhu\n",*uip2);
	printf("modified value after all procedures in decimal: %u\n",*uip1);
	printf("modified value after all procedures in hexadecimal: %x\n",*uip1);
	return 0;
}
	
