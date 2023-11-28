#include <stdio.h>


struct pocket
{
    int ball[2];
};


int main(int argc, char *argv[])
{
    int item[2] = {1,2};

    int *hand;

    hand = &(item[0]);

    struct pocket right;

    right.ball[0] = item[0];

    printf("%d ", item[0]);
    printf("%d ", item[1]);

    printf("%d ", hand);

    printf("%d ", *hand);

    return 0;
}