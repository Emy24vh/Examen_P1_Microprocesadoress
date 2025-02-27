/*EQUIPO DIAMOND
Vazquez Hernandez Emily Edith
Corpus Renteria Antonio
Enriquez Hernandez Galdino
Hernandez Hernandez Milca Lizbeth
Vergara Torres Cristhian Jesús
Maldonado Vázquez María Celeste
Vargas Jimenez Jessica Janeth
*/

void main() {
    // Configura los puertos A, B, C, D y E como salida
    TRISA = 0x00; // Puerto A como salida
    TRISB = 0x00; // Puerto B como salida
    TRISC = 0x00; // Puerto C como salida
    TRISE = 0x00; // Puerto E como salida

    while(1) {
        PORTA = 0x01; // Enciende el LED en RA0
        PORTB = 0x01; // Enciende el LED en RB0
        PORTC = 0x01; // Enciende el LED en RC0
        PORTE = 0x01; // Enciende el LED en RE0

        Delay_ms(1000); // Espera 1 segundo

        PORTA = 0x00; // Apaga el LED en RA0
        PORTB = 0x00; // Apaga el LED en RB0
        PORTC = 0x00; // Apaga el LED en RC0
        PORTE = 0x00; // Apaga el LED en RE0

        Delay_ms(1000); // Espera 1 segundo
    }
}