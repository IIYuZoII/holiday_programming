 //Дано десяткове ціле 4-розрядне число. Визначити суму цифр заданого числа

 int main ()
 {
    int x = 2232;
    int l_n = x % 10;
    int th_n = x / 10 % 10;
    int sec_n = x / 100 % 10;
    int f_n = x / 1000;

    int res = f_n + sec_n + th_n + l_n;
    return (0);
 }