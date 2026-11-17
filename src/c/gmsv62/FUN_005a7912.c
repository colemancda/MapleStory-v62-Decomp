/* FUN_005a7912 - 0x005a7912 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a7912(void)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_48;
  int *piStack_44;
  int *piStack_40;
  
  FUN_00879bb8();
  piStack_40 = (int *)0x0;
  piStack_44 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_48;
  FUN_00679e4e(&puStack_48,0x3b4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = unaff_EBP + -0x3c;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puStack_48 = (undefined1 *)0x5a7964;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    piStack_40 = (int *)(unaff_EBP + -0x18);
    piStack_44 = (int *)0x5a797a;
    piStack_40 = (int *)FUN_00404b30();
    if (((int)piStack_40 < 0) && (piStack_40 != (int *)0x80004002)) {
      piStack_44 = (int *)0x5a798b;
      FUN_00878dfb();
    }
  }
  piStack_40 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_44 = (int *)0x5a7998;
  piVar2 = (int *)FUN_00402bc3();
  if ((int)piVar2 < 0) {
    piStack_44 = (int *)0x5a79a3;
    piStack_40 = piVar2;
    FUN_00878dfb();
    piStack_40 = extraout_ECX;
  }
  puStack_48 = (undefined1 *)&piStack_40;
  *(int ***)(unaff_EBP + -0x1c) = &piStack_40;
  piStack_44 = (int *)0x602;
  FUN_00679e4e();
  piStack_44 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_48 = (undefined1 *)0x5a79c6;
  FUN_0040263d();
  puStack_48 = (undefined1 *)0x5a79cd;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(short *)(unaff_EBP + -0x2c) == 8) {
    piStack_40 = (int *)0x603;
    piStack_44 = (int *)(unaff_EBP + -0x14);
    puStack_48 = (undefined1 *)0x5a79e8;
    FUN_00679d86();
    piVar2 = *(int **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_44 = (int *)0x5a79f5;
    piStack_40 = piVar2;
    piStack_40 = (int *)FUN_0087a007();
    puStack_48 = (undefined1 *)0x5a7a00;
    piStack_44 = piVar2;
    FUN_0046febf();
    piStack_40 = (int *)0x0;
    piStack_44 = (int *)0x0;
    puStack_48 = (undefined1 *)0x258;
    FUN_0045af91(*(undefined4 *)(unaff_EBP + -0x14),1);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_40 = (int *)0x5a7a22;
    FUN_00402676();
  }
  piStack_40 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_44 = (int *)0x5a7a2f;
  piStack_40 = (int *)FUN_00402bc3();
  if ((int)piStack_40 < 0) {
    piStack_44 = (int *)0x5a7a3a;
    FUN_00878dfb();
  }
  piStack_40 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_40 != (int *)0x0) {
    piStack_44 = (int *)0x5a7a4b;
    (**(code **)(*piStack_40 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


