/* ************************************ */
/*                                      */
/* vc_strstr.c                          */
/*                                      */
/* By: Marcelo, Chin, Giada             */
/*                                      */
/* ************************************ */

#include <stdio.h>

char *vc_strstr(char *str, char *to_find)
{
    while (*str) 
	  {
		    char *Begin = str;
		    char *pattern = to_find;
		    
		    
		    while (*str && *pattern && *str == *pattern) 
			{
			      str++;
			      pattern++;
		    }
		     
		    if (!*pattern)
		    	  return Begin;
		    	  
		    str = Begin + 1;	 
	  }
	  return NULL;
}

int main()
{
	char s1 [] = "This is www.firmcodes.com";
   
    printf ("Returned String 1: %s\n", vc_strstr(s1, "firmcodes"));
 
	return 0;
}