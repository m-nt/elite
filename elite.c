#include <stdio.h>
#include <ctype.h>

int
main(int argc, char *argv[])
{
static char *elitedan[] = {
       "4", "B", "<", "|)", "3", "F", "@", "|-|", "|", "J", "|<",
       "|_", "|\\/|", "0", "P", "Q", "R", "5", "7", "</", "\\/",  
       "|/\\|", "><", "Y", "Z"
       };
static char *elitepeter[] = {
       "4", "B", "<", "|)", "3", "F", "@", "|-|", "|", "J", "|<",
       "|_", "|\\/|", "|\\|", "0", "P", "Q", "R", "5", "7", "</", "\\/",  
       "|/\\|", "><", "Y", "Z"
       };
       int c, p;

       if (argc == 2) {
               p = 0;
               if (argv[1][p] == '-') p++;
               if (argv[1][p] == 'p') p = 1;
                       else p = 0;
       }

       while((c=getchar())!=EOF)  {
               if(islower(c)) 
                       c -= 32;

               if (isspace(c)) {
                       printf("%c", c);
                       continue;
               }

               c -= 65;
               if (c >= 0 && c <= 25) {
                       if (p)
                               printf("%s", elitepeter[c]); 
                       else
                               printf("%s", elitedan[c]); 

                       fflush(stdout);
               }
       }
       printf("\n");
}
