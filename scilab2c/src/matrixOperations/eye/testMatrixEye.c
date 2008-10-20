/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include <assert.h>
#include <stdio.h>
#include <math.h>

#include "eye.h"

#define LEADDIM 10

static void deyeaTest ( void )
{
    int i = 0 ;

    double result = 0 ;

    double in [LEADDIM*LEADDIM] ;

    deyea ( in , LEADDIM , LEADDIM ) ;

    for ( i = 0 ; i <  LEADDIM*LEADDIM ; i++ )
        {
            if ( i%(LEADDIM+1) == 0 )
                result = 1 ;
            else
                result = 0 ;

         printf ( "\t\t %d in : %e\tresult : %e\tassert : %e \n" , i, in[i] , result , fabs( in[i] - result) / fabs( in[i]) ) ;

         if ( in[i] < 1e-14 && result < 1e-14 )
            assert(1);
         else
            assert ( fabs ( in[i] - result) / fabs( in[i]) < 1e-14 ) ;
        }
}


static void seyeaTest ( void )
{
    int i = 0 ;

    float result = 0 ;

    float in[LEADDIM*LEADDIM] ;

    seyea ( in , LEADDIM , LEADDIM ) ;

    for ( i = 0 ; i <  LEADDIM*LEADDIM ; i++)
        {
            if ( i%(LEADDIM+1) == 0 )
                result = 1.0f ;
            else
                result = 0 ;

         printf ( "\t\t %d in : %e\tresult : %e\tassert : %e \n" , i, in[i] , result , fabs( in[i] - result) / fabs( in[i]) ) ;
         if ( in[i] < 1e-6 && result < 1e-6 )
            assert(1);
         else
		    assert ( fabs ( in[i] - result) / fabs( in[i]) < 1e-6 ) ;
        }
}


static void zeyeaTest ( void )
{
    int i = 0 ;

    doubleComplex result = DoubleComplex ( 0 , 0) ;

    doubleComplex in[LEADDIM*LEADDIM] ;

    zeyea ( in , LEADDIM , LEADDIM ) ;

    for ( i = 0 ; i <  LEADDIM*LEADDIM ; i++ )
        {
            if ( i%(LEADDIM+1) == 0 )
                result = DoubleComplex ( 1 , 0 ) ;
            else
                result = DoubleComplex ( 0 , 0 ) ;

         printf ( "\t\t %d in : %e\tresult : %e \n" , i, zreals( in[i]) , zreals ( result ) ) ;

         if ( zreals( in[i]) < 1e-14 && zreals( result) < 1e-14 )
            assert(1);
         else
		    assert ( fabs ( zreals(in[i]) - zreals(result)) / fabs( zreals(in[i])) < 1e-14 ) ;

        if ( zimags ( in[i]) < 1e-14 )
            assert (1);
        else
            assert (0);

        }
}





static void ceyeaTest ( void )
{
    int i = 0 ;

    floatComplex result = FloatComplex ( 0 , 0  ) ;

    floatComplex in[LEADDIM*LEADDIM] ;

    ceyea ( in , LEADDIM , LEADDIM ) ;

    for ( i = 0 ; i <  LEADDIM*LEADDIM ; i++)
        {
            if ( i%(LEADDIM+1) == 0 )
                result = FloatComplex ( 1.0f , 0 ) ;
            else
                result = FloatComplex ( 0    , 0 ) ;

         printf ( "\t\t %d in : %e\tresult : %e \n" , i, creals( in[i]) , creals ( result ) ) ;
         if ( creals( in[i]) < 1e-6 && creals( result) < 1e-6 )
            assert(1);
         else
		    assert ( fabs ( creals(in[i]) - creals(result)) / fabs( creals(in[i])) < 1e-6 ) ;

        if ( cimags ( in[i]) < 1e-6 )
            assert (1);
        else
            assert (0);

        }
}



static int testEye(void) {

  printf("\n>>>> Matrix Exponential Tests\n");
  printf("\t>>>> Matrix Double Realt Tests\n");
  deyeaTest();

  printf("\n\n\t>>>> Matrix Float Realt Tests\n");
  seyeaTest();

  printf("\n\n\n");
  printf("\t>>>> Matrix Float Complex Tests\n");
  ceyeaTest();

  printf("\n\n\n");
  printf("\t>>>> Matrix Double Complex Tests\n");
  zeyeaTest();

  return 0;
}



int main(void) {
  assert(testEye() == 0);
  return 0;
}

