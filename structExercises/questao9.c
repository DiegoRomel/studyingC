#include <stdio.h>
#include <string.h>


struct horario {
    
    int hora;
    int minuto;
    int segundo;
};

int main() {
    
    struct horario relogio[5];

   
    for (int i = 0; i < 5; i++) {
        
        printf("Digite a hora do relogio %d: ",i+1);
        scanf("%d", &relogio[i].hora);
        printf("Digite o minuto do relogio %d : ",i+1);
        scanf("%d", &relogio[i].minuto);
        printf("Digite os segundos do relogio %d : ", i+1);
        scanf("%d", &relogio[i].segundo);
    }

  
    
        struct horario maiortempo = relogio[0];

        for (int i = 1; i < 5; i++){
        if (relogio[i].hora > maiortempo.hora ||
            (relogio[i].hora == maiortempo.hora &&
            relogio[i].minuto > maiortempo.minuto) ||
            (relogio[i].hora == maiortempo.hora &&
             relogio[i].minuto == maiortempo.minuto &&
             relogio[i].segundo > maiortempo.segundo)) {
             maiortempo = relogio[i];
        }
    }

printf("maior horario eh %d:%d:%d",maiortempo.hora,maiortempo.minuto,maiortempo.segundo);

    return 0;
}