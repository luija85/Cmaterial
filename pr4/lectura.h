#ifndef LECTURA_H_INCLUDED
#define LECTURA_H_INCLUDED

/*
 * Funcion: leer_real
 *	Se solicita un dato mediante un mensaje. Lee un n?mero real.
 *	Si lo que ha introducido el usuario no es un n?mero real v?lido,
 *	insiste en la lectura hasta que el valor sea correcto.
 * Par?metro de entrada:
 *      mensaje: Cadena de caracteres. Pasada por referencia. Mensaje
 *		a mostrar al usuario para solicitar el dato. (No hay que poner los :
 *      los a?ade la funci?n)
 * Par?metro de salida:
 *      dato: Real. Pasado por referencia. El n?mero real le?do.
 */
void leer_real ( const char mensaje[], double *dato );

/*
 * Funcion: leer_entero
 *	Se solicita un dato mediante un mensaje. Lee un n?mero entero.
 *	Si lo que ha introducido el usuario no es un n?mero entero v?lido,
 *	insiste en la lectura hasta que el valor sea correcto.
 * Par?metro de entrada:
 *      mensaje: Cadena de caracteres.  Pasada por referencia. Mensaje
 *		a mostrar al usuario para solicitar el dato.(No hay que poner los :
 *      los a?ade la funci?n)
 * Par?metro de salida:
 *      dato: Entero. Pasado por referencia. El n?mero entero le?do.
 */
void leer_entero ( const char mensaje[], int *dato );

/*
 * Funcion: leer_entero_en_rango
 *	Se solicita un dato mediante un mensaje. Lee un n?mero entero y si est? dentro del rango
 *  incluidos los l?mites finaliza, y si no lo vueleve a pedir.
 *	Si lo que ha introducido el usuario no es un n?mero entero v?lido,
 *	insiste en la lectura hasta que el valor sea correcto.
 * Par?metros de entrada:
 *      mensaje: Cadena de caracteres.  Pasada por referencia. Mensaje
 *		a mostrar al usuario para solicitar el dato.(No hay que poner los :
 *      los a?ade la funci?n)
 *      rInf: Entero. Rango inferior.
 *      sSup: Entero. Rando superior.
 * Par?metro de salida:
 *      dato: Entero. Pasado por referencia. El n?mero entero le?do.
 */
void leer_entero_en_rango ( const char mensaje[], int *dato, int rInf, int rSup );

/*
 * Funcion: leer_texto
 *	Se solicita un texto mediante un mensaje.
 *  Lee una l?nea completa y elimina la marca de fin de l?nea. Si
 *	la l?nea que ha escrito el usuario es solo el fin de l?nea
 *	considera que el dato no es v?lido, insistiendo hasta que el
 * 	usuario escriba una l?nea de una longitud v?lida.
 *  El tama?o m?ximo v?lido de la l?nea ser? de 2 caracteres menos
 *  que el tama?o de la cadena en la que se almacena.
 * Par?metros de entrada:
 *      mensaje: Cadena de caracteres. Pasada por referencia. Mensaje
 *		a mostrar al usuario para solicitar el dato.(No hay que poner los :
 *      los a?ade la funci?n)
 *	tam: Entero. Pasado por valor. Tama?o de dato.
 * Par?metro de salida:
 *      dato: Cadena de caracteres. Pasado por referencia. La l?nea le?da
 *		sin la marca de fin de l?nea.
 */
void leer_texto ( const char mensaje[], char dato[], int tam );


#endif // LECTURA_H_INCLUDED