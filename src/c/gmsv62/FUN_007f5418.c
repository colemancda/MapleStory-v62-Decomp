/* FUN_007f5418 - 0x007f5418 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007f5418(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004f1993(param_1 + 0xb,param_1[0xf]);
  FUN_004f1993(param_1 + 5,param_1[9]);
  iVar1 = *param_1;
  uVar2 = __ftol();
  uVar2 = __ftol(uVar2);
  (**(code **)(iVar1 + 0x40))(param_1,uVar2);
  return;
}


