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

#ifndef DISPLAY_H
    #define DISPLAY_H
    
    #include "project.h"
    
    /*** MACROS - DEFINES ***/
                    //hgfedcba  LOGICA DIRECTA
    #define cero    0b00111111
    #define uno     0b00000110
    #define dos     0b01011011
    #define tres    0b01001111
    #define cuatro  0b01100110
    #define cinco   0b01101101
    #define seis    0b01111101
    #define siete   0b00000111
    #define ocho    0b01111111
    #define nueve   0b01100111
    #define efe     0b01000111 
    #define off     0x00
    
    /*                //abcdefgh  LOGICA INVERSA
    #define cero    0b10000001
    #define uno     0b10011111
    #define dos     0b00100101
    #define tres    0b00001101
    #define cuatro  0b10011001
    #define cinco   0b01001001
    #define seis    0b01000001
    #define siete   0b00011101
    #define ocho    0b00000001
    #define nueve   0b00011001
    #define efe     0b00011101 
    #define off     0x00
    */
    /*** Funciones Prototipo ***/
    void imprimir(uint8 numero);
    
#endif

/* [] END OF FILE */
