/* entry - 0x50c1041a in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int entry(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = _DAT_50c2143c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_50c10462;
    if ((DAT_50c214f8 != (code *)0x0) &&
       (iVar2 = (*DAT_50c214f8)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_50c1036f(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_50c10462:
  iVar2 = FUN_50c02ae2(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_50c1036f(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_50c1036f(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_50c214f8 != (code *)0x0) {
      iVar2 = (*DAT_50c214f8)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


