/* FUN_0055f1c8 - 0x0055f1c8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0055f1c8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x5a0) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = FUN_00424ee1();
  if (*(int *)(param_1 + 0x5a0) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = FUN_00424f08();
  if ((((param_2 < iVar1) || (iVar1 + 0x20 < param_2)) || (param_3 < iVar2)) ||
     (iVar2 + 0x20 < param_3)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


