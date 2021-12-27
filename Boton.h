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

/*** 
Los #defines ubicados aqui, suelen escribirse
en letras mayusculas para identificar que son 
del Pre-procesador.
    
Nota 1: Los #define NO terminan en PUNTO Y COMA
ya que la funcion del pre-procesador es reemplazarlos 
tal y como los encuentra

Nota 2: El Pre-procesador es una herramienta
para facilitar la programación en C, pero no
hace parte del lenguaje C.
***/

#ifndef BOTON_H
    #define BOTON_H
    
    #include "project.h"
    
    /*** Funciones Prototipo ***/
    uint8 boton_presionado(void);    
    uint8 boton_soltado(void);    

#endif
/* [] END OF FILE */
