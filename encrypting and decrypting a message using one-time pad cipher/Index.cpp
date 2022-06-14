#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

// Construct a random key
void build_key(char *key, char *ch)
{
    int i;
    i = strlen(ch);
    key[i] = '\0';
    i = 0;
    while (key[i] != '\0')
    {
        // Random padding ch long key
        key[i] = rand() % 26;
        i++;
    }
}
void encrypt(char *key, char *ch)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        ch[i] = (ch[i] ^ key[i]); // every XORed
        i++;
    }
}
// Decryption and encryption of the code is identical
void decrypt(char *key, char *ch)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        ch[i] = (ch[i] ^ key[i]);
        i++;
    }
}
int main()
{
    char ch[100];  // store information
    char key[100]; // store the key
    printf("Please input a message: ");
    gets(ch);
    // Get a random key
    build_key(key, ch);
    // Encryption
    encrypt(key, ch);
    printf("encrypted message: %s \n\n", ch);
    // Decryption
    decrypt(key, ch);
    printf("decrypted message: %s \n", ch);
    getch();
}
