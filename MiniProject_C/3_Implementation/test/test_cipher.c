#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include<string.h>

#include <Cipher.h>
#define PROJECT_NAME    "Cipher"

/* Prototypes for all the test functions */
                        void test_cipher_alphabets(void);
	  	void test_cipher_numeric(void);
	  	void test_cipher_specialCharacter(void);
	  	void test_cipher_whiteSpaces(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/* Modify these two lines according to the project */


 
  CU_add_test(suite,"numeric",test_admin);
  CU_add_test(suite,"alphabets",test_addM);
  CU_add_test(suite,"specialCharacter",test_userReg);
  CU_add_test(suite,"whiteSpaces",test_userLogin);


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


	void test_cipher_alphabets(void)
	{
  		//TEST_ASSERT_EQUAL_CHAR_ARRAY( *p, *d , 1024);
  		//TEST_ASSERT_EQUAL_STRING(encrypt("hello"), decrypt("KHOOR"));
  		//TEST_ASSERT_EQUAL_STRING(encrypt("chaitanya"), decrypt("KHOOR"));
  		CU_ASSERT_TRUE(encrypt("hello") == decrypt("KHOOR"));
	}

    void test_cipher_numeric(void)
    {
       CU_ASSERT_TRUE(encrypt("embedded123") == decrypt("HPEHGGHG123"));
    }

     void test_cipher_specialCharacter(void)
    {
       CU_ASSERT_TRUE(encrypt("l&t technology services") == decrypt("O&W WHFKQRORJB VHUYLFHV"));
    }

     void test_cipher_whiteSpaces(void)
    {
       CU_ASSERT_TRUE(encrypt("life long learning") == decrypt("OLIH ORQJ OHDUQLQJ"));
    }

