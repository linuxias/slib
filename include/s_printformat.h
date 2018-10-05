#ifndef __S_PRINT_FORMAT_H__
#define __S_PRINT_FORMAT_H__

#define S_COLOR_RED     "\x1b[31m"
#define S_COLOR_GREEN   "\x1b[32m"
#define S_COLOR_YELLOW  "\x1b[33m"
#define S_COLOR_BLUE    "\x1b[34m"
#define S_COLOR_MAGENTA "\x1b[35m"
#define S_COLOR_CYAN    "\x1b[36m"
#define S_COLOR_RESET   "\x1b[0m"

#define PRINT printf

#define PRINT_RED(fmt , args...) \
	do { \
		PRINT(S_COLOR_RED ""fmt"\n" S_COLOR_RESET , ##args); \
	} while (0)

#define PRINT_GREEN(fmt , args...) \
	do { \
		PRINT(S_COLOR_GREEN ""fmt"\n" S_COLOR_RESET , ##args); \
	} while (0)

#define PRINT_YELLOW(fmt , args...) \
	do { \
		PRINT(S_COLOR_YELLOW ""fmt"\n" S_COLOR_RESET , ##args); \
	} while (0)

#define PRINT_BLUE(fmt , args...) \
	do { \
		PRINT(S_COLOR_BLUE ""fmt"\n" S_COLOR_RESET , ##args); \
	} while (0)

#define PRINT_MAGENTA(fmt , args...) \
	do { \
		PRINT(S_COLOR_MAGENTA ""fmt"\n" S_COLOR_RESET , ##args); \
	} while (0)

#define PRINT_CYAN(fmt , args...) \
	do { \
		PRINT(S_COLOR_CYAN ""fmt"\n" S_COLOR_RESET , ##args); \
	} while (0)

#endif /* __S_PRINT_FORMAT_H__ */
