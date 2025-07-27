#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Prototype for djb2 hash function */
unsigned long int hash_djb2(const unsigned char *str);

#endif
