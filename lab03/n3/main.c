//За заданим радіусом r визначити довжину окружності l, площу кола S та об’єм кулі V
#define pi 3.1415926535
int main ()
{
    float r = 10;
    float r_coub = r * r * r;

    float l = 2 * pi * r;
    float s = pi * (r * r);
    float v = 4 * r_coub / 3 * pi;

    return (0);
}