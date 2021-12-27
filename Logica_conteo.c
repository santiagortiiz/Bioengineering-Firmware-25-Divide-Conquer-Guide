/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include "Logica_conteo.h"
#include "Boton.h"
#include "Display.h"

/*** Variables ***/
int estado = CONTEO_CONGELADO; 
uint8 contador_maestro = 0;

static volatile uint32 ms = 0;  // static: Esta variable es privada para Logica_conteo.c 
                                // volatile: El compilador no optimiza la variable
                                // volatile se usa para variables que se modifican en interrupciones

/*** Funciones ***/
void actualizar_estado(void){
    switch(estado){
        case CONTEO_CONGELADO: 
            estado = CONTEO_ASCENDENTE;
            break;
        case CONTEO_ASCENDENTE:
            estado = CONTEO_DESCENDENTE;
            break;
        case CONTEO_DESCENDENTE:
            estado = CONTEO_CONGELADO;
            break;
        default:
            estado = CONTEO_CONGELADO;
            break;
    }
}

/*** Interrupciones ***/
CY_ISR(cronometro){
    ms++;
    if (ms == MS_MAX_VAL){
        ms = 0;
        switch(estado){
            case CONTEO_ASCENDENTE:
                if (LIMITE_MAXIMO) contador_maestro = 0;
                else contador_maestro++;
                imprimir(contador_maestro);
                break;
                
            case CONTEO_DESCENDENTE:
                if (LIMITE_MINIMO)contador_maestro = 9;   
                else contador_maestro--;   
                imprimir(contador_maestro);
                break;
                
            case CONTEO_CONGELADO:
                imprimir(efe);
                break;
                
            default:
                imprimir(off);
                break;
        }
    }
}


/* [] END OF FILE */
