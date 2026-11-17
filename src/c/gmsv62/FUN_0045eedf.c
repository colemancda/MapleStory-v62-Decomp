/* FUN_0045eedf - 0x0045eedf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0045eedf(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  undefined4 uVar3;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_00414f8b(extraout_ECX);
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iVar4 = *extraout_ECX;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + -4);
    }
    iVar1 = FUN_00415015(iVar4 + *(int *)(unaff_EBP + 0x10),0);
    iVar4 = *extraout_ECX;
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar4 + -4);
    }
    FUN_00879c20(iVar1,iVar4,uVar3);
    if (*extraout_ECX == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*extraout_ECX + -4);
    }
    FUN_00879c20(iVar4 + iVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (*extraout_ECX == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*extraout_ECX + -4);
    }
    FUN_004150c0(iVar4 + *(int *)(unaff_EBP + 0x10));
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_00414f8b(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


