/*
 Визначити квадрат відстані у просторі між двома точками M1 і M2 із їх заданими
координатами (𝑥1, 𝑦1, 𝑧1) і (𝑥2, 𝑦2, 𝑧2)
*/

int main ()
{
    int m1[3] = {1, 2, 3};
    int m2[3] = {2, 3, 4};

    int s = (m2[0] - m1[0]) + (m2[1] - m1[1]) + (m2[2] - m1[2]);
    return (0);
}