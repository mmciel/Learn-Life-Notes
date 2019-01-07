#include <stdio.h>

struct F_birthday{
    int year;
    int month;
    int day;
};
typedef struct F_birthday F_d;

struct F_friend{
    char name[30];
    F_d brday;
};

typedef struct F_friend F_f;

int main()
{
    F_f a[20];
    int n;
    scanf("%d", &n);
    getchar();
    int i;
    F_f min;
    min.brday.year = 0;
    min.brday.month = 0;
    min.brday.day = 0;
    for(i = 0;i<n;++i)
    {
        scanf("%s", &a[i].name);
        scanf("%d", &a[i].brday.year);
        scanf("%d", &a[i].brday.month);
        scanf("%d", &a[i].brday.day);

        if(a[i].brday.year>min.brday.year)
            min = a[i];
        if(a[i].brday.year==min.brday.year)
        {
            if(a[i].brday.month>min.brday.month)
                min = a[i];

            if(a[i].brday.month==min.brday.month)
                if(a[i].brday.day>=min.brday.day)
                    min = a[i];
        }
    }

    printf("%s %d-%02d-%02d\n", min.name,min.brday.year,min.brday.month,min.brday.day);

    return 0;
}
