/* FUN_0072c6ff - 0x0072c6ff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0072c6ff(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 10000) {
    FUN_0072c10b(0xffffffff);
    FUN_0045b90e(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
    }
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      goto LAB_0072c7be;
    }
    FUN_0045e070(unaff_EBP + -0x14,iVar1 + -1);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + -4);
    }
    FUN_0072c6a4(uVar2);
    FUN_004a2fef(*(undefined4 *)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  if (*(int *)(unaff_EBP + 8) == 1) {
    iVar1 = *extraout_ECX;
    uVar2 = 1;
  }
  else {
    if (*(int *)(unaff_EBP + 8) != 2) goto LAB_0072c7be;
    iVar1 = *extraout_ECX;
    uVar2 = 2;
  }
  (**(code **)(iVar1 + 0x34))(uVar2);
LAB_0072c7be:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


