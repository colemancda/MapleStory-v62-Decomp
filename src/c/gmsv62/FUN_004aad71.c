/* FUN_004aad71 - 0x004aad71 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004aad71(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005265f8(1);
  if (iVar1 != 0) {
    uVar2 = FUN_004aaac3(param_2,param_3);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    FUN_004aa5f9(0,0,0);
    FUN_004b3daf();
  }
  return;
}


