#include <stdio.h>	

int main()                            
{
    int nota;                          
  
    printf( "Insira a sua nota:\n" );  
    scanf( "%d", &nota );              
    if ( nota < 10 ) {                  
        printf ("Insuficiente\n" ); 
    }
    else if ( nota <14 ) {            
        printf( "Suficiente\n" );       
    }
    else if ( nota <18 ) {            
        printf( "Bom\n" );       
    }
    else if ( nota <21 ) {            
        printf( "Muito Bom\n" );       
    }
    else {
        printf( "Nota invalida\n" );     
    }
  return 0;
}
