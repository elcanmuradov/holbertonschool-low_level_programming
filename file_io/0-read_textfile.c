#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - funct
 * @filename: name of file
 * @letter: size 
 * Return:
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE file = fopen(filename,"r");
char *buffer;
buffer = malloc(sizeof(char) * letters);
return (fgets(buffer,letters,file));
}
