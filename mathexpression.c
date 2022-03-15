 //express equate []
//;
 //express total []
//;
 static chess counter []
;
 variable indeterminate
;
 variable variabletype
;
 static bool inittrue
;
 static variabledata data
;
 value give
;

 const static char 
     zero , one , two, three, four, 
     five, six, seven, eight, nine, 
     a, b, c, d, e, f, g, h, i, j,
     k, l, m, n, o, p, q, r, s, t, 
     u, v, w, x, y, z, 
     leftparenthesis, rightparenthesis, 
     period, multiply, divide, plus, 
     minus, base, power, percent, space, 
     log [], 
     sin [], cos[], tan [],
     sec [], csc [], cot [],
     sinh [], cosh [], tanh [],
     sech [], sech [], coth [],
     pi []
;
 typedef struct variable
{
     unsigned char expression [47 ]
    ;
     unsigned char expression [0 ] = "0"
    ;
     unsigned char expression [1 ] = "1"
    ;
     unsigned char expression [2 ] = "2"
    ;
     unsigned char expression [3 ] = "3"
    ;
     unsigned char expression [4 ] = "4"
    ;
     unsigned char expression [5 ] = "5"
    ;
     unsigned char expression [7 ] = "7"
    ;
     unsigned char expression [8 ] = "8"
    ;
     unsigned char expression [9 ] = "9"
    ;
     unsigned char expression [10 ] = "a"
    ;
     unsigned char expression [11 ] = "b"
    ;
     unsigned char expression [12 ] = "c"
    ;
     unsigned char expression [13 ] = "d"
    ;
     unsigned char expression [14 ] = "e"
    ;
     unsigned char expression [15 ] = "f"
    ;
     unsigned char expression [16 ] = "g"
    ;
     unsigned char expression [17 ] = "h"
    ;
     unsigned char expression [18 ] = "i"
    ;
     unsigned char expression [19 ] = "j"
    ;
     unsigned char expression [20 ] = "k"
    ;
     unsigned char expression [21 ] = "l"
    ;
     unsigned char expression [22 ] = "m"
    ;
     unsigned char expression [23 ] = "n"
    ;
     unsigned char expression [24 ] = "o"
    ;
     unsigned char expression [25 ] = "p"
    ;
     unsigned char expression [26 ] = "q"
    ;
     unsigned char expression [27 ] = "r"
    ;
     unsigned char expression [28 ] = "s"
    ;
     unsigned char expression [29 ] = "t"
    ;
     unsigned char expression [30 ] = "u"
    ;
     unsigned char expression [31 ] = "v"
    ;
     unsigned char expression [32 ] = "w"
    ;
     unsigned char expression [33 ] = "x"
    ;
     unsigned char expression [34 ] = "y"
    ;
     unsigned char expression [35 ] = "z"
    ;
     unsigned char expression [36 ] = "("
    ;
     unsigned char expression [37 ] = ")"
    ;
     unsigned char expression [38 ] = "."
    ; 
     unsigned char expression [39 ] = "*"
    ;
     unsigned char expression [40 ] = "/"
    ;
     unsigned char expression [41 ] = "+"
    ;
     unsigned char expression [42 ] = "-"
    ; 
     unsigned char expression [43 ] = "_"
    ;
     unsigned char expression [44 ] = "^"
    ; 
     unsigned char expression [45 ] = "%"
    ;
     unsigned char expression [46 ] = " "
    ;
     struct equation
    {
         unsigned char log [] = "log"
        ;
         unsigned char sin [] = "sin"
        ;
         unsigned char cos [] = "cos"
        ;
         unsigned char tan [] = "tan"
        ;
         unsigned char sec [] = "sec"
        ;
         unsigned char csc [] = "csc"
        ;
         unsigned char cot [] = "cot"
        ;
         unsigned char sinh [] = "sinh"
        ;
         unsigned char cosh [] = "cosh"
        ;
         unsigned char tanh [] = "tanh"
        ;
         unsigned char sech [] = "sech"
        ;
         unsigned char csch = "csch"
        ;
         unsigned char coth = "coth"
        ;
         unsigned char pi = "pi"
        ;
    }
}

 typedef struct variabledata
{
     static int expressiondata [47 ] = 
    {
         0, 0, 0, 0, 0,
         0, 0, 0, 0, 0,
         0, 0, 0, 0, 0,
         0, 0, 0, 0, 0,
         0, 0, 0, 0, 0,
         0, 0, 0, 0, 0,
         0, 0, 0, 0, 0,
         0, 0, 0, 0, 0,
         0, 0, 0, 0, 0,
              0, 0,
     }
    ;
     struct equationdata
    {
         int static log = 0
        ;
         int static sin = 0
        ;
         int static cos = 0
        ;
         int static tan = 0
        ;
         int static sec = 0
        ;
         int static csc = 0
        ;
         int static cot = 0
        ;
         int static sinh = 0
        ;
         int static cosh = 0
        ;
         int static tanh = 0
        ;
         int static sech = 0
        ;
         int static csch = 0
        ;
         int static coth = 0
        ;
         int static pi = 0
        ;
    }
     
}
 typedef struct value
{
     zero = indeterminate.expression [0 ]
    ; 
     one = variabletype.expression [1 ]
    ; 
     two = variabletype.expression [2 ]
    ;
     three = variabletype.expression [3 ]
    ;
     four = variabletype.expression [4 ]
    ;
     five = variabletype.expression [5 ]
    ;
     six = variabletype.expression [6 ]
    ;
     seven = variabletype.expression [7 ]
    ;
     eight = variabletype.expression [8 ]
    ;
     nine = variabletype.expression [9 ]
    ;
     a = variabletype.expression [10 ]
    ;
     b = variabletype.expression [11 ]
    ;
     c = variabletype.expression [12 ]
    ;
     d = variabletype.expression [13 ]
    ;
     e = variabletype.expression [14 ]
    ;
     f = variabletype.expression [15 ]
    ;
     g = variabletype.expression [16 ]
    ;
     h = variabletype.expression [17 ]
    ;
     i = variabletype.expression [18 ]
    ;
     j = variabletype.expression [19 ]
    ;
     k = variabletype.expression [20 ]
    ;
     l = variabletype.expression [21 ]
    ;
     m = variabletype.expression [22 ]
    ;
     n = variabletype.expression [23 ]
    ;
     o = variabletype.expression [24 ]
    ;
     p = variabletype.expression [25 ]
    ;
     q = variabletype.expression [26 ]
    ;
     r = variabletype.expression [27 ]
    ;
     s = variabletype.expression [28 ]
    ;
     t = variabletype.expression [29 ]
    ;
     u = variabletype.expression [30 ]
    ;
     v = variabletype.expression [31 ]
    ;
     w = variabletype.expression [32 ]
    ;
     x = variabletype.expression [33 ]
    ;
     y = variabletype.expression [34 ]
    ;
     z = variabletype.expression [35 ]
    ;
     leftparenthesis = variabletype.expression [36 ]
    ;
     rightparenthesis = variabletype.expression [37 ]
    ;
     period = variabletype.expression [38 ]
    ;
     multiply = variabletype.expression [39 ]
    ;
     divide = variabletype.expression [40 ]
    ;
     plus = variabletype.expression [41 ]
    ;
     minus = variabletype.expression [42 ]
    ;
     base = variabletype.expression [43 ]
    ;
     power = variabletype.expression [44 ]
    ;
     percent = variabletype.expression [45 ]
    ;
     space = variabletype.expression [46 ]
    ;
     log = variabletype.equation.log
    ;
     sin = variabletype.equation.sin
    ;
     cos = variabletype.equation.cos
    ;
     tan = variabletype.equation.tan
    ;
     sec = variabletype.equation.sec
    ;    
     csc = variabletype.equation.csc
    ;
     cot = variabletype.equation.cot
    ;    
     sinh = variabletype.equation.sinh
    ;    
     cosh = variabletype.equation.cosh
    ;   
     tanh = variabletype.equation.tanh
    ;    
     sech = variabletype.equation.sech
    ;    
     csch = variabletype.equation.csch
    ;    
     coth = variabletype.equation.coth
    ;    
     pi = variabletype.equation.pi
    ;
} 
;
 typedef enum chess
{
     zero; one; two; three; four; five; 
     six; seven; eight; nine; a; b; c; 
     d; e; f; g; h; i; j; k; l; m; n; 
     o; p; q; r; s; t; u; v; w; x; y; 
     z; leftparenthesis; rightparenthesis; 
     period; multiply; divide, plus; 
     minus; base; power; percent; space;
     log; sin; cos; tan; sec; csc; cot;
     sinh; cosh; tanh; sech; csch; coth;
     pi;
}
;
 chess party [] =
{
     zero; one; two; three; four; five; 
     six; seven; eight; nine; a; b; c; 
     d; e; f; g; h; i; j; k; l; m; n; 
     o; p; q; r; s; t; u; v; w; x; y; 
     z; leftparenthesis; rightparenthesis; 
     period; multiply; divide, plus; 
     minus; base; power; percent; space;
     log; sin; cos; tan; sec; csc; cot;
     sinh; cosh; tanh; sech; csch; coth;
     pi;
}
;
 typedef struct index 
{
     static int minimum = 0
    ;
     static int maximum = 0
    ;
     index (int max)
    ;
}
;
 int indexing (int minimum, int maximum, index index_, bool add)
{
     if (index_.minimum != index_.maximum )
    {
         if (add == true )
        {
             index_.minimum ++
            ;
        }
         return minimum 
       ;
    }    
}

 int has (unsigned char var [] )
 //#setter method for howmany() gfunc
{
     inittrue = true
    ;
     order (var, counter)
    ;
     index index0, index1
    ;
     while (indexing (index0.minimum, amountof (var ), index0, false ) )
    { 
         while (indexing (index1.minimum, amountof (indeterminate.expression ), index1, false ) )
        {
             if (var [index0.minimum ] == indeterminate.expression [index1.minimum ] )
            {
                 ishowmany (index1.minimum )
                ;
            }
             indexing (index1.minimum, amountof (indeterminate.expression ), index1, true )
            ;
        }
         indexing (index0.minimum, amountof (indeterminate.expression ), index0, true )
        ;
    }
}

 int amountof (unsigned char example [] )
{
     return (int * ) calloc ( sizeof (example ) )
    ;
}

 chess is (unsigned char letter )
