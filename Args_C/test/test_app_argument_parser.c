#include "unity.h"

#include "app_argument_parser.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_app_argument_parser_get_argument_seperators_0(void)
{
	char test[] = {'A','B','C','D'};
	TEST_ASSERT_EQUAL_UINT(0, get_argument_seperators(test));
}

void test_app_argument_parser_get_argument_seperators_1_0(void)
{
	char test[] = {'-','B','C','D'};
	TEST_ASSERT_EQUAL_UINT(1, get_argument_seperators(test));
}

void test_app_argument_parser_get_argument_seperators_1_1(void)
{
	char test[] = {'A','-','C','D'};
	TEST_ASSERT_EQUAL_UINT(1, get_argument_seperators(test));
}

void test_app_argument_parser_get_argument_seperators_2_0(void)
{
	char test[] = {'-','-','C','D'};
	TEST_ASSERT_EQUAL_UINT(2, get_argument_seperators(test));
}

void test_app_argument_parser_get_argument_seperators_2_1(void)
{
	char test[] = {'-','B','-','D'};
	TEST_ASSERT_EQUAL_UINT(2, get_argument_seperators(test));
}
