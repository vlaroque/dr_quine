#include <stdio.h>
void print_me(char *str) { printf(str, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9, 34, str, 34, 10, 9, 10, 9, 10, 10, 10, 10, 10, 10); }
int main()
{
	/*
	 * comm in main
	 */
	char str[] = "#include <stdio.h>%cvoid print_me(char *str) { printf(str, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9, 34, str, 34, 10, 9, 10, 9, 10, 10, 10, 10, 10, 10); }%cint main()%c{%c%c/*%c%c * comm in main%c%c */%c%cchar str[] = %c%s%c;%c%cprint_me(str);%c%creturn 0;%c}%c/*%c * comm outside program%c */%c";
	print_me(str);
	return 0;
}
/*
 * comm outside program
 */
