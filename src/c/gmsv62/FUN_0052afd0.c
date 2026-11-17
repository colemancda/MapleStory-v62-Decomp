/* FUN_0052afd0 - 0x0052afd0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052afd0(void)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x18) == 0) {
    iVar1 = FUN_004029b9(0xb8);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00549df3(extraout_ECX,*(undefined4 *)(unaff_EBP + 8));
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
    *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar2 != 0) & uVar2 - 8;
    FUN_0052b687();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iVar1 = FUN_004bc6a2();
    if (iVar1 == 1) {
      *(undefined4 *)(extraout_ECX + 0x18) = 1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0052b6a4();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


