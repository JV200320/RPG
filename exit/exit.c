#include "exit.h"
#include "../utils/utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * @brief Sai do programa
 * 
 * @return int Retorna o valor 0 de sucesso
 */
int Exit()
{
    for (int i = 3; i >= 0; i--)
    {
        system(CLEAR);
        printf("Saindo...\n");
        printf("TIMER: %d\n", i);
        sleep(1);
    }
    return 0;
}