#include <stdio.h>

int main(){
     int unit = 0;
    printf("\n\n\n");
    printf("----------------------------------------\n");
    printf("- Unit 1 Atomic Structure and Properties\n");
    printf("- Unit 2 Compound Structure and Properties\n");
    printf("- Unit 3 Properties of Substances and Mixtures\n");
    printf("- Unit 4 Chemical Reactions\n");
    printf("- Unit 5 Kinetics\n");
    printf("- Unit 6 Thermochemistry\n");
    printf("- Unit 7 Equilibrium\n");
    printf("- Unit 8 Acid and Bases\n");
    printf("- Unit 9 Thermo and Electro Chem\n");
    printf("----------------------------------------\n");

    printf("Which Unit is the question about: ");
    scanf("%d", &unit);
    printf("The unit you chose is: Unit %d\n",unit);

    if (unit == 1){
        unit_1();
    } else if (unit == 2){
        unit_2();
    } else if (unit == 3){
        unit_3();
    } else if (unit == 4){
        unit_4();
    } else if (unit == 5){
        unit_5();
    } else if (unit == 6){
        unit_6();
    } else if (unit == 7){
        unit_7();
    } else if (unit == 8){
        unit_8();
    } else {
        unit_9();
    }

    
    return 0;


    return 0;
}