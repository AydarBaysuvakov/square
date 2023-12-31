#ifndef __IOC__
#define __IOC__
#include "solving_functions.h"

/// @brief Флаг ответа ввода-вывода.
enum IOError
    {
    OK    = 0, //!< Успешный ввод или вывод.
    ERROR = -1 //!< Неуспешный ввод или вывод.
    };

//!@brief Запрашивает коэффиценты квадратного уравнения вида ax^2 + bx + c = 0.
//!
//!На первой строке выводится информация о программе.
//!На второй строке выводится просьба ввести коэфиценты.
//!Далее пользователь должен ввести три действительных числа, коэффиценты a, b, c.
//!
//!@return OK=0, если пользователь вводит верные данные, при ошибке выводит ERROR=-1.
IOError InputCoeffsSTD(Coeffs *coeffs_p);

//!@brief Выводит корни квадратного уравнения вида ax^2 + bx + c = 0.
//!
//!Печатает корни, если они есть.
//!No roots, если корней нет.
//!Any number, если все корнем уравнения является любое число.
//!
//!@return выводит ERROR=-1 при ошибке или OK=0, если ошибок нет.
IOError OutputCoeffsSTD(RootsCount nRoots, Roots *roots_p);
#endif //__IOC__
