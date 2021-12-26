/*
 За заданим опором трьох резисторів r1, r2, r3, які з’єднані паралельно, визначити
загальний опір
*/

int main ()
{
    float r1 = 5;
    float r2 = 10;
    float r3 = 15;
    
    float temp_up = r1 * r2 * r3;
    float temp_down = r1 * r2 + r2 * r3 + r1 * r3;

    float res = temp_up / temp_down;

    return (0);
}