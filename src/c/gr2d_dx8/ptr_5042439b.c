/* ptr_5042439b - 0x5042439b in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void ptr_5042439b(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_5042fb68;
  uVar1 = DAT_5042fb60;
  FastExitMediaState();
  uVar3 = (undefined4)DAT_5042fb68;
  *param_1 = DAT_5042fb68;
  param_1[1] = 0;
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = uVar2;
  param_1[6] = param_2;
  param_1[7] = CONCAT44(uVar3,param_3);
  FastExitMediaState();
  return;
}


