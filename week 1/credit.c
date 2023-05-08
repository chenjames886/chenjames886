#include <stdio.h>
#include <cs50.h>

int get_len(long x);

int main(void)
{
    long card;
    long sum=0,head=0,leng=0,now=0,odd=1;
    card = get_long("Number: ");
    leng = get_len(card);

    for (int i = 0; i < leng; i++)
    {
        now = card % 10;
        if (odd == 0)
        {
            if (now >4)
            {
                sum += now * 2 / 10 + now * 2 % 10;
            }
            else
            {
                sum += now * 2;
            }
            odd = 1;
        }
        else
        {
            sum += now;
            odd = 0;
        }
        if (card < 10)
        {
            head += now * 10;
        }
        else if (card < 100)
        {
            head += now;
        }
        card /= 10;
    }

    if (sum % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if ((head == 34 && leng == 15) || (head == 37 && leng == 15))
    {
        printf("AMEX\n");
    }
    else if (head / 10 == 5 &&head % 10 != 0 && head % 10 < 6 && leng == 16)
    {
        printf("MASTERCARD\n");
    }
    else if ((head / 10 == 4 && leng == 13 )||( head / 10 == 4 && leng == 16))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

int get_len(long x)
{
    int l=1;
    while (x > 9)
    {
        l++;
        x /= 10;
    }
    return l;
}
