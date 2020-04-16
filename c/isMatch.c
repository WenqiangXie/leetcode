#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Runtime: 24 ms, faster than 25.77% of C online submissions for Regular Expression Matching.
// Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Regular Expression Matching.

bool isMatch(char *s, char *p)
{
    if(*p == '\0' && *s == '\0')
        return true;

    if(*p != '\0' && *(p + 1) == '*')
    {
        do
        {
            if(true == isMatch(s, p + 2))
                return true;

            if(*s == '\0')
                break;

            if(*s == *p || *p == '.')
                s++;
        }while(*s == *p || *p == '.');

        return isMatch(s, p + 2);
    }
    else if((*p == '.' && *s != '\0') || (*p == *s))
    {
        return isMatch(s + 1, p + 1);
    }
    else
    {
        return false;
    }
}
