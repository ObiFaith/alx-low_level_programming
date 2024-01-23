#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define x
#if x < 0
	#define ABS(x) (-x)
#else
	#define ABS(x) x
#endif
