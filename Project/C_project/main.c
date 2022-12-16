// project 32 convolution
// Holopura Anna, комп'ютерна математика 1, 2 курс
/* На базі структури (класу) Tensor реалізувати методи конволюцій та
оберених конволюцій, що використовуються при машинному аналізі
зображень та розпізнаванні. При цьому ці конволюції влючають роботу з
щонайменше чотирма варіантами різних паддінгів. */
// виклик функцій з Convolution_C.c та перевірка їх роботи

#include "Convolution_C.c"

int main()
{
    Tensor_c m1;
    Tensor_c m2;
    Tensor_c c1;
    Tensor_c c2;
    Tensor_c c3;

    printf("1 matrix\n");
    inp(&m1);
    printf("2 matrix\n");
    inp(&m2);


    printf("Convolution\n");
    c1 = conv(&m1, &m2);
    outp(&c1);
    del(&c1);

    printf("Convolution with padding\n");
    c2 = conv_with_padding(&m1, &m2);
    outp(&c2);
    del(&c2);

    printf("Circle convolution\n");
    c3 = circle_conv(&m1, &m2);
    outp(&c3);
    del(&c3);

    del(&m1);
    del(&m1);
}