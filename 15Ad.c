# include <stdio.h> 
int main( )  
{  
char  s[ ] = "Churchgate: no church no gate" ;  
char  t[ 25 ] ;  
char  *ss, *tt ;  ss = s ;  
while ( *ss != '\0' )          *tt++ = *ss++ ;  
printf ( "%s\n", t ) ;  
return 0 ; 
} 
