#include <stdio.h>

float function(float x, float y);
void euler(float function(float, float), int n, float h);

int main(void)
{
    int n;
    float h;
    printf("迭代次数: ");
    scanf("%d", &n);
    printf("步长: ");
    scanf("%f", &h);

    euler(function, n, h);
    return 0;
}

float function(float x, float y)
{
    float d = (y * y + y) / x;

    return d;
}

void euler(float function(float, float), int n, float h)
{
    float x = 1;
    float y = 1;
    
    for (int i = 0; i < n; i++)
    {
        y = y + function(x, y) * h;
        x = x + h;
        printf("x = %f, y = %f\n", x, y);
    }
}