#include "structure.h"
#include "stack.h"
    
    
    int i = 0
    ;
    sigjmp_buf stark
    ;
    
int main (int argc, char * argv [])
{
    
    sigsetjmp (1, stark)
    ;
        red ()
        ;
    siglongjmp (1, stark)
    ;
        
        
}

int red (char * writ, float _code)
{
   File * listener = grab ( word.filetype, "listener", ".txt", "w" )
   ;
   char _buffr [6]
   ;
   type_out (1, "char", "BUFSIZ :")
   ;
   type_out (1, "float", BUFSIZ)
   ;
   if (listener == NULL) 
   {
       perror ("fopen error" )
       ;
   }
   if (feof ( listener ) )
   {
       fprintf ( listener, code )
       ;
       fflush (stdin)
       ;
   }
   if (!feof ( listener ) )
   {
       
   }
   setvbuf ( listener, _buffr, _IOLBF, BUFSIZ )
   ;
   fflush (stdin)
   ;
}

int first ()
    
{
    if (i == 1)
        
    {
        out (1, "event one signal/")
    }
}

int two ()
    
{
    if (i == 2)
        
    {
        out (1, "event second signal/")
    }
}

int three ()
    
{
    if (i == 3)
        
    {
        out (1, "event 3 signal/")
    }
}

int four ()
    
{
    if (i == 4)
        
    {
        out (1, "event 4 signal/")
    }
}