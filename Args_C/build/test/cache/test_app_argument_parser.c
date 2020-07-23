#include "@@@@app_argument_parser.c"
#include "src/app_argument_parser.c"
#include "build/temp/_test_app_argument_parser.c"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"






void setUp(void)

{

}



void tearDown(void)

{

}



void test_app_argument_parser_get_number_of_char_in_string_0(void)

{

 char test[] = {'A','B','C','D'};

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((get_number_of_char_in_string(test, '-'))), (

((void *)0)

), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_UINT);

}



void test_app_argument_parser_get_number_of_char_in_string_1_0(void)

{

 char test[] = {'-','B','C','D'};

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((get_number_of_char_in_string(test, '-'))), (

((void *)0)

), (UNITY_UINT)(23), UNITY_DISPLAY_STYLE_UINT);

}



void test_app_argument_parser_get_number_of_char_in_string_1_1(void)

{

 char test[] = {'A','-','C','D'};

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((get_number_of_char_in_string(test, '-'))), (

((void *)0)

), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_UINT);

}



void test_app_argument_parser_get_number_of_char_in_string_2_0(void)

{

 char test[] = {'-','-','C','D'};

 UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((get_number_of_char_in_string(test, '-'))), (

((void *)0)

), (UNITY_UINT)(35), UNITY_DISPLAY_STYLE_UINT);

}



void test_app_argument_parser_get_number_of_char_in_string_2_1(void)

{

 char test[] = {'-','B','-','D'};

 UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((get_number_of_char_in_string(test, '-'))), (

((void *)0)

), (UNITY_UINT)(41), UNITY_DISPLAY_STYLE_UINT);

}



void test_app_argument_parser_is_valid_flag_invalid_0(void)

{

 char test[] = {'A'};

 do {if (!(is_valid_flag(test))) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(47)));}} while(0);

}



void test_app_argument_parser_is_valid_flag_invalid_1(void)

{

 char test[] = {'-', 'l'};

 do {if (!(is_valid_flag(test))) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(53)));}} while(0);

}



void test_app_argument_parser_is_valid_flag_set_logging_valid(void)

{



 char test[] = {'-', 'L', 0};

 do {if ((is_valid_flag(test))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(60)));}} while(0);

}



void test_app_argument_parser_is_valid_flag_set_logging_invalid(void)

{

 char test[] = {'-', 'L', 'x'};

 do {if (!(is_valid_flag(test))) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(66)));}} while(0);

}
