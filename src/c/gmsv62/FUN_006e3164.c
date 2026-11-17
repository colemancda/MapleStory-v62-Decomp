/* FUN_006e3164 - 0x006e3164 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006e3164(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar2 = *(int *)(*(int *)(extraout_ECX + 0x44) + iVar1 * 8 + 4);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  iVar3 = 0;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 4));
    iVar3 = *(int *)(unaff_EBP + -0x10);
  }
  if (iVar1 == *(int *)(extraout_ECX + 0x34)) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (iVar3 != 0) {
      FUN_006eadbe(0);
    }
    uVar4 = 1;
  }
  else if (*(int *)(iVar3 + 0xc) == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (iVar3 != 0) {
      FUN_006eadbe(0);
    }
    uVar4 = 3;
  }
  else if (iVar1 == *(int *)(extraout_ECX + 0x38)) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (iVar3 != 0) {
      FUN_006eadbe(0);
    }
    uVar4 = 2;
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (iVar3 != 0) {
      FUN_006eadbe(0);
    }
    uVar4 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


