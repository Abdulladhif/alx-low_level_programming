#ifndef FUNCTION_LIKE_MACRO
#define FUNCTION_LIKE_MACRO

/*
 * Desc: Header file that defines a function-like macro ABS(x)
 *       that computes the absolute value of a number x.
 */

#define ABS(x) (x * ((x < 0) * (-1) + (x > 0)))

#endif /* FUNCTION_LIKE_MACRO */
