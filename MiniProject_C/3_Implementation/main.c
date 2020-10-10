#include <stdio.h>
#include <ctype.h>
#define MAXSIZE 1024

#include "cipher.h"					/* Add include file*/
#include "test_cipher.h"



char encrypt(char*);
char decrypt(char*);

int menu();

int main(void)
{
char choice[2], s[MAXSIZE];      /*choice helps to select between encryption and decryption for the user*/

 while(1)
 {
 menu();

 gets(choice);

 if((choice[0]=='e')||(choice[0]=='E'))
 {
  puts("Input text to encrypt (encrypts lowerCase only)->");
  gets(s);
  encrypt(s);
 }
 else if((choice[0]=='d')||(choice[0]=='D'))
 {
  puts("Input text to decrypt decrypts upperCase only)->");
  gets(s);
  decrypt(s);
 }
 else
    break;
 }
test_main();
 return 0;
}

/* menu prints to screen the available options to users */
int menu()
{
 puts("To encrypt, input e or E\n");
 puts("To decrypt, input d or D\n");
 puts("To exit, input any other letter\n");
 puts("Your choice:->\n");
 return 0;
}
