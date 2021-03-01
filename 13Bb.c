# include <stdio.h> 
int main( ) 
{  
int  size ;  
scanf ( "%d", &size ) ;  
int  arr[ size ] ;  
for ( i = 1 ; i <= size ; i++ )  
{    
scanf ( "%d", &arr[ i ] ) ;   
printf ( "%d\n", arr[ i ] ) ;  
}   
return 0 ; 
} 