//#
{
     if (inittrue == true )
    {
         index index0
        ;
         while (indexing (index0.minimum, amountof (indeterminate.expression ), index0, false ) )
        { 
             if (letter == indeterminate.expression [index0 ] )
            {
                 return party [index0 ]
                ;
            }
             indexing (index0.minimum, amountof (indeterminate.expression ), index0, true )
            ;
        }
    }
}

 chess match (unsigned char letter [] )
//#
{
     if (inittrue == true )
    {
         index index0
        ;
             if (letter == indeterminate.equation.log )
            {
                 return party [47 ]
                ;
            }
             if (letter == indeterminate.equation.sin )
            {
                 return party [48 ]
                ;
            }
             if (letter == indeterminate.equation.cos )
            {
                 return party [49 ]
                ;
            }
             if (letter == indeterminate.equation.tan )
            {
                 return party [50 ]
                ;
            }
             if (letter == indeterminate.equation.sec )
            {
                 return party [51 ]
                ;
            }
             if (letter == indeterminate.equation.csc )
            {
                 return party [52 ]
                ;
            }
             if (letter == indeterminate.equation.cot )
            {
                 return party [53 ]
                ;
            }
             if (letter == indeterminate.equation.sinh )
            {
                 return party [54 ]
                ;
            }
             if (letter == indeterminate.equation.cosh )
            {
                 return party [55 ]
                ;
            }
             if (letter == indeterminate.equation.tanh )
            {
                 return party [56 ]
                ;
            }
             if (letter == indeterminate.equation.sech )
            {
                 return party [57 ]
                ;
            }
             if (letter == indeterminate.equation.csch )
            {
                 return party [58 ]
                ;
            }
             if (letter == indeterminate.equation.coth )
            {
                 return party [59 ]
                ;
            }
             if (letter == indeterminate.equation.pi )
            {
                 return party [60 ]
                ;
            }
         else
        {
             printf ("oops: %s", letter )
            ;
        }
    }
}

