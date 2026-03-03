#include <stdio.h>
#include <string.h>

void unit_1(){  
    int section = 0;
    printf("\n\n\n");
    printf("----------------------------------------\n");
    printf("1. Factors of production\n");
    printf("2. Production Possibilites Curve (PPC)\n");
    printf("3. Abs/Comp Advantage\n");
    printf("----------------------------------------\n\n");
    printf("Which one do you need: ");
    scanf("%d", &section);
    printf("\n");

    if (section == 1){

        printf("- Land\n");
        printf("- Labor\n");
        printf("- Capital\n");
        printf("- Entrepernuership\n");



    } else if (section == 2){
        printf("      ----------- PPC Curve ----------\n\n");
        printf("         ┃ ‾‾‾¯¯¯───____\n");
        printf("         ┃              ‾¯─_\n");
        printf("         ┃                  ‾─_\n");
        printf("         ┃·····················⟍ <----- Efficent\n");
        printf("         ┃                     · ⧹ \n");
        printf("Product A┃                     ·  ⧹\n");
        printf("         ┃                     ·   ⧹\n");
        printf("         ┃                     ·    |\n");
        printf("         ┃                     ·    |\n");
        printf("         ┃                     ·    |\n");
        printf("         ┃                     ·    |\n");
        printf("         ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("                  Product b\n\n");
        printf("A firm can produce at any point in the region bounded by the x an y axis and the PPC curve,\nhowever the curve marks the production that will result in the most effcient usage of resources.\nAny point beyond the curve is not able by a firm based on the resources they have access to.");

    } else {
        printf("");
    }

}

void unit_2(){
    int section = 0;
    printf("\n\n\n");
    printf("----------------------------------------\n");
    printf("1. Supply Demand Graph\n");
    printf("2. Supply Demand Shifts\n");
    printf("3. Elasticity\n");
    printf("4. Abs/Comp Advantage\n");
    printf("----------------------------------------\n\n");
    printf("Which one do you need: ");
    scanf("%d", &section);
    printf("\n");

    if(section == 1){
        printf("\n\n\n");
        printf(" -----  Supply Demand Curve -----\n\n");

        printf("   ┃   ╲         ╱  S            \n");
        printf("   ┃    ╲       ╱               \n");
        printf("   ┃     ╲     ╱               \n");
        printf("   ┃      ╲   ╱                 \n");
        printf("   ┃       ╲ ╱                  \n");
        printf("P  ┃········╳                    \n");
        printf("   ┃       ╱·╲                   \n");
        printf("   ┃      ╱ · ╲                  \n");
        printf("   ┃     ╱  ·  ╲                 \n");
        printf("   ┃    ╱   ·   ╲                \n");
        printf("   ┃   ╱    ·    ╲   D           \n");
        printf("   ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("                Q\n");

    } else if(section == 2) {
        
    } else if (section == 3){
        printf("Elasticity is (%%Δ in quantity)/(%%Δ in price)\n\n");

        printf("┃       ┃            ┃               \n");
        printf("┃       ┃            ┃               \n");
        printf("┃       ┃            ┃               \n");
        printf("┃       ┃            ┃  ━━━━━━━━━━━━ \n");
        printf("┃       ┃            ┃               \n");
        printf("┃       ┃            ┃               \n");         
        printf("┗━━━━━━━━━━━━━━      ┗━━━━━━━━━━━━━━ \n");
        printf("     EDC = 0               EDC = ∞   \n");

    } else {
        printf("   ┃ \\      S₁ /     /        \n");
        printf("   ┃  \\       /     /   S₂    \n");
        printf("   ┃   \\     /     /          \n");
        printf("   ┃    \\   /     /           \n");
        printf("   ┃     \\ /     /            \n");
        printf("P  ┃      ╳     /              \n");
        printf("   ┃     / \\   /              \n");
        printf("   ┃    /   \\ /               \n");
        printf("   ┃   /     ╳                 \n");
        printf("   ┃  /     / \\               \n");
        printf("   ┃ /     /   \\  D           \n");
        printf("   ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("                Q\n");


        printf("   ┃   \\         /  S            \n");
        printf("   ┃    \\       /               \n");
        printf("   ┃     \\     /                \n");
        printf("   ┃      \\   /                 \n");
        printf("   ┃       \\ /                  \n");
        printf("P  ┃        ╳                    \n");
        printf("   ┃       / \\                  \n");
        printf("   ┃      /   \\                 \n");
        printf("   ┃     /     \\                \n");
        printf("   ┃    /       \\               \n");
        printf("   ┃   /         \\  D           \n");
        printf("   ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("                Q\n");

        printf(" | \\         /  S          \n");
        printf(" |  \\       /              \n");
        printf(" |   \\     /               \n");
        printf(" |    \\   /                \n");
        printf(" |     \\ /                 \n");
        printf("P|      x                   \n");
        printf(" |     / \\                 \n");
        printf(" |    /   \\                \n");
        printf(" |   /     \\               \n");
        printf(" |  /       \\              \n");
        printf(" | /         \\  D          \n");
        printf(" ---------------------\n");
        printf("            Q\n");
    }

   
    

    
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

int main(){
    int unit = 0;
    printf("\n\n\n");
    printf("----------------------------------------\n");
    printf("- Unit 1 (Econ concepts)\n");
    printf("- Unit 2 (Supply and Demand)\n");
    printf("- Unit 3 (Production cost and  perfect comp)\n");
    printf("- Unit 4 (imperfect comp)\n");
    printf("- Unit 5 (Factor markets)\n");
    printf("- Unit 6 (Market failures and Gov)\n");
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
    } else if (unit ==5){
        unit_5();
    } else {
        unit_6();
    }

    
    return 0;
}