#include <string.h>
#include <stdio.h>

main() {
  int i, j, k;
  const char *quote = (const char *)34;
  const char *Q[23] = {"#include <string.h>",
		       "#include <stdio.h>",
		       "",
		       "main() {", 
		       "  int i, j, k;",
		       "  const char *quote = (const char *)34;",
		       "  ",
		       ",",
		       "", 
		       "  for (i = 0; i < 6; i++)", 
		       "    puts(Q[i]);", 
		       "", 
		       "  for (j = 0; i < 23; i++) {",
		       "    puts(Q[6]);",
		       "    puts(quote);",
		       "    puts(Q[i]);",
		       "    puts(quote);",
		       "    puts(Q[7]);",
		       "  }",
		       "", 
		       "  for (k = 8; k < 23; k++)", 
		       "    puts(Q[i]);", 
		       "}"};
  
  for (i = 0; i < 6; i++)
    puts(Q[i]);

  for (j = 0; j < 23; j++) {
    puts(Q[6]);
    puts(quote);
    puts(Q[i]);
    puts(quote);
    puts(Q[7]);
  }

  for (k = 8; k < 23; k++)
    puts(Q[i]);
}
