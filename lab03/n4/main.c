/*
Відомо, що 1 дюйм дорівнює 2.54 см. Задане значення дюймів перевести в сантиметри та
навпаки, для заданого значення сантиметрів визначити його еквівалент у дюймах.
*/
#define one_inch_in_sm 2.54

int main ()
{
    float inch = 10;
    float sm = 10;
    
    float inch_in_sm = inch * one_inch_in_sm;
    float sm_in_inch = sm / one_inch_in_sm;

    return (0);
}
