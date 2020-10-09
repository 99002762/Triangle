#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <function.h>
#include <string.h>
#define PROJECT_NAME "function"

/* Prototypes for all the test functions */
void test_perimeter(void);
void test_area(void);
void test_Type(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/* Add your test functions in this format for testing*/
  CU_add_test(suite, "perimeter_of_triangle_func", test_perimeter);
  CU_add_test(suite, "area_of_triangle_func", test_area);
   CU_add_test(suite, "TypeOfTriangle_func", test_Type);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}
/* Write all the test functions */
void test_perimeter(void) {
  CU_ASSERT( 12.00 == perimeter_of_triangle(3,4,5));
  CU_ASSERT(9.00 == perimeter_of_triangle(3,3,3));
  CU_ASSERT(6.00 == perimeter_of_triangle(2,2,2));
  CU_ASSERT(30.00 == perimeter_of_triangle(5,12,13));
  CU_ASSERT(56.00 == perimeter_of_triangle(7,24,25));

  /* Dummy fail*/
 // CU_ASSERT(10 == perimeter_of_triangle(3,4,5));
}

void test_area(void) {
  CU_ASSERT(6.00 == area_of_triangle(3,4,5));
  CU_ASSERT(3.90 == area_of_triangle(3,3,3));
  CU_ASSERT(30.00 == area_of_triangle(5,12,13));
  CU_ASSERT(84.00 == area_of_triangle(7,24,25));

  /* Dummy fail*/
 // CU_ASSERT(8.00 == area_of_triangle(3,4,5));
}
void test_Type(void) {
  CU_ASSERT(3 == TypeOfTriangle(3,4,5));
  CU_ASSERT(1 == TypeOfTriangle(3,3,3));
  CU_ASSERT(3 == TypeOfTriangle(5,12,13));
  CU_ASSERT(3 == TypeOfTriangle(7,24,25));

  /* Dummy fail*/
  //CU_ASSERT(8 == TypeOfTriangle(3,4,5));
}
