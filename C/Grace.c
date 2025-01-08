#include <stdio.h>
#define KID_FILE "Grace_kid.c"
#define CODE_SRC "#include <stdio.h>%c#define KID_FILE %cGrace_kid.c%c%c#define CODE_SRC %c%s%c%c#define FT(CODE, PATH) int main() {FILE *f = fopen(PATH, %cw%c); fprintf(f, CODE, 10, 34, 34, 10, 34, CODE, 34, 10, 34, 34, 10, 10, 10, 10, 10); fclose(f); return 0;}%cFT(CODE_SRC, KID_FILE)%c/*%c * commentary%c */%c"
#define FT(CODE, PATH) int main() {FILE *f = fopen(PATH, "w"); fprintf(f, CODE, 10, 34, 34, 10, 34, CODE, 34, 10, 34, 34, 10, 10, 10, 10, 10); fclose(f); return 0;}
FT(CODE_SRC, KID_FILE)
/*
 * commentary
 */
