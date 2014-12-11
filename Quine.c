#include <string.h>
#include <stdio.h>

main() {
  int i, j, k;
  const char *quote = (const char *)22;
  const char *Q[18] = {"#include <string.h>",
		       "#include <stdio.h>",
		       "",
		       "main() {", 
		       "  int i, j, k;",
		       "  const char *quote = (const char *)22",
		       "  ",
		       ",",
		       "", 
		       "  for (i = 0; i < 6; i++)", 
		       "    printf(\"%s\", Q[i]);", 
		       "", 
		       "  for (j = 0; i < 18; i++)", 
		       "    printf(\"%s%s%s%s%s\", Q[6], quote, Q[i], quote, Q[7]);", 
		       "", 
		       "  for (k = 8; k < 18; k++)", 
		       "    printf(\"%s\", Q[i]);", 
		       "}"};
  
  for (i = 0; i < 6; i++)
    printf("%s", Q[i]);

  for (j = 0; j < 18; j++)
    printf("%s%s%s%s%s", Q[6], quote, Q[i], quote, Q[7]);

  for (k = 8; k < 18; k++)
    printf("%s", Q[i]);
}
