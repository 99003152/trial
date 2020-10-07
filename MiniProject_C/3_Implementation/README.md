One simple and basic method to encrypt a message is using Caesar’s cipher. 
It is a very simple form of encryption, where we take letters one by one from the original message and translate it into an encrypted text.
A C program design that will encrypt and decrypt the text using Caesars cipher.

On a high-level, will do the following:
	The source text that needs to be encrypted is given in lower case. But if we need to decrypt the text, it should be given in upper case.
  When it is encrypted, each letter will have its ANSII code increased for three places. When it is decrypted, it will have its code moved toward left.
	The letter ‘x’ will be translated into ‘A’, the letter ‘y’ is transformed into the letter ‘B’, and the ‘z’ will change into ‘C’.
	The program will handle only English letters and each input text will not be longer that one sentence. At the end of the input sentence it should have the marker for end ‘.’.
	The longest sentence is 1024 letters long. This prevents the user to input the sentence that would over populate the size of the program.
	The numbers in the input will not be changed.
	The blank symbol or any non-letter symbol will not be changed.
	The decryption is reverse. If we input the encrypted text, we should get decrypted text as the output.
