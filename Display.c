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
#include "Display.h"

/*** Funciones ***/
void imprimir(uint8 numero){
    switch(numero){
        case 0:
            Display7seg_Write(cero); 
            break;
        case 1:
            Display7seg_Write(uno); 
            break;
        case 2:
            Display7seg_Write(dos);  
            break;
        case 3:
            Display7seg_Write(tres); 
            break;
        case 4:
            Display7seg_Write(cuatro);
            break;
        case 5:
            Display7seg_Write(cinco); 
            break;
        case 6:
            Display7seg_Write(seis); 
            break;
        case 7:
            Display7seg_Write(siete); 
            break;
        case 8:
            Display7seg_Write(ocho); 
            break;
        case 9:
            Display7seg_Write(nueve); 
            break;
        case 10:
            Display7seg_Write(efe); 
            break;
        default:
            Display7seg_Write(off);       
    }
}

/* [] END OF FILE */
