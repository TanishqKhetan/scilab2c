/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Organization: FOSSEE, IIT Bombay
 Author: Brijesh Gupta C R
 Email: toolbox@scilab.in
*/
#include <stdio.h>
#include <math.h>
#include "factorial.h"
#include "gamma.h"
#include "beta.h"

void sbetaa(float* inp1,int size1, float* inp2,int size2, float* out)
{
    for(int i = 0; i<size1; i++)
	out[i] = sbetas(inp1[i],inp2[i]);
}