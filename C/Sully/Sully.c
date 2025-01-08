#include <stdio.h>
#include <stdlib.h>

int main()
{
	char src[] = "#include <stdio.h>%2$c#include <stdlib.h>%2$c%2$cint main()%2$c{%2$c%1$cchar src[] = %3$c%4$s%3$c;%2$c%1$cint i = %5$d;%2$c%1$cchar name[10], path[10], command[50];%2$c#ifdef KID%2$c%1$ci--;%2$c#endif%2$c%1$cif ( i < 0 )%2$c%1$c%1$creturn 0;%2$c%1$csprintf(name, %3$cSully_%6$cd%3$c, i);%2$c%1$csprintf(path, %3$cSully_%6$cd.c%3$c, i);%2$c%1$cFILE *f = fopen(path, %3$cw%3$c);%2$c%1$cif (f == NULL)%2$c%1$c%1$creturn 1;%2$c%1$cfprintf(f, src, 9, 10, 34, src, i, 37);%2$c%1$cfclose(f);%2$c%1$csprintf(command, %3$cgcc %6$c1$s -D KID -o %6$c2$s; ./%6$c2$s%3$c, path, name);%2$c%1$csystem(command);%2$c%1$creturn 0;%2$c}%2$c";
	int i = 5;
	char name[10], path[10], command[50];
#ifdef KID
	i--;
#endif
	if ( i < 0 )
		return 0;
	sprintf(name, "Sully_%d", i);
	sprintf(path, "Sully_%d.c", i);
	FILE *f = fopen(path, "w");
	if (f == NULL)
		return 1;
	fprintf(f, src, 9, 10, 34, src, i, 37);
	fclose(f);
	sprintf(command, "gcc %1$s -D KID -o %2$s; ./%2$s", path, name);
	system(command);
	return 0;
}
