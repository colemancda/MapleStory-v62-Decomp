/* FUN_00410919 - 0x00410919 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00410919(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_2;
  if (*param_1 == iVar1) {
    uVar2 = 0;
  }
  else if (*param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_004030e2(iVar1);
  }
  return uVar2;
}


