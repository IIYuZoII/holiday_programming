#include <math.h>
/*
Знайти периметр і площу рівнобедреного трикутника за умови, що задані координати його
вершин. Враховуємо, що основа трикутника паралельна осі OX
p=a+b+c
S=1/2*a*h
h = sqrt ((a^2-b^2)/4)
без библиотек и функций делать не варик :(
*/

int main ()
{
    int a[2] = {3, 6};
    int b[2] = {10, 20};
    int c[2] = {7, 6};

    int temp_ab_bc_x;
    int temp_ab_bc_y;

    int temp_ac_x;
    int temp_ac_y;

    int ab_bc;
    int ac;

    int h;
    int p;
    int s;

    for (int i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            temp_ab_bc_x = (b[i] - a[i]) * (b[i] - a[i]);
            temp_ac_x = (c[i] - a[i]) * (c[i] - a[i]);
        }
        else
        {
            temp_ab_bc_y = (b[i] - a[i]) * (b[i] - a[i]);
            temp_ac_y = (c[i] - a[i]) * (c[i] - a[i]);
        }
    }

    ab_bc = sqrt(temp_ab_bc_x + temp_ab_bc_y);
    ac = sqrt(temp_ac_x + temp_ac_y);

    //Если число отрицательное то меняем его знак
    int temp = (ab_bc * ab_bc - ac * ac)/4;
    if (temp < 0)
    {
        temp = -temp;
    }
    h = sqrt(temp);

    p = ab_bc * 2 + ac;
    s = (1 * ac * h) / 2;

    return (0);
}


