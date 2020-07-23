#include "unity.h"

// app_argument_parser contains static functions. Include the whole C file in order to test!
#include "app_argument_parser.c"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_app_argument_parser_get_number_of_char_in_string_0(void)
{
	char test[] = {'A','B','C','D'};
	TEST_ASSERT_EQUAL_UINT(0, get_number_of_char_in_string(test, ARG_SEPERATOR));
}

void test_app_argument_parser_get_number_of_char_in_string_1_0(void)
{
	char test[] = {'-','B','C','D'};
	TEST_ASSERT_EQUAL_UINT(1, get_number_of_char_in_string(test, ARG_SEPERATOR));
}

void test_app_argument_parser_get_number_of_char_in_string_1_1(void)
{
	char test[] = {'A','-','C','D'};
	TEST_ASSERT_EQUAL_UINT(1, get_number_of_char_in_string(test, ARG_SEPERATOR));
}

void test_app_argument_parser_get_number_of_char_in_string_2_0(void)
{
	char test[] = {'-','-','C','D'};
	TEST_ASSERT_EQUAL_UINT(2, get_number_of_char_in_string(test, ARG_SEPERATOR));
}

void test_app_argument_parser_get_number_of_char_in_string_2_1(void)
{
	char test[] = {'-','B','-','D'};
	TEST_ASSERT_EQUAL_UINT(2, get_number_of_char_in_string(test, ARG_SEPERATOR));
}

void test_app_argument_parser_is_valid_flag_invalid_0(void)
{
	char test[] = {'A'};
	TEST_ASSERT_FALSE(is_valid_flag(test));
}

void test_app_argument_parser_is_valid_flag_invalid_1(void)
{
	char test[] = {'-', 'l'};
	TEST_ASSERT_FALSE(is_valid_flag(test));
}

void test_app_argument_parser_is_valid_flag_set_logging_valid(void)
{
	// CARE! Must null terminate this
	char test[] = {'-', ARG_LOG, 0};
	TEST_ASSERT_TRUE(is_valid_flag(test));
}

void test_app_argument_parser_is_valid_flag_set_logging_invalid(void)
{
	char test[] = {'-', ARG_LOG, 'x'};
	TEST_ASSERT_FALSE(is_valid_flag(test));
}