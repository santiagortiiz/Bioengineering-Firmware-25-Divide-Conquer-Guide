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
#include "project.h"

#include "Boton.h"
#include "Display.h"
#include "Logica_conteo.h"

int main(void)  // Coordinador de Modelo
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    isr_contador_StartEx(cronometro);
    
    /*** Inicializacion de Componentes ***/
    Contador_Start();
                      //hgfedcba
    Display7seg_Write(0b01000000);
    CyDelay(200);
    
    for(;;)
    {
        /*** Codigo Limpio ***/
        if (boton_presionado()) {
            actualizar_estado(); 
        }
        
    }
}

/* [] END OF FILE */
