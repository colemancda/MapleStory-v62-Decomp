/* FUN_0059d2c6 - 0x0059d2c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0059d2c6(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined1 *puStack_50;
  int *piStack_4c;
  
  FUN_00879bb8();
  piStack_4c = (int *)0xffffffff;
  puStack_50 = &DAT_00978474;
  iStack_54 = 0x59d2ed;
  FUN_00414edd();
  piStack_4c = (int *)0xffffffff;
  puStack_50 = &DAT_00978474;
  iStack_54 = 0x59d2fa;
  FUN_00414edd();
  piStack_4c = (int *)0xffffffff;
  puStack_50 = &DAT_00978474;
  iStack_54 = 0x59d307;
  FUN_00414edd();
  piStack_4c = (int *)0xffffffff;
  puStack_50 = &DAT_00978474;
  iStack_54 = 0x59d314;
  FUN_00414edd();
  piStack_4c = (int *)0xffffffff;
  puStack_50 = &DAT_00978474;
  iStack_54 = 0x59d321;
  FUN_00414edd();
  if (DAT_0097c1ac == 0) {
    piStack_4c = (int *)0x80004003;
    puStack_50 = (undefined1 *)0x59d336;
    FUN_00878dfb();
  }
  piStack_4c = (int *)0x59d341;
  iVar1 = FUN_0059da91();
  if (iVar1 == 1) {
    *(undefined4 *)(extraout_ECX + 0x394) = 0;
    if (DAT_0097c1ac == 0) {
      piStack_4c = (int *)0x80004003;
      puStack_50 = (undefined1 *)0x59d35c;
      FUN_00878dfb();
    }
    piStack_4c = (int *)0x59d367;
    FUN_0059dad3();
  }
  else {
    *(undefined4 *)(extraout_ECX + 0x394) = 1;
    if (DAT_0097c1ac == 0) {
      piStack_4c = (int *)0x80004003;
      puStack_50 = (undefined1 *)0x59d37d;
      FUN_00878dfb();
    }
    piStack_4c = (int *)0x59d388;
    FUN_0059dab2();
  }
  piStack_4c = (int *)0x38;
  *(undefined4 *)(extraout_ECX + 0x39c) = 0;
  puStack_50 = (undefined1 *)0x59d39a;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    piStack_4c = (int *)0x59d3ab;
    FUN_0059b7c0();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_4c = (int *)0x0;
  puStack_50 = (undefined1 *)0x0;
  iStack_54 = 0;
  iStack_58 = 0;
  uStack_5c = 0;
  iVar1 = FUN_0041f550();
  if (iVar1 == 0) {
    if (DAT_0097c1ac == 0) {
      piStack_4c = (int *)0x80004003;
      puStack_50 = (undefined1 *)0x59d3d1;
      FUN_00878dfb();
    }
    piStack_4c = (int *)0x59d3dc;
    FUN_0059dad3();
  }
  piStack_4c = &DAT_00980690;
  puStack_50 = (undefined1 *)0x59d3ea;
  FUN_00403191();
  piStack_4c = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puStack_50 = (undefined1 *)0x59d3fa;
  FUN_00403191();
  piStack_4c = (int *)0x0;
  puStack_50 = (undefined1 *)0x0;
  iStack_54 = unaff_EBP + -0x38;
  iStack_58 = unaff_EBP + -0x28;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_5c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&uStack_5c,0xf1e);
  iVar1 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_54 = 0x59d444;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    piStack_4c = (int *)(unaff_EBP + -0x14);
    puStack_50 = (undefined1 *)0x59d45a;
    piStack_4c = (int *)FUN_00404b30();
    if (((int)piStack_4c < 0) && (piStack_4c != (int *)0x80004002)) {
      puStack_50 = (undefined1 *)0x59d46b;
      FUN_00878dfb();
    }
  }
  piStack_4c = (int *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_50 = (undefined1 *)0x59d478;
  piStack_4c = (int *)FUN_00402bc3();
  if ((int)piStack_4c < 0) {
    puStack_50 = (undefined1 *)0x59d483;
    FUN_00878dfb();
  }
  piStack_4c = (int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_50 = (undefined1 *)0x59d490;
  piStack_4c = (int *)FUN_00402bc3();
  if ((int)piStack_4c < 0) {
    puStack_50 = (undefined1 *)0x59d49b;
    FUN_00878dfb();
  }
  piStack_4c = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_50 = (undefined1 *)0x59d4a8;
  piStack_4c = (int *)FUN_00402bc3();
  if ((int)piStack_4c < 0) {
    puStack_50 = (undefined1 *)0x59d4b3;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_4c = (int *)0x80004003;
    puStack_50 = (undefined1 *)0x59d4c2;
    FUN_00878dfb();
  }
  piStack_4c = (int *)0x59d4ca;
  uVar2 = FUN_0040cf4d();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x390) = uVar2;
  piStack_4c = *(int **)(unaff_EBP + -0x10);
  if (piStack_4c != (int *)0x0) {
    puStack_50 = (undefined1 *)0x59d4e1;
    (**(code **)(*piStack_4c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


