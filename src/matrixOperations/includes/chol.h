/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */
 
 
#ifndef __CHOL_H__
#define __CHOL_H__
 
#include "lapack.h"
#include "doubleComplex.h"
#include "floatComplex.h"
 
	/* 
	chol : L-U decomposition of square matrix using Cholesky algorithm
	   param in : input matrix (square matrix)
	   param size : number of rows or columns
	   param out : output matrix
	*/ 
	
double dchols (double in);
void dchola (double *in, int size, double *out);
 /* 
void schols (float in,  float out1);
void schola (float *in, int size, float *out);
 
void zchola (doubleComplex *in, int size, doubleComplex *out); 
 
void cchola (floatComplex *in, int size, floatComplex *out); */


#endif /* __CHOL_H__ */
 