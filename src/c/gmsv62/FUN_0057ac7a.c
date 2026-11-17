/* FUN_0057ac7a - 0x0057ac7a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0057ac7a(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xd4) != 7) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_b4 = unaff_EBP + -0x24;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_b8 = 0x57acb9;
    puVar1 = (undefined4 *)FUN_00679d22();
    iStack_b4 = *puVar1;
    iStack_b8 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_bc = 0x57accf;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    iStack_b4 = 0x57ace7;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
    iStack_b4 = unaff_EBP + -0x20;
    iStack_b8 = 0x57acf5;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_b4 = 0x57ad01;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_b4 = 0x57ad0f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_b4 = unaff_EBP + -0x38;
    iStack_b8 = 0x57ad1d;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_b4 = 0x57ad29;
      FUN_00878dfb();
    }
    iStack_b4 = 0;
    iStack_b8 = unaff_EBP + -0x20;
    iStack_bc = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_c0 = 0x57ad3f;
    uVar3 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x28) = &uStack_c0;
    FUN_00448a17(uVar3);
    iVar2 = unaff_EBP + -0x74;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_b8 = 0x57ad71;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
    iStack_b4 = 0x57ad83;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_b4 = 0x57ad94;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_b4 = 0x57ada1;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_b4 = 0x57adac;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_b4 = 0x57adb9;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_b4 = 0x57adc4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_b4 = 0x57add1;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_b4 = 0x57addc;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  switch(*(undefined4 *)(extraout_ECX + 0xd4)) {
  case 0:
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 1;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iStack_b4 = unaff_EBP + -0x24;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    iStack_b8 = 0x57ae29;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_b4 = 0x57ae36;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00402676();
    iStack_b4 = 0x57ae53;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar2 != 0) {
      FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_b4 = 0x57ae79;
    FUN_00450382();
    iStack_b4 = 0;
    iStack_b8 = 0x96;
    iStack_bc = 0x6b;
    uStack_c0 = 1000;
    (**(code **)(**(int **)(extraout_ECX + 0xe4) + 0x20))(extraout_ECX);
    uVar3 = FUN_00679d86(unaff_EBP + -100,0x531);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00402676();
    iVar2 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00450382(uVar3);
    (**(code **)(**(int **)(extraout_ECX + 0xec) + 0x20))
              (extraout_ECX,0x3e9,0xc4,0x96,0,unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = *(int *)(unaff_EBP + -0x14);
    break;
  case 1:
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 1;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iStack_b4 = unaff_EBP + -0x4c;
    *(undefined4 *)(unaff_EBP + -4) = 0xb;
    iStack_b8 = 0x57af46;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_b4 = 0x57af53;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00402676();
    iStack_b4 = 0x57af70;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (iVar2 != 0) {
      FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_b4 = 0x57af96;
    FUN_00450382();
    iStack_b4 = 0;
    iStack_b8 = 0x96;
    iStack_bc = 0x5a;
    uStack_c0 = 1000;
    (**(code **)(**(int **)(extraout_ECX + 0xe4) + 0x20))(extraout_ECX);
    uVar3 = FUN_00679d86(unaff_EBP + -0x54,0x531);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00402676();
    iVar2 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00450382(uVar3);
    (**(code **)(**(int **)(extraout_ECX + 0xec) + 0x20))
              (extraout_ECX,0x3e9,0xc4,0x96,0,unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = *(int *)(unaff_EBP + -0x14);
    break;
  case 2:
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 1;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iStack_b4 = unaff_EBP + -0x5c;
    *(undefined4 *)(unaff_EBP + -4) = 0x10;
    iStack_b8 = 0x57b063;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_b4 = 0x57b070;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00402676();
    iStack_b4 = 0x57b08d;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (iVar2 != 0) {
      FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_b4 = 0x57b0b3;
    FUN_00450382();
    iStack_b4 = 0;
    iStack_b8 = 0x96;
    iStack_bc = 0x5a;
    uStack_c0 = 1000;
    (**(code **)(**(int **)(extraout_ECX + 0xe4) + 0x20))(extraout_ECX);
    uVar3 = FUN_00679d86(unaff_EBP + -0x58,0xdb8);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00402676();
    iVar2 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00450382(uVar3);
    (**(code **)(**(int **)(extraout_ECX + 0xec) + 0x20))
              (extraout_ECX,0x3e9,0xc4,0x96,0,unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = *(int *)(unaff_EBP + -0x14);
    break;
  case 3:
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 1;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iStack_b4 = unaff_EBP + -0x48;
    *(undefined4 *)(unaff_EBP + -4) = 0x15;
    iStack_b8 = 0x57b180;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_b4 = 0x57b18d;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_00402676();
    iStack_b4 = 0x57b1aa;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (iVar2 != 0) {
      FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_b4 = 0x57b1d0;
    FUN_00450382();
    iStack_b4 = 0;
    iStack_b8 = 0x96;
    iStack_bc = 0x6b;
    uStack_c0 = 1000;
    (**(code **)(**(int **)(extraout_ECX + 0xe4) + 0x20))(extraout_ECX);
    uVar3 = FUN_00679d86(unaff_EBP + -0x3c,0xdba);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_00402676();
    iVar2 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_00450382(uVar3);
    (**(code **)(**(int **)(extraout_ECX + 0xec) + 0x20))
              (extraout_ECX,0x3e9,0xc4,0x96,0,unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = *(int *)(unaff_EBP + -0x14);
    break;
  case 4:
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 1;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iStack_b4 = unaff_EBP + -0x50;
    *(undefined4 *)(unaff_EBP + -4) = 0x1a;
    iStack_b8 = 0x57b2af;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_b4 = 0x57b2bc;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    FUN_00402676();
    iStack_b4 = 0x57b2d7;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    if (iVar2 != 0) {
      FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_b4 = 0x57b2fd;
    FUN_00450382();
    iStack_b4 = 0;
    iStack_b8 = 0x96;
    iStack_bc = 0xa2;
    uStack_c0 = 1000;
    (**(code **)(**(int **)(extraout_ECX + 0xe4) + 0x20))(extraout_ECX);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_0057b62b;
  case 5:
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 1;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iStack_b4 = unaff_EBP + -0x60;
    *(undefined4 *)(unaff_EBP + -4) = 0x1d;
    iStack_b8 = 0x57b350;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_b4 = 0x57b35d;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    FUN_00402676();
    iStack_b4 = 0x57b378;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    if (iVar2 != 0) {
      FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_b4 = 0x57b39e;
    FUN_00450382();
    iStack_b4 = 0;
    iStack_b8 = 0x96;
    iStack_bc = 0xa2;
    uStack_c0 = 1000;
    (**(code **)(**(int **)(extraout_ECX + 0xe4) + 0x20))(extraout_ECX);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_0057b62b;
  case 6:
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 1;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iStack_b4 = unaff_EBP + -0x40;
    *(undefined4 *)(unaff_EBP + -4) = 0x20;
    iStack_b8 = 0x57b3f1;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_b4 = 0x57b3fe;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    FUN_00402676();
    iStack_b4 = 0x57b41b;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    if (iVar2 != 0) {
      FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iStack_b4 = 0x57b441;
    FUN_00450382();
    iStack_b4 = 0;
    iStack_b8 = 0x96;
    iStack_bc = 0x6b;
    uStack_c0 = 1000;
    (**(code **)(**(int **)(extraout_ECX + 0xe4) + 0x20))(extraout_ECX);
    uVar3 = FUN_00679d86(unaff_EBP + -0x44,0x531);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    FUN_00402676();
    iVar2 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    FUN_00450382(uVar3);
    (**(code **)(**(int **)(extraout_ECX + 0xec) + 0x20))
              (extraout_ECX,0x3e9,0xc4,0x96,0,unaff_EBP + -0x20);
    FUN_0049f842();
    *(undefined4 *)(unaff_EBP + -0x88) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    *(undefined4 *)(unaff_EBP + -0x90) = 0xff000000;
    *(undefined4 *)(unaff_EBP + -0x7c) = 8;
    *(undefined4 *)(unaff_EBP + -0x84) = 1;
    iVar2 = FUN_004029b9(0xb8);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004a0726();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_0045e196(uVar3);
    (**(code **)(**(int **)(extraout_ECX + 0xf4) + 8))
              (extraout_ECX,0x3ea,0x82,0x67,0x96,0xf,unaff_EBP + -0xac);
    FUN_008164fd(*(undefined4 *)(extraout_ECX + 0xf4));
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    FUN_0045c14e();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_0057b62b;
  case 7:
    *(undefined4 *)(extraout_ECX + 0xf8) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 1;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    iStack_b4 = unaff_EBP + -0x28;
    *(undefined4 *)(unaff_EBP + -4) = 0x27;
    iStack_b8 = 0x57b5b6;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    iStack_b4 = 0x57b5c3;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    FUN_00402676();
    iStack_b4 = 0x57b5de;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    if (iVar2 != 0) {
      FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    iStack_b4 = 0x57b604;
    FUN_00450382();
    iStack_b4 = 0;
    iStack_b8 = 0xac;
    iStack_bc = 0x156;
    uStack_c0 = 1000;
    (**(code **)(**(int **)(extraout_ECX + 0xe4) + 0x20))(extraout_ECX);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_0057b62b:
    FUN_00402676();
  default:
    goto switchD_0057adfb_default;
  }
  if (iVar2 != 0) {
    FUN_00403384(iVar2 + -0xc);
  }
switchD_0057adfb_default:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


