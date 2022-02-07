#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

string cipher(string p, int k);
int errorOne(void);

// the formula is c[i] = (p[i] + k) % 26
// where c is cipher text, p is plain text, k is the key

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        const string stringOfKey = argv[1];
        for (int i = 0, n = strlen(stringOfKey); i < n; i++)
        {
            if isalpha(stringOfKey[i])
            {
                return errorOne();
            }
        }
        const int K = atoi(stringOfKey);
        if (K != 0)
        {
            const string P = get_string("plaintext: ");
            const string C = cipher(P, K);
            printf("ciphertext: %s\n", C);
            return 0;
        }
        else
        {
            return errorOne();
        }
    }
    else
    {
        return errorOne();
    }
}

string cipher(string p, int k)
{
    const int strLen = strlen(p);
    string c = p;

    for (int i = 0; i < strLen; i++)
    {
        if isupper(p[i])
        {
            int number = (p[i] - 13 + k) % 26;
            c[i] = 65 + number;
        }
        else if islower(p[i])
        {
            int number = (p[i] - 19 + k) % 26;
            c[i] = 97 + number;
        }
        else
        {
            c[i] = p[i];
        }
    }

    return c;
}

int errorOne(void)
{
    printf("Usage: ./caesar key\n");
    return 1;
}