int logicstringmathdataindexmatch (unsigned char letter [] )
//#
{
     if (inittrue == true )
    {
         index index0
        ;
             if (letter == indeterminate.equation.log )
            {
                 return data.equationdata.log
                ;
            }
             if (letter == indeterminate.equation.sin )
            {
                 return data.equationdata.sin
                ;
            }
             if (letter == indeterminate.equation.cos )
            {
                 return data.equationdata.cos
                ;
            }
             if (letter == indeterminate.equation.tan )
            {
                 return data.equationdata.tan
                ;
            }
             if (letter == indeterminate.equation.sec )
            {
                 return data.equationdata.sec
                ;
            }
             if (letter == indeterminate.equation.csc )
            {
                 return data.equationdata.csc
                ;
            }
             if (letter == indeterminate.equation.cot )
            {
                 return data.equationdata.cot
                ;
            }
             if (letter == indeterminate.equation.sinh )
            {
                 return data.equationdata.sinh
                ;
            }
             if (letter == indeterminate.equation.cosh )
            {
                 return data.equationdata.cosh
                ;
            }
             if (letter == indeterminate.equation.tanh )
            {
                 return data.equationdata.tanh
                ;
            }
             if (letter == indeterminate.equation.sech )
            {
                 return data.equationdata.sech
                ;
            }
             if (letter == indeterminate.equation.csch )
            {
                 return data.equationdata.csch
                ;
            }
             if (letter == indeterminate.equation.coth )
            {
                 return data.equationdata.coth
                ;
            }
             if (letter == indeterminate.equation.pi )
            {
                 return data.equationdata.pi
                ;
            }
         else
        {
             printf ("oops: %s", letter )
            ;
        }
    }
}

 int addlogicstringmathdata (unsigned char letter [], int numeral )
{
     if (inittrue == true )
    {
         index index0
        ;
             if (letter == indeterminate.equation.log )
            {
                 return data.equationdata.log += numeral
                ;
            }
             if (letter == indeterminate.equation.sin )
            {
                 return data.equationdata.sin += numeral
                ;
            }
             if (letter == indeterminate.equation.cos )
            {
                 return data.equationdata.cos += numeral
                ;
            }
             if (letter == indeterminate.equation.tan )
            {
                 return data.equationdata.tan += numeral
                ;
            }
             if (letter == indeterminate.equation.sec )
            {
                 return data.equationdata.sec += numeral
                ;
            }
             if (letter == indeterminate.equation.csc )
            {
                 return data.equationdata.csc += numeral
                ;
            }
             if (letter == indeterminate.equation.cot )
            {
                 return data.equationdata.cot += numeral
                ;
            }
             if (letter == indeterminate.equation.sinh )
            {
                 return data.equationdata.sinh += numeral
                ;
            }
             if (letter == indeterminate.equation.cosh )
            {
                 return data.equationdata.cosh += numeral
                ;
            }
             if (letter == indeterminate.equation.tanh )
            {
                 return data.equationdata.tanh += numeral
                ;
            }
             if (letter == indeterminate.equation.sech )
            {
                 return data.equationdata.sech += numeral
                ;
            }
             if (letter == indeterminate.equation.csch )
            {
                 return data.equationdata.csch += numeral
                ;
            }
             if (letter == indeterminate.equation.coth )
            {
                 return data.equationdata.coth += numeral
                ;
            }
             if (letter == indeterminate.equation.pi )
            {
                 return data.equationdata.pi += numeral
                ;
            }
         else
        {
             printf ("oops: %s", letter )
            ;
        }
    }
}

 int order (unsigned char var [], chess gamesetter [] )
