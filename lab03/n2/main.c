// Визначити відстань, яка пройдена фізичним тілом за час t, якщо тіло рухається з постійним
// прискоренням a і має в початковий момент часу швидкість v0  v = v 0 + a t
// в метрах на секунду делаю => ответ также в метрах

int main ()
{
    int a = 10;
    int t = 20;
    int v_s = 0;
    int v_f = v_s + a * t;
    int v = (v_s + v_f) / 2;

    int s = v * t;

    return (0);
}