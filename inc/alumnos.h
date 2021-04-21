/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

typedef struct alumno_s {
    char apellidos[30];         /**< Variable que guarda el apellido del alumno. */
    char nombres[30];           /**< Variable que guarda el nombre del alumno.*/
    char documento[11];         /**< Variable que guarda el DNI del alumno.*/
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 * @brief Esta funcion se encarga de guardar el nombre y apellido de cada alumno.
 * 
 * @param cadena Variable que guarda los datos del alumno.
 * @param espacio Variable que configura el espacio entre los datos del alumno.
 * @param alumno Estructura que contiene los datos del alumno.
 * @return true Si los datos ingresados no superan el tamaño de la cadena.
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
 * @brief Esta funcion se encarga de mostrar el nombre y apellido de todos los alumnos en formato json.
 * 
 * @param cadena Variable que guarda los datos de todos los alumnos.
 * @param espacio Variable que configura el espacio entre los datos del alumno.
 * @return true Si los datos ingresados no superan el tamaño de la cadena.
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
