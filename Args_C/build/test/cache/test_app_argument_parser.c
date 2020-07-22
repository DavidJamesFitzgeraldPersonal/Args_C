#include "build/temp/_test_app_argument_parser.c"
#include "src/app_argument_parser.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_app_argument_parser_get_argument_seperators_0(void)

{

 char test[] = {'A','B','C','D'};

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((get_argument_seperators(test))), (

((void *)0)

), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_UINT);

}



void test_app_argument_parser_get_argument_seperators_1_0(void)

{

 char test[] = {'-','B','C','D'};

 UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((get_argument_seperators(test))), (

((void *)0)

), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_UINT);

}



void test_app_argument_parser_get_argument_seperators_1_1(void)

{

 char test[] = {'A','-','C','D'};

 UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((get_argument_seperators(test))), (

((void *)0)

), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_UINT);

}



void test_app_argument_parser_get_argument_seperators_2_0(void)

{

 char test[] = {'-','-','C','D'};

 UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((get_argument_seperators(test))), (

((void *)0)

), (UNITY_UINT)(34), UNITY_DISPLAY_STYLE_UINT);

}



void test_app_argument_parser_get_argument_seperators_2_1(void)

{

 char test[] = {'-','B','-','D'};

 UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((get_argument_seperators(test))), (

((void *)0)

), (UNITY_UINT)(40), UNITY_DISPLAY_STYLE_UINT);

}
