/*
Дано 4-розрядне число у системі числення p (наприклад, 8). Визначити його еквівалент
у десятковій системі числення. На вході система числення повинна бути у діапазоні [2..10]
Крч мне влом делать эту херабору так что я сделал просто перевод числа из десятички в двоичку
Кста переменная sys и проверка связанная с ней тут по факту не нужны)))
*/

int main ()
{
    int sys = 10;
    int x = 7272;
    int arr[16];

    // int two0 = 1;
    // int two1 = 2;
    // int two2 = 2 * 2;
    // int two3 = two2 * 2;
    // int two4 = two3 * 2;
    // int two5 = two4 * 2;
    // int two6 = two5 * 2;
    // int two7 = two6 * 2;
    // int two8 = two7 * 2;
    // int two9 = two8 * 2;
    // int two10 = two9 * 2;
    // int two11 = two10 * 2;
    // int two12;

    int temp = x;
    int count = 0;
    if (sys == 10)
    {
        for (int i = 0; i >= 0; i++)
        {
            arr[i] = temp % 2;
            temp = temp / 2;
            count++;
            if (temp < 2)
            {
                arr[i + 1] = 1;
                count++;
                break;
            }
        }
    }

    int res[count];
    temp = 0;
    for (int i = count - 1; i >= 0; i--)
    {
        res[temp] = arr[i];
        temp++;
    }

    return (0);
}