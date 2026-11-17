/* FUN_004ac0be - 0x004ac0be in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004ac0be(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int *piStack_48;
  
  FUN_00879bb8();
  uVar4 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piStack_48 = (int *)(unaff_EBP + -0x10);
  iStack_4c = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_50 = *(undefined4 *)(unaff_EBP + 8);
  iStack_54 = 0x4ac0e4;
  FUN_004abfe8();
  piStack_48 = (int *)0x5b0;
  iStack_4c = unaff_EBP + -0x14;
  iStack_50 = 0x4ac0fa;
  piVar1 = (int *)FUN_00679d86();
  iStack_4c = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iStack_4c == 0) {
    piStack_48 = (int *)0x0;
  }
  else {
    piStack_48 = (int *)(*(uint *)(iStack_4c + -4) >> 1);
  }
  iStack_50 = 0x4ac117;
  FUN_0046febf();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_48 = (int *)0x4ac122;
  FUN_00402676();
  piStack_48 = &DAT_00980690;
  iStack_4c = 0x4ac130;
  FUN_00403191();
  piStack_48 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_4c = 0x4ac13d;
  FUN_00403191();
  piStack_48 = (int *)0x0;
  iStack_4c = 0;
  iStack_50 = unaff_EBP + -0x38;
  iStack_54 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_58 = 0x4ac153;
  uVar2 = FUN_00411641();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_58;
  FUN_004033a1(uVar2);
  iVar3 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_50 = 0x4ac185;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  if (iVar3 != 0) {
    piStack_48 = (int *)(unaff_EBP + -0x14);
    iStack_4c = 0x4ac19b;
    piStack_48 = (int *)FUN_0041a581();
    if (((int)piStack_48 < 0) && (piStack_48 != (int *)0x80004002)) {
      iStack_4c = 0x4ac1ac;
      FUN_00878dfb();
    }
  }
  piStack_48 = (int *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_4c = 0x4ac1b9;
  piStack_48 = (int *)FUN_00402bc3();
  if ((int)piStack_48 < 0) {
    iStack_4c = 0x4ac1c4;
    FUN_00878dfb();
  }
  piStack_48 = (int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_4c = 0x4ac1d1;
  piStack_48 = (int *)FUN_00402bc3();
  if ((int)piStack_48 < 0) {
    iStack_4c = 0x4ac1dc;
    FUN_00878dfb();
  }
  piStack_48 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_4c = 0x4ac1e9;
  piStack_48 = (int *)FUN_00402bc3();
  if ((int)piStack_48 < 0) {
    iStack_4c = 0x4ac1f4;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      piStack_48 = (int *)0x80004003;
      iStack_4c = 0x4ac238;
      FUN_00878dfb();
    }
    piStack_48 = (int *)0x4ac240;
    uVar4 = FUN_0040e53d();
  }
  else {
    if (*(int *)(unaff_EBP + 8) != 1) {
      piStack_48 = *(int **)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_48 != (int *)0x0) {
        iStack_4c = 0x4ac20e;
        (**(code **)(*piStack_48 + 8))();
      }
      goto LAB_004ac254;
    }
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      piStack_48 = (int *)0x80004003;
      iStack_4c = 0x4ac21f;
      FUN_00878dfb();
    }
    piStack_48 = (int *)0x4ac227;
    uVar4 = FUN_0040e48b();
  }
  piStack_48 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_48 != (int *)0x0) {
    iStack_4c = 0x4ac252;
    (**(code **)(*piStack_48 + 8))();
  }
LAB_004ac254:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_48 = (int *)0x4ac260;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


