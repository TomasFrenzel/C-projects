#include <stdio.h>

int myKalkulacka(int cislo1,int cislo2,char znak){
    if(znak == '+'){
        return cislo1 + cislo2;
    }else if(znak == '-'){
        return cislo1 - cislo2;
    }else if(znak == '*'){
        return cislo1 * cislo2;
    }else if(znak == '/'){
        if(cislo2 != 0){
        return cislo1 / cislo2;
        }else{
            printf("nelze delit 0");
            return 0;
        }
    }else{
        printf("Musite zadat jendo ze ctyr operatoru: + - * /");
        return 0;
    }
    

}
int main(){
    int cislo1;

    printf("Toto je moje kalkulačka\nPostupujte dle pokynu\n Zadejte prvni cislo: ");
    scanf("%d", &cislo1);

    int cislo2;
    printf("Zadejte druhe cislo: ");
    scanf("%d", &cislo2);
    char znak;
    printf("zadejte operator(+ - * /): ");
    scanf(" %c",&znak);
    int vysledek;
    vysledek = myKalkulacka(cislo1, cislo2, znak);
    printf("Vysledek: %d\n", vysledek);

    return 0;

}