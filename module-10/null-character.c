#include <stdio.h>
#include <string.h>

int main()
{
    // অটোমেটিক '\0' যুক্ত
    char str1[20] = "Bangladesh";
    
    // ম্যানুয়ালি '\0' যুক্ত
    char str2[20] = {'D', 'h', 'a', 'k', 'a', '\0'};

    // এরে মেমরিতে কত জায়গা নেয় (২০) সেটিকে একটি ইন্টিজার ভেরিয়েবল কত জায়গা নেয়(৪) তা দিয়ে ভাগ করা হচ্ছে। তাহলে ভাগফল আসবে ২০ / ৪ = ৫ যা হচ্ছে আমাদের এরের একচুয়াল সাইজ।
    printf("%d", sizeof(str1) / sizeof(int));

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    return 0;
}