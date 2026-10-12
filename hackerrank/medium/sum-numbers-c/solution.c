#include <stdio.h>


	int main() {
    int num1 = 4, num2 = 6;
    float float1 = 4.0, float2 = 6.0;

    
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &float1, &float2);

    
    printf("%d %d\n", num1 + num2, num1 - num2);
  
    
    printf("%.1f %.1f\n", float1 + float2, float1 - float2);

    
    return 0;
}
