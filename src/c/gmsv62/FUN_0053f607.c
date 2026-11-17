/* FUN_0053f607 - 0x0053f607 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0053f607(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 *puStack_dc;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(extraout_ECX + 0xb4) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 1;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0x70;
  do {
    puStack_dc = (undefined4 *)0x115b;
    iStack_e0 = unaff_EBP + -0x1c;
    iStack_e4 = 0x53f654;
    puVar1 = (undefined4 *)FUN_00679d22();
    iStack_e0 = *puVar1;
    puStack_dc = *(undefined4 **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_e4 = unaff_EBP + -0x10;
    iStack_e8 = 0x53f667;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      puStack_dc = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
      iStack_e0 = 0x53f67e;
      FUN_00434e38();
    }
    puStack_dc = &DAT_00980690;
    iStack_e0 = 0x53f688;
    FUN_00403191();
    puStack_dc = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_e0 = 0x53f695;
    FUN_00403191();
    puStack_dc = (undefined4 *)0x0;
    iStack_e0 = 0;
    iStack_e4 = 0xffffffff;
    iStack_e8 = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_ec = 0;
    (*DAT_0097b4c8)(0);
    puStack_dc = (undefined4 *)0x53f6b7;
    FUN_0087a1b0();
    puStack_dc = (undefined4 *)0x0;
    iStack_e0 = 0;
    iStack_e4 = unaff_EBP + -0x40;
    iStack_e8 = unaff_EBP + -0x50;
    uStack_ec = 0xffffffff;
    uVar2 = FUN_00449713(&stack0xffffff28);
    uVar2 = FUN_00456ad5(uVar2);
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_ec;
    FUN_004033a1(uVar2);
    iVar3 = unaff_EBP + -0x98;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_e4 = 0x53f70c;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    puStack_dc = (undefined4 *)(unaff_EBP + -0x18);
    iStack_e0 = 0x53f71b;
    puStack_dc = (undefined4 *)FUN_0041a581();
    if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
      iStack_e0 = 0x53f72c;
      FUN_00878dfb();
    }
    puStack_dc = (undefined4 *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_e0 = 0x53f73c;
    puStack_dc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_dc < 0) {
      iStack_e0 = 0x53f747;
      FUN_00878dfb();
    }
    puStack_dc = (undefined4 *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_e0 = 0x53f754;
    puStack_dc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_dc < 0) {
      iStack_e0 = 0x53f75f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_dc = (undefined4 *)(unaff_EBP + -0x40);
    iStack_e0 = 0x53f76c;
    puStack_dc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_dc < 0) {
      iStack_e0 = 0x53f777;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
  } while (*(int *)(unaff_EBP + 8) < 6);
  *(undefined1 *)(extraout_ECX + 0xb0) = 0;
  *(undefined1 *)(extraout_ECX + 0xb1) = 0;
  *(undefined1 *)(extraout_ECX + 0xb2) = 0;
  *(undefined4 *)(extraout_ECX + 0x84) = 1;
  puStack_dc = (undefined4 *)0x53f7b2;
  FUN_0048f37f();
  puStack_dc = (undefined4 *)0xf4;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_e0 = 0x53f7c7;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar3 == 0) {
    puStack_dc = (undefined4 *)0x0;
  }
  else {
    puStack_dc = (undefined4 *)0x53f7d9;
    puStack_dc = (undefined4 *)FUN_0049b755();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_e0 = 0x53f7ed;
  FUN_00495bdd();
  puStack_dc = (undefined4 *)(unaff_EBP + -0xd8);
  iStack_e0 = 0x14;
  iStack_e4 = 0x4b;
  iStack_e8 = 0x37;
  uStack_ec = 6;
  (**(code **)(**(int **)(extraout_ECX + 0x8c) + 0x20))(extraout_ECX,1000,3);
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x1189);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0049e176(uVar2,0);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x118a);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0049e176(uVar2,1);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x118b);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0049e176(uVar2,2);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  iVar3 = FUN_004029b9(0xf4);
  *(int *)(unaff_EBP + 8) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0049b755();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00495bdd(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x94) + 0x20))
            (extraout_ECX,0x3e9,3,0x52,0x37,0x4b,0x14,unaff_EBP + -0xd8);
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x1131);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0049e176(uVar2,0);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x115c);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0049e176(uVar2,1);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x115d);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_0049e176(uVar2,2);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x115e);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0049e176(uVar2,3);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x115f);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_0049e176(uVar2,4);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  iVar3 = FUN_004029b9(0xf4);
  *(int *)(unaff_EBP + 8) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0049b755();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00495bdd(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x9c) + 0x20))
            (extraout_ECX,0x3ea,3,0xd9,0x37,0x4b,0x14,unaff_EBP + -0xd8);
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x118d);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0049e176(uVar2,0);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x48a);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_0049e176(uVar2,1);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -100) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xff000000;
  piVar4 = (int *)FUN_00679e4e(unaff_EBP + -0x18,10);
  *(int **)(unaff_EBP + 8) = piVar4;
  if (*piVar4 != 0) {
    InterlockedIncrement((LONG *)(*piVar4 + 8));
  }
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x74) = **(undefined4 **)(unaff_EBP + 8);
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x58) = 100;
  iVar3 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + 8) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_0045e196(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0xa4) + 8))
            (extraout_ECX,0x3eb,0x126,0x37,0xa3,0x12,unaff_EBP + -0x88);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  uVar2 = FUN_00679d86(unaff_EBP + 8,0x1152);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0xac) + 0x20))
            (extraout_ECX,0x3ec,0x1ce,0x37,0,unaff_EBP + -0x30);
  FUN_0053ffb9();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0045c14e();
  if (*(int *)(unaff_EBP + -0xa0) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


