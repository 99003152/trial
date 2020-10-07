#include "unity.h"
#include "cipher.h"

/** Required by the unity test framework */
	void setUp()
	{	}
/** Required by the unity test framework */
	void tearDown()
	{	}

	void test_cipher_alphabets(void)
	{
  		//TEST_ASSERT_EQUAL_CHAR_ARRAY( *p, *d , 1024);
  		//TEST_ASSERT_EQUAL_STRING(encrypt("hello"), decrypt("KHOOR"));
  		//TEST_ASSERT_EQUAL_STRING(encrypt("chaitanya"), decrypt("KHOOR"));
  		TEST_ASSERT_TRUE(encrypt("hello") == decrypt("KHOOR"));
	}

    void test_cipher_numeric(void)
    {
       TEST_ASSERT_TRUE(encrypt("embedded123") == decrypt("HPEHGGHG123"));
    }

     void test_cipher_specialCharacter(void)
    {
       TEST_ASSERT_TRUE(encrypt("l&t technology services") == decrypt("O&W WHFKQRORJB VHUYLFHV"));
    }

     void test_cipher_whiteSpaces(void)
    {
       TEST_ASSERT_TRUE(encrypt("life long learning") == decrypt("OLIH ORQJ OHDUQLQJ"));
    }

	char test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_cipher_alphabets);
	  	RUN_TEST(test_cipher_numeric);
	  	RUN_TEST(test_cipher_specialCharacter);
	  	RUN_TEST(test_cipher_whiteSpaces);

  		return UNITY_END();
	}
