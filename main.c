#include <stdio.h>

int main() {
    double t1, t2, t3;

    printf("Впишіть три значення t1, t2, t3:\n");
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    
    double time_per_pie = 1 / ((1/t1) + (1/t2) + (1/t3));
    
    printf("Час, необхідний для з'їдання пирога: %.2lf годин\n", time_per_pie);
    
    return 0;
}
