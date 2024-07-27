#ifndef __PRINT_FORMATTERS_H__
#define __PRINT_FORMATTERS_H__

#ifdef LOG_LEVEL_3
    #define LOG_LEVEL_2 1
    #define LOG_LEVEL_1 1
#elif LOG_LEVEL_2
    #define LOG_LEVEL_1 1
#endif

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


#endif  // __PRINT_FORMATTERS_H__