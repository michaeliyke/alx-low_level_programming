int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int argc, char **argv);
char **strtow(char *str);
int count(char *str);
void fillword(char *word, char *start, char *end);
int isspace_(char *ch);
int count_words(char *str);
#define MAX_SPACES 7
