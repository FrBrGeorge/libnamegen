#include "namegen.h"

#define SZ 40
char name[SZ];

#test tnamegen
	unsigned long seed = 100500;
	namegen(name, sizeof(name), "!sV'i", &seed);
	ck_assert_str_eq(name, "Aleei'bum");
