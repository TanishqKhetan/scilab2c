/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "find.h"

void zfinda(doubleComplex* z, int size, double *out, int* indiceOut) {
  int i = 0;
  indiceOut[1]=0;
    
  for (i = 0; i < size ; ++i) {
    if (zreals(z[i]) != 0 || zimags(z[i]) != 0) {
	out[indiceOut[1]] = (double)(i+1);
	indiceOut[1]++;
    }
  }
}
