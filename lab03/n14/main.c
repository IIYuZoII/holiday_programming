/*
Дана сума грошей у гривнях. Перевести гривні в долари, євро, російські рублі. Курси
валют (долар, євро, російський рубль) задати в вигляді констант
*/
#define dollar 27.21
#define rub 0.37
#define euro 30.83
int main ()
{
    float uah = 1;
    float uah_in_dollar = uah * dollar;
    float uah_in_rub = uah * rub;
    float uah_in_euro = uah * euro;

    return (0);
}