
#ifndef comparator_h
#define comparator_h

#include <stddef.h> // size_t

#define COMPARE_UNEQUAL 0
#define COMPARE_EQUAL 1

#define COMPARE_CASE_INSENSETIVE 0
#define COMPARE_CASE_SENSETIVE 1

int compare(const char* user_str, size_t user_str_len, const char* templ_str, int case_sensetive);

#endif /* ifndef comparator_h */