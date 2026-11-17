/* FUN_005a4d7e - 0x005a4d7e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a4d7e(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_40;
  int iStack_3c;
  int *piStack_38;
  
  FUN_00879bb8();
  piStack_38 = (int *)0x0;
  iStack_3c = 0;
  *(int **)(unaff_EBP + -0x18) = &iStack_40;
  FUN_00679e4e(&iStack_40,0x3b4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = unaff_EBP + -0x28;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_40 = 0x5a4dd0;
  iVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x14) = iVar1;
  if (iVar1 != 0) {
    piStack_38 = (int *)(unaff_EBP + -0x14);
    iStack_3c = 0x5a4de7;
    piStack_38 = (int *)FUN_00404b30();
    if (((int)piStack_38 < 0) && (piStack_38 != (int *)0x80004002)) {
      iStack_3c = 0x5a4df8;
      FUN_00878dfb();
    }
  }
  piStack_38 = (int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_3c = 0x5a4e05;
  iVar1 = FUN_00402bc3();
  iStack_3c = (int)piStack_38;
  if (iVar1 < 0) {
    iStack_3c = 0x5a4e10;
    piStack_38 = (int *)iVar1;
    FUN_00878dfb();
    iStack_3c = extraout_ECX;
  }
  piStack_38 = (int *)0x0;
  *(int **)(unaff_EBP + -0x18) = &iStack_3c;
  iStack_40 = 0x5f9;
  FUN_00679e4e(&iStack_3c);
  iStack_40 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  iStack_3c = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_40 = 0x5a4e46;
  iVar1 = FUN_00412550();
  iStack_40 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_38 = (int *)FUN_00402bc3();
  if ((int)piStack_38 < 0) {
    iStack_3c = 0x5a4e62;
    FUN_00878dfb();
  }
  if (iVar1 != 0) {
    piStack_38 = (int *)0x5a4e6d;
    FUN_005a4e8c();
  }
  piStack_38 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_38 != (int *)0x0) {
    iStack_3c = 0x5a4e7e;
    (**(code **)(*piStack_38 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


