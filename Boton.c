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

#include "Boton.h"

/*** Funciones ***/
uint8 boton_presionado(void){
    if (Boton_control_Read() == 0){
        return 0;
    }
    else{
        return 1;
    }
}

uint8 boton_soltado(void){
    return ~Boton_control_Read();
}


 
/* [] END OF FILE */
