#include <check.h>
#include "namegen.h"

#define SZ 40
char name[SZ];

START_TEST(tnamegen) {
	unsigned long seed = 100500;
	namegen(name, sizeof(name), "!sV'i", &seed);
	ck_assert_str_eq(name, "QQevo");
}

int main(void)
{
    return 0;
}

