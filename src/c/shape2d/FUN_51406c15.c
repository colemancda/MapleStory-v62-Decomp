/* FUN_51406c15 - 0x51406c15 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_51406c15(double param_1,double param_2)

{
  double dVar1;
  
  if (_DAT_5140d8c8 < param_1) {
    dVar1 = fmod(param_1,param_2);
    return (float10)dVar1;
  }
  dVar1 = fmod(param_1,param_2);
  if (-(float10)dVar1 == (float10)_DAT_5140d8c8) {
    return (float10)_DAT_5140d8c8;
  }
  return (float10)param_2 - -(float10)dVar1;
}


