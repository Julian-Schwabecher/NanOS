#include <stdio.h>


void unit_1(){

}


void unit_2(){

}


void unit_3(){

}


void unit_4(){

}


void unit_5(){

}


void unit_6(){

}


void unit_7(){
    int section = 0;
    printf("1. RICE box\n");
    printf("2. K = Product/Reactans not including solids\n");
    printf("3. Balancing equation\n");
    printf("4. equilbrium rules\n");
    printf("5. Le Chatelier's Principle\n");
    scanf("%d", &section);

    if (section == 1){
        printf("┏━━━┳━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
        printf("┃ R ┃ Your Reaction goes Here with Coefficents       ┃\n");
        printf("┣━━━╋━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
        printf("┃ I ┃ Intial Molarity                                ┃\n");
        printf("┣━━━╋━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
        printf("┃ C ┃ Change in Molarity                             ┃\n");
        printf("┣━━━╋━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
        printf("┃ E ┃ Equilibrium Molarity or Just I + C             ┃\n");
        printf("┗━━━┻━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");

    } else if (section == 5){
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("       Concentration                Temp 🌡️               Pressure 💥\n");
        printf("⬆ Reactant             ⬆ Increased Temp            ⬆ Increased Pressure\n");
        printf("⬆ Product Formation     Favors Endothermic           Favors side with fewer Moles\n");
        printf("\n");
        printf("⬆ Product              ⬇ Decresed Temp           ⬇ Decresed Presure \n");
        printf("⬆ Reactant Formation     Favors Exothermic          Favors side with more Moles\n");
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    }
}

void unit_8(){

}

void unit_9(){
    
}

void balance(){

}

int main(){
     int unit = 0;
    printf("\n\n\n");
    printf("----------------------------------------\n");
    printf("- Unit 0 Sigfigs\n");
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

    typedef void (*FunctionPointer)(void);
    FunctionPointer functionList[] = {unit_1,unit_2,unit_3,unit_4,unit_5,unit_6,unit_7,unit_8,unit_9};
    int units[] = {1,2,3,4,5,6,7,8,9};
    int length_units = sizeof(units)/ sizeof(units[0]);
    for(int i = 0; i<length_units; i++){
        if (units[i] == unit){
            functionList[i]();
        }
    }


    return 0;
}