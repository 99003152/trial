/**
* @file cipher.h
*
*/

#ifndef __CIPHER_H__
#define __CIPHER_H__

/**
* Implements Caeser Cipher by encryption and decryption functions
* @param[in] text for which encryption or decryption has to be performed
* @return Ciphertext for encryption and plaintext for decryption
* @note special characters, white spaces and numeric values remain unchanged
* @note encryption is done only for lower-case alphabets and decryption is done only for upper-case alphabets
*/
char encrypt(char*str);
char decrypt(char*str);

#endif /* #ifndef __CIPHER_H__ */
