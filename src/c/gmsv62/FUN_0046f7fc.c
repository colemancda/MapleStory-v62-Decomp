/* FUN_0046f7fc - 0x0046f7fc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0046f7fc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_14 [16];
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    (*DAT_0097b504)(local_14,0,0,0xc,0xc);
    if (*(int *)(param_1 + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(param_1 + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = FUN_00404abb();
    iVar2 = FUN_00404a94(iVar2 + *(int *)(param_1 + 0x38));
    (*DAT_0097b54c)(local_14,iVar2 + *(int *)(param_1 + 0x34));
    uVar1 = (*DAT_0097b57c)(local_14,param_2,param_3);
  }
  return uVar1;
}


