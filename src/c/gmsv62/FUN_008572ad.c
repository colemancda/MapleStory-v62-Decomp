/* FUN_008572ad - 0x008572ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_008572ad(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int unaff_EBP;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 *puStack_74;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    puStack_74 = (undefined4 *)0xfbb;
    iStack_78 = unaff_EBP + -0x18;
    uStack_7c = 0x8572ec;
    puStack_74 = (undefined4 *)FUN_00679d22();
    puStack_74 = (undefined4 *)*puStack_74;
    iStack_78 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_7c = 0x8572fb;
    FUN_00434e21();
    iVar2 = *(int *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  else {
    if (*(int *)(unaff_EBP + 0xc) != 1) goto LAB_00857341;
    puStack_74 = (undefined4 *)0xfbc;
    iStack_78 = unaff_EBP + -0x18;
    uStack_7c = 0x85731b;
    puStack_74 = (undefined4 *)FUN_00679d22();
    puStack_74 = (undefined4 *)*puStack_74;
    iStack_78 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_7c = 0x85732a;
    FUN_00434e21();
    iVar2 = *(int *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  if (iVar2 != 0) {
    puStack_74 = (undefined4 *)(iVar2 + -0xc);
    iStack_78 = 0x857340;
    FUN_00434e38();
  }
LAB_00857341:
  puStack_74 = &DAT_00980690;
  iStack_78 = 0x85734f;
  FUN_00403191();
  puStack_74 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_78 = 0x85735c;
  FUN_00403191();
  puStack_74 = (undefined4 *)0x0;
  iStack_78 = 0;
  uStack_7c = 0xffffffff;
  uStack_80 = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_84 = 0;
  uStack_88 = 0;
  piStack_8c = (int *)0x85736f;
  (*DAT_0097b4c8)();
  piStack_8c = (int *)0x85737c;
  FUN_0087a1b0();
  piStack_8c = (int *)0x0;
  iStack_90 = 0;
  iStack_94 = unaff_EBP + -0x40;
  iStack_98 = unaff_EBP + -0x30;
  uStack_9c = 0xffffffff;
  uVar1 = FUN_00449713(&uStack_88);
  uVar1 = FUN_00456ad5(uVar1);
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_9c;
  FUN_004033a1(uVar1);
  iVar2 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_94 = 0x8573cc;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  if (iVar2 != 0) {
    piStack_8c = (int *)(unaff_EBP + -0x18);
    iStack_90 = 0x8573e2;
    piStack_8c = (int *)FUN_0041a581();
    if (((int)piStack_8c < 0) && (piStack_8c != (int *)0x80004002)) {
      iStack_90 = 0x8573f3;
      FUN_00878dfb();
    }
  }
  piStack_8c = (int *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_90 = 0x857400;
  piStack_8c = (int *)FUN_00402bc3();
  if ((int)piStack_8c < 0) {
    iStack_90 = 0x85740b;
    FUN_00878dfb();
  }
  piStack_8c = (int *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_90 = 0x857418;
  piStack_8c = (int *)FUN_00402bc3();
  if ((int)piStack_8c < 0) {
    iStack_90 = 0x857423;
    FUN_00878dfb();
  }
  piStack_8c = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_90 = 0x857430;
  piStack_8c = (int *)FUN_00402bc3();
  if ((int)piStack_8c < 0) {
    iStack_90 = 0x85743b;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    piStack_8c = (int *)0x3af;
    iStack_90 = unaff_EBP + -0x1c;
    iStack_94 = 0x857454;
    puVar3 = (undefined4 *)FUN_00679d86();
    iStack_94 = *puVar3;
    piStack_8c = (int *)0x0;
    iStack_90 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_98 = 0x857465;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_8c = (int *)0x857474;
    FUN_00402676();
    piStack_8c = &DAT_00980690;
    iStack_90 = 0x85747d;
    FUN_00403191();
    piStack_8c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_90 = 0x85748a;
    FUN_00403191();
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (piVar4 == (int *)0x0) {
      piStack_8c = (int *)0x80004003;
      iStack_90 = 0x85749f;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    iStack_98 = *(int *)(unaff_EBP + -0x60);
    iStack_94 = *(int *)(unaff_EBP + -0x5c);
    iVar2 = *piVar4;
    iStack_90 = *(undefined4 *)(unaff_EBP + -0x58);
    piStack_8c = *(int **)(unaff_EBP + -0x54);
    *(int **)(unaff_EBP + -0x1c) = piVar4;
    uStack_9c = *(undefined4 *)(unaff_EBP + -0x44);
    iVar2 = (**(code **)(iVar2 + 0x2c))
                      (piVar4,0x11,0x11,*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x50);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x60);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_004031b7(0xff,3);
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar4;
    *(int **)(unaff_EBP + -0x1c) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar4,0,0,*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                       *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54));
    if (iVar2 < 0) {
      piStack_8c = (int *)&DAT_00963cc8;
      iStack_90 = *(undefined4 *)(unaff_EBP + -0x1c);
      iStack_98 = 0x85755f;
      iStack_94 = iVar2;
      FUN_00878e09();
    }
    piStack_8c = (int *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_90 = 0x85756c;
    piStack_8c = (int *)FUN_00402bc3();
    if ((int)piStack_8c < 0) {
      iStack_90 = 0x857577;
      FUN_00878dfb();
    }
  }
  piStack_8c = *(int **)(unaff_EBP + -0x10);
  piVar4 = *(int **)(unaff_EBP + 8);
  *piVar4 = (int)piStack_8c;
  if (piStack_8c != (int *)0x0) {
    iStack_90 = 0x857589;
    (**(code **)(*piStack_8c + 4))();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  piStack_8c = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piStack_8c != (int *)0x0) {
    iStack_90 = 0x8575a1;
    (**(code **)(*piStack_8c + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_8c = (int *)0x8575ad;
  FUN_00414ebb();
  piStack_8c = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_8c != (int *)0x0) {
    iStack_90 = 0x8575bd;
    (**(code **)(*piStack_8c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar4;
}


