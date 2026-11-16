/* FUN_51409d84 - 0x51409d84 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_51409d84(double *param_1,double param_2,double param_3,double param_4,double param_5,
            double param_6,double param_7,double param_8,double param_9,double param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = param_10 * param_10;
  dVar2 = dVar1 * param_10;
  dVar5 = (dVar2 + dVar2) - (dVar1 + dVar1 + dVar1);
  dVar3 = (dVar2 - (dVar1 + dVar1)) + param_10;
  dVar4 = dVar5 + _DAT_5140d9b8;
  *param_1 = (param_2 * dVar4 + param_6 * dVar3 + param_8 * (dVar2 - dVar1)) - param_4 * dVar5;
  param_1[1] = (param_3 * dVar4 + param_7 * dVar3 + param_9 * (dVar2 - dVar1)) - param_5 * dVar5;
  return;
}