//#
{
     gamesetter [amountof (var ) ]
    ;
      if (inittrue == true )
    {
         index index0;
         while (indexing (index0.minimum, amountof (var ), index0, false ) )
        {
             gamesetter [index0 ] = is (var [index0 ] )
            ;
             indexing (index0.minimum, amountof (var ), index0, true )
            ;
        }
    }
         
     
}
 int ishowmany (int index )
 //#sets how many of what each variable
{
     if (inittrue == true )
    {
         data.expressiondata [index ] ++
        ;
    }
}

 bool flushreset ()
 //#prepares for new argument
{
     if (inittrue == true )
    {
         fflush ()
        ;
         inittrue = false
        ;
         index index0
        ;
         while (indexing (index0.minimum, amountof (data.expressiondata ), index0, false ) )
        { 
             data.expressiondata [index0 ] = 0
            ;
             indexing (index0.minimum, amountof (data.expressiondata ), index0, true )
            ;
        }
    }
}

 int which ( chess character, int position )
 //#equation indexing using enum chess
{
     if (inittrue == true )
    {
         if (position < data.expressiondata [initfind_ (character ) ] )
        {
             index index0, positionmax
            ;
             positionmax.minimum = 0
            ;
             while (indexing (index0.minimum, amountof (indeterminate.expression ), index0, false ) )
            { 
                 if ((counter [index0.minimum ] == character ) && (positionmax.minimum == (position - 1 ) ) )
                {
                     int min = index0.minimum
                    ;
                     return min
                    ;
                     positionmax.minimum ++
                    ;
                }
                 indexing (index0.minimum, amountof (data.expressiondata ), index0, true )
                ;
            }
        }
    }
}
                       
 int initfind_ ( chess character )
 //#equation indexing using enum chess
{
     if (inittrue == true )
    {
         index index0
        ;
         while (indexing (index0.minimum, amountof (indeterminate.expression ), index0, false ) )
        { 
             if ((counter [index0.minimum ] == character ) )
            {
                 int min = index0.minimum
                ;
                 return min
                ;
            }
             indexing (index0.minimum, amountof (data.expressiondata, index0, true )
            ;
        }
    }
}

 int whichmany (typedef (thismany (unsigned char letters ) (int * ) ) letter, int imdex, unsigned char 2bees [] )
{
     if (letter != 0 )
    {
     if (letter > 1 )
    {
    which (is (2bees [imdex ] ) )
    ;
     
}

 int thismany (unsigned char indexchar )
 //#getter method for each how many of what individual variable
{
     
     if (inittrue == true )
    {
         index index0, index1
        ;
         if amountof (indexchar
         while (indexing (index0.minimum, 47, index0, false )
        {
             int min = index0.minimum
            ;
             if (  indeterminate.expression [min ] == indexchar )
            {
                 return data.expressiondata [min ]
                ;
            }
             indexing (index.minimum, 47, index0, true )
        }
         data.expressiondata [ which (indexchar, amountof (indexchar ) ) ]
        ;
    }
}
       
 int logic (unsigned char exerpt [], unsigned char sample [])
{
     value value_
    ;
     bool doagain = true
    ;
     index index0 = 0, index1 = 0, index2 = 0, index3, index4
    ;
     int increment = 0
    ;
     chess newinitcounter [amountof (exerpt ) ]
    ;
     order (exerpt, newinitcounter )
    ;
     //logicstringmathdataindexmatch (exerpt )
    //;
     newinitcounter
     if (inittrue == true )
    {
         if (thismany (exerpt [index4.minimum ] ) == index0.minimum )
        {
             doagain = false
            ;
             break
            ;
        }
         while (doagain == true )
        {
             if ( (thismany [is (exerpt [index4.minimum ] ) ] != 0 ) ) 
            {
                     if ( counter [which (index4.minimum, index0.minimum ) ] == ( is (exerpt [which (index4.minimum, index1.minimum ) - 1 ] ) )
                    {
                         if ( (thismany (is (value_.n ) ) != 0 ) ) 
                        {
                             if ( counter [which (value_.a, index1.minimum ) ] == ( counter [which (value.n, index2.minimum ) - 1 ] ) )
                            {
                                 addlogicstringmathdata( exerpt, 1 )
                                ;
                                 counter [which (value_.t, index0.minimum ) ] = match ( value_.tan )
                                ;
                                 index3.minimum = which (match (value_.tan ), index0.minimum )
                                ;
                                 while (indexing (index3.minimum, (amountof (counter ) ) , index3, false ) )
                                {
                                    if (index3.minimum != (index3.maximum ) )
                                   {
                                        counter [index3.minumum ] = counter [index3.minimum + 1 ]
                                       ;
                                   }
                                    indexing (index3.minimum, (amountof (counter ) ) , index3, true )
                                   ;
                                }
                            }
                        }
                         index0.minimum ++
                        ;
                         index1.minimum ++
                        ;
                         index2.minimum ++
                        ;
                    }
                }
            }
        }
    }
} 
}

 bool logiclog_ (unsigned char sample [] )
{
     value value_
    ;
     bool doagain = true
    ;
     index index0 = 0, index1 = 0, index2 = 0, index3
    ;
     int increment = 0
    ;
     if (inittrue == true )
    {
         if (thismany (is (value_.l ) ) == index0.minimum )
        {
             doagain = false
            ;
             break
            ;
        }
         while (doagain == true )
        {
             if ( (thismany (value_.l )  != 0 ) ) 
            {
                 if ( (thismany (value_.o ) ] != 0 ) ) 
                {
                     if ( counter [which (value_.l, index0.minimum ) ] == ( counter [which (value.o, index1.minimum ) - 1 ] ) )
                    {
                         if ( (thismany (is (value_.g ) ) != 0 ) ) 
                        {
                             if ( counter [which (value_.o, index1.minimum ) ] == ( counter [which (value.g, index2.minimum ) - 1 ] ) )
                            {
                                 data.equationdata.log ++
                                ;
                                 counter [which (value_.l, index0.minimum ) ] = match ( value_.log )
                                ;
                                 index3.minimum = which (match (value_.log ), index0.minimum )
                                ;
                                 while (indexing (index3.minimum, (amountof (counter ) ) , index3, false ) )
                                {
                                    if (index3.minimum != (index3.maximum ) )
                                   {
                                        counter [index3.minumum ] = counter [index3.minimum + 1 ]
                                       ;
                                   }
                                    indexing (index3.minimum, (amountof (counter ) ) , index3, false )
                                   ;
                                }
                            }
                        }
                         index0.minimum ++
                        ;
                         index1.minimum ++
                        ;
                         index2.minimum ++
                        ;
                    }
                }
            }
        }
    }
}

 bool log_ (chess samplelog [] )
{
     value value_
    ;
     bool doagain = true
    ;
     index index0 = 0, index1 = 0, index2 = 0, index3
    ;
     int increment = 0
    ;
     while (indexing (index0.minimum, amountof (samplelog ), index0, false ) )
    {
         while (indexing (index1.minimum, amountof (party ), index1, false ) )
        {
            if (samplelog [index0.minimum ] == party [index1.minimum ] )
           {
                indexing (index1.minimum, amountof (party ), index1, true ) 
               ;
           }
        }
         indexing (index0.minimum, amountof (samplelog ), index0, true ) 
        ;
    }
     if (inittrue == true )
    {
         if (thismany (is (value_.s ) ) == index0.minimum )
        {
             doagain = false
            ;
             break
            ;
        }
         while (doagain == true )
        {
             if ( (thismany [is (value_.s ) ] != 0 ) ) 
            {
                 if ( (thismany [is (value_.i ) ] != 0 ) ) 
                {
                     if ( counter [which (value_.s, index0.minimum ) ] == ( counter [which (value.i, index1.minimum ) - 1 ] ) )
                    {
                         if ( (thismany (is (value_.n ) ) != 0 ) ) 
                        {
                             if ( counter [which (value_.i, index1.minimum ) ] == ( counter [which (value.n, index2.minimum ) - 1 ] ) )
                            {
                                 data.equationdata.sin ++
                                ;
                                 counter [which (value_.s, index0.minimum ) ] = match ( value_.sin )
                                ;
                                 index3.minimum = which (match (value_.sin ), index0.minimum )
                                ;
                                 while (indexing (index3.minimum, (amountof (counter ) ) , index3, false ) )
                                {
                                    if (index3.minimum != (index3.maximum ) )
                                   {
                                        counter [index3.minumum ] = counter [index3.minimum + 1 ]
                                       ;
                                   }
                                    indexing (index3.minimum, (amountof (counter ) ) , index3, true )
                                   ;
                                }
                            }
                        }
                         index0.minimum ++
                        ;
                         index1.minimum ++
                        ;
                         index2.minimum ++
                        ;
                    }
                }
            }
        }
    }
}
                
 bool logiccos_ (unsigned char sample [] )
{
     value value_
    ;
     bool doagain = true
    ;
     index index0 = 0, index1 = 0, index2 = 0, index3
    ;
     int increment = 0
    ;
     if (inittrue == true )
    {
         if (thismany (is (value_.c ) ) == index0.minimum )
        {
             doagain = false
            ;
             return true
            ;
        }
         while (doagain == true )
        {
             if ( (thismany [is (value_.c ) ] != 0 ) ) 
            {
                 if ( (thismany [is (value_.o ) ] != 0 ) ) 
                {
                     if ( counter [which (value_.c, index0.minimum ) ] == ( counter [which (value.o, index1.minimum ) - 1 ] ) )
                    {
                         if ( (thismany (is (value_.s ) ) != 0 ) ) 
                        {
                             if ( counter [which (value_.o, index1.minimum ) ] == ( counter [which (value.s, index2.minimum ) - 1 ] ) )
                            {
                                 data.equationdata.cos ++
                                ;
                                 counter [which (value_.c, index0.minimum ) ] = match ( value_.cos )
                                ;
                                 index3.minimum = which (match (value_.cos ), index0.minimum )
                                ;
                                 while (indexing (index3.minimum, (amountof (counter ) ) , index3, false ) )
                                {
                                    if (index3.minimum != (index3.maximum ) )
                                   {
                                        counter [index3.minumum ] = counter [index3.minimum + 1 ]
                                       ;
                                   }
                                    indexing (index3.minimum, (amountof (counter ) ) , index3, true )
                                   ;
                                }
                            }
                        }
                         index0.minimum ++
                        ;
                         index1.minimum ++
                        ;
                         index2.minimum ++
                        ;
                    }
                }
            }
        }
    }
}

 bool logictan_ (unsigned char sample [] )
{
     value value_
    ;
     bool doagain = true
    ;
     index index0 = 0, index1 = 0, index2 = 0, index3
    ;
     int increment = 0
    ;
     if (inittrue == true )
    {
         if (thismany (is (value_.t ) ) == index0.minimum )
        {
             doagain = false
            ;
             return true
            ;
        }
         while (doagain == true )
        {
             if ( (thismany [is (value_.t ) ] != 0 ) ) 
            {
                 if ( (thismany [is (value_.a ) ] != 0 ) ) 
                {
                     if ( counter [which (value_.t, index0.minimum ) ] == ( counter [which (value.a, index1.minimum ) - 1 ] ) )
                    {
                         if ( (thismany (is (value_.n ) ) != 0 ) ) 
                        {
                             if ( counter [which (value_.a, index1.minimum ) ] == ( counter [which (value.n, index2.minimum ) - 1 ] ) )
                            {
                                 data.equationdata.tan ++
                                ;
                                 counter [which (value_.t, index0.minimum ) ] = match ( value_.tan )
                                ;
                                 index3.minimum = which (match (value_.tan ), index0.minimum )
                                ;
                                 while (indexing (index3.minimum, (amountof (counter ) ) , index3, false ) )
                                {
                                    if (index3.minimum != (index3.maximum ) )
                                   {
                                        counter [index3.minumum ] = counter [index3.minimum + 1 ]
                                       ;
                                   }
                                    indexing (index3.minimum, (amountof (counter ) ) , index3, true )
                                   ;
                                }
                            }
                        }
                         index0.minimum ++
                        ;
                         index1.minimum ++
                        ;
                         index2.minimum ++
                        ;
                    }
                }
            }
        }
    }
}
                
 bool logicsec_ (unsigned char sample [] )
{
     value value_
    ;
     bool doagain = true
    ;
     index index0 = 0, index1 = 0, index2 = 0, index3
    ;
     int increment = 0
    ;
     if (inittrue == true )
    {
         if (thismany (is (value_.s ) ) == index0.minimum )
        {
             doagain = false
            ;
             break
            ;
        }
         while (doagain == true )
        {
             if ( (thismany [is (value_.s ) ] != 0 ) ) 
            {
                 if ( (thismany [is (value_.e ) ] != 0 ) ) 
                {
                     if ( counter [which (value_.s, index0.minimum ) ] == ( counter [which (value.e, index1.minimum ) - 1 ] ) )
                    {
                         if ( (thismany (is (value_.c ) ) != 0 ) ) 
                        {
                             if ( counter [which (value_.e, index1.minimum ) ] == ( counter [which (value.c, index2.minimum ) - 1 ] ) )
                            {
                                 data.equationdata.sec ++
                                ;
                                 counter [which (value_.s, index0.minimum ) ] = match ( value_.sec )
                                ;
                                 index3.minimum = which (match (value_.sec ), index0.minimum )
                                ;
                                 while (indexing (index3.minimum, (amountof (counter ) ) , index3, false ) )
                                {
                                    if (index3.minimum != (index3.maximum ) )
                                   {
                                        counter [index3.minumum ] = counter [index3.minimum + 1 ]
                                       ;
                                   }
                                    indexing (index3.minimum, (amountof (counter ) ) , index3, true )
                                   ;
                                }
                            }
                        }
                         index0.minimum ++
                        ;
                         index1.minimum ++
                        ;
                         index2.minimum ++
                        ;
                    }
                }
            }
        }
    }
}
