#include <stdio.h>

void unit_1(){ 
    printf("\n\n\n");

}

void unit_2(){
    printf("\n\n\n");
 
}

void unit_3(){
    printf("\n\n\n");
    
}

void unit_4(){
    printf("\n\n\n");
     
}

void unit_5(){
    printf("\n\n\n");
}

void unit_6(){
    printf("\n\n\n");
}

void unit_7(){
    printf("\n\n\n");
}

void unit_8(){
    printf("\n\n\n");
}

void unit_9(){
    printf("\n\n\n");
}

void unit_10(){
    int section = 0;
    printf("\n\n\n");
    printf("----------------------------------------\n");
    printf("- Tests for convergence\n");
    printf("- p-series and Harmonic Series\n");
    printf("- Power Series\n");
    printf("- Taylor Polynomial\n");
    printf("- Lagrange Error\n");
    printf("----------------------------------------\n");
    scanf("%d", &section);

    if (section == 1){
        printf("n-th term Test\n");
        printf("Itegral Test\n");
        printf("Comparison Test\n");
        printf("Ratio Test\n");
        printf("Alternating Series Test\n");
        printf("Ratio Test\n");
    }

}



int main(){

    int unit = 0;
    printf("\n\n\n");
    printf("----------------------------------------\n");
    printf("- Unit 1 Limits and Continuity\n");
    printf("- Unit 2 Differentiation Intro\n");
    printf("- Unit 3 Differentiation Extened\n");
    printf("- Unit 4 Differentiation Applications\n");
    printf("- Unit 5 Differentiation Analytical Applications\n");
    printf("- Unit 6 Integration\n");
    printf("- Unit 7 Differential Equations\n");
    printf("- Unit 8 Applications of Integration\n");
    printf("- Unit 9 Parametric Equations, Polar, Vector-Valued Functions\n");
    printf("- Unit 10 Infinite Sequences and Series\n");
    printf("----------------------------------------\n");

    printf("Which Unit is the question about: ");
    scanf("%d", &unit);
    printf("The unit you chose is: Unit %d\n",unit);
    
    typedef void (*FunctionPointer)(void);
    FunctionPointer functionList[] = {unit_1,unit_2,unit_3,unit_4,unit_5,unit_6,unit_7,unit_8,unit_9,unit_10};
    int units[] = {1,2,3,4,5,6,7,8,9,10};
    int length_units = sizeof(units)/ sizeof(units[0]);
    for(int i = 0; i<length_units; i++){
        if (units[i] == unit){
            functionList[i]();
        }
    }

    return 0;
}