#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "Calculator1.h"
void testcase(void)
{
    assert(calc_1(1,2,1)== 3);
 printf("\n Executed,OK");
  assert(calc_1(1,-2,1)== -1);
 printf("\nExecuted,OK");
 assert(calc_1(-2,-3,1)== -5);
 printf("\nExecuted,OK");
 assert(calc_1(2,2,2)== 0);
 printf("\nExecuted,OK");
 assert(calc_1(5,-3,2)== 8);
 printf("\nExecuted,OK");
 assert(calc_1(-2,-4,2)== 2);
 printf("\nExecuted,OK");
 assert(calc_1(44,0,4)== 0);
 printf("\nExecuted, ok");
}
void main(void){
 printf("Calculator testing using assert :");

testcase();

}
