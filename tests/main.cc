/* libSU3: Test driver */

#include <stdio.h>
#include <limits.h>

#include "SU3.h"
#include "test.h"

int tests_run;
int tests_passed;

/* TODO: Autogenerate a list of tests */
void test_sqrat();
void test_sqrat_arithmetic();
void test_dimension();
void test_degeneracy();

int main()
{
    /* TODO: Autogenerate code like this for each top-level test */
    tests_run = 0;
    tests_passed = 0;
    fprintf(stderr, "\nTesting sqrat...\n");
    test_sqrat();
    fprintf(stderr, "sqrat: %d/%d tests passed\n", tests_passed, tests_run);

    tests_run = 0;
    tests_passed = 0;
    fprintf(stderr, "\nTesting sqrat_arithmetic...\n");
    test_sqrat_arithmetic();
    fprintf(stderr, "sqrat_arithmetic: %d/%d tests passed\n", tests_passed, tests_run);

    tests_run = 0;
    tests_passed = 0;
    fprintf(stderr, "\nTesting dimension...\n");
    test_dimension();
    fprintf(stderr, "dimension: %d/%d tests passed\n", tests_passed, tests_run);

    tests_run = 0;
    tests_passed = 0;
    fprintf(stderr, "\nTesting degeneracy...\n");
    test_degeneracy();
    fprintf(stderr, "degeneracy: %d/%d tests passed\n", tests_passed, tests_run);

    return 0;
}
