# include <stdio.h>

int main(int argc, char *argv[])
{
    int i, k, l=3;          /* Declares variables K & 1 and initializes 1 */
    {                       /* Start of nested block */
        // printf("i = %d" + i);
        k = l+l;            /* Initializes k */
        l = 2*i+k;          /* Error: using uninitialized variable, i
                             leads to incorrect results. */
        int m = 2*l+k;      /* Declares & initializes variable.
                             local to block */
        printf("m = %d", m);    /* Prints text & value of integer variable m. */
                            /* End of nested block. */
}
                  /* Illegal because m no longer exists. */
    return 0;
}