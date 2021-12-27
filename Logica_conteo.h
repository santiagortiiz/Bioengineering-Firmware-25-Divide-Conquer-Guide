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

#ifndef LOGICA_CONTEO_H
    #define LOGICA_CONTEO_H
    
    #include "project.h"
    
    /*** MACROS - DEFINES ***/
    #define CONTEO_CONGELADO 0
    #define CONTEO_ASCENDENTE 1
    #define CONTEO_DESCENDENTE 2
    
    #define LIMITE_MAXIMO (contador_maestro > 9)
    #define LIMITE_MINIMO (contador_maestro == 0)
    
    #define MS_MAX_VAL 500 // 500ms
    
    /*** Prototipo de variable Global ***/
    extern uint8 contador_maestro;
    extern int estado; 
    
    /*** Funciones Prototipo ***/
    void actualizar_estado(void);
    
    /*** Interrupciones Prototipo ***/
    CY_ISR_PROTO(cronometro);   
    
#endif


/* [] END OF FILE */
