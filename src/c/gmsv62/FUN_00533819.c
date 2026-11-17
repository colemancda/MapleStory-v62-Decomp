/* FUN_00533819 - 0x00533819 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00533819(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x3af);
  uVar5 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0040381b(uVar5,unaff_EBP + -0x14,0);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x18) + -0xc);
  }
  *(undefined4 *)(extraout_ECX + 0x1c) = 0x10a;
  *(undefined4 *)(extraout_ECX + 0x20) = 0x10c;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00403191(&DAT_00980690);
  piVar4 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar4 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar4 = *(int **)(unaff_EBP + -0x14);
  }
  uVar5 = *(undefined4 *)(extraout_ECX + 0x20);
  iVar3 = *piVar4;
  uVar1 = *(undefined4 *)(extraout_ECX + 0x1c);
  *(int **)(unaff_EBP + -0x18) = piVar4;
  iVar3 = (**(code **)(iVar3 + 0x2c))
                    (piVar4,uVar1,uVar5,*(undefined4 *)(unaff_EBP + -0x5c),
                     *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                     *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = *(int **)(unaff_EBP + -0x14);
  iVar3 = (**(code **)(*piVar4 + 0x70))(piVar4,0);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar4,&DAT_00963cc8);
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = *(int **)(unaff_EBP + -0x14);
  iVar3 = (**(code **)(*piVar4 + 0x78))(piVar4,0);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar4,&DAT_00963cc8);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x18);
  iVar3 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004250ac(unaff_EBP + -0xc4,*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x3c,
               unaff_EBP + -0x5c,unaff_EBP + -0x7c,unaff_EBP + -0x6c,unaff_EBP + -0x4c);
  iVar3 = FUN_00402bc3(unaff_EBP + -0xc4);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x7c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x6c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x10);
  iVar3 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)FUN_0042fb5e(unaff_EBP + -0x1c);
  iVar3 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar4;
  iVar3 = *(int *)(extraout_ECX + 0x20);
  *(int **)(unaff_EBP + -0x18) = piVar4;
  iVar3 = (**(code **)(*piVar4 + 0x90))
                    (*(undefined4 *)(unaff_EBP + -0x18),(800 - *(int *)(extraout_ECX + 0x1c)) / 2,
                     (600 - iVar3) / 2,*(undefined4 *)(unaff_EBP + -0x4c),
                     *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                     *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x6c),
                     *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100),
                     *(undefined4 *)(unaff_EBP + -0x60));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
  }
  FUN_004125d9();
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x6c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_0048f37f();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  *(undefined4 *)(unaff_EBP + -0x104) = 0xffeeeeee;
  *(undefined4 *)(unaff_EBP + -0x100) = 0xffa5a198;
  *(undefined4 *)(unaff_EBP + -0xfc) = 0xff999999;
  iVar3 = FUN_004029b9(0xf4);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0049b755();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00495bdd(uVar5);
  (**(code **)(**(int **)(extraout_ECX + 0xa4) + 0x20))
            (extraout_ECX,0x3eb,4,0x13,0x2e,0x39,0x12,unaff_EBP + -0x104);
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x118c);
  uVar5 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_0049e176(uVar5,1);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
  }
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x115c);
  uVar5 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_0049e176(uVar5,2);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
  }
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x115d);
  uVar5 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0049e176(uVar5,3);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00414ebb();
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x115e);
  uVar5 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_0049e176(uVar5,4);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00414ebb();
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x115f);
  uVar5 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_0049e176(uVar5,5);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00414ebb();
  FUN_0049f842();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  *(undefined4 *)(unaff_EBP + -0x90) = 0xffa4c4e6;
  *(undefined4 *)(unaff_EBP + -0x98) = 0xff0900de;
  puVar2 = (undefined4 *)FUN_00679e4e(unaff_EBP + -0x10,10);
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0xa0) = *puVar2;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x84) = 0x14;
  iVar3 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_0045e196(uVar5);
  (**(code **)(**(int **)(extraout_ECX + 0x9c) + 8))
            (extraout_ECX,0x3ea,0x4a,0x2f,0x87,0xf,unaff_EBP + -0xb4);
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 1;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  uVar5 = FUN_00679d86(unaff_EBP + -0x10,0x1152);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00419192(uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iVar3 = FUN_00450382(uVar5);
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))(extraout_ECX,0x3e9,0xd4,0x2e,0,unaff_EBP + -0x2c);
  uVar5 = FUN_00679d86(unaff_EBP + -0x10,0x9f7);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00419192(uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00450382(uVar5);
  (**(code **)(**(int **)(extraout_ECX + 0x94) + 0x20))(extraout_ECX,2,0xf3,0xc,0,unaff_EBP + -0x2c)
  ;
  iVar3 = FUN_004029b9(0x74);
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_0048b9e9(uVar5);
  FUN_005346a0();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_0045c14e();
  if (*(int *)(unaff_EBP + -0xcc) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  }
  piVar4 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


