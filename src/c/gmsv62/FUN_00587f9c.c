/* FUN_00587f9c - 0x00587f9c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00587f9c(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  iStack_a4 = unaff_EBP + -0x24;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_a8 = 0x587fce;
  puVar1 = (undefined4 *)FUN_00679d22();
  iStack_a4 = *puVar1;
  iStack_a8 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_ac = 0x587fe4;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  iStack_a4 = 0x587ffd;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  iStack_a4 = unaff_EBP + -0x54;
  iStack_a8 = 0x58800b;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_a4 = 0x588017;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_a4 = 0x588025;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
  iStack_a4 = unaff_EBP + -0x1c;
  iStack_a8 = 0x588033;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_a4 = 5799999;
    FUN_00878dfb();
  }
  iStack_a4 = 0;
  iStack_a8 = unaff_EBP + -0x54;
  iStack_ac = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_b0 = 0x588055;
  uVar3 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_b0;
  uStack_b0 = extraout_ECX_00;
  FUN_00448a17(uVar3);
  iVar2 = unaff_EBP + -0x9c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_a8 = 0x58808a;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
  iStack_a4 = 0x58809c;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_a4 = 0x5880ad;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_a4 = 0x5880bd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a4 = 0x5880c8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_a4 = 0x5880d5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a4 = 0x5880e0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_a4 = 0x5880ed;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a4 = 0x5880f8;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(extraout_ECX + 0xd4);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iStack_a4 = unaff_EBP + -0x3c;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_a8 = 0x5885bf;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_a4 = 0x5885cc;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00402676();
    iStack_a4 = 0x5885e9;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar2 != 0) {
      FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_a4 = 0x58860f;
    FUN_00450382();
    iStack_a4 = 0;
    iStack_a8 = 0x96;
    iStack_ac = 0xc4;
    uStack_b0 = 1000;
    (**(code **)(**(int **)(extraout_ECX + 0xe4) + 0x20))(extraout_ECX);
    uVar3 = FUN_00679d86(unaff_EBP + -0x2c,0xbb2);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00402676();
    iVar2 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x20) = iVar2;
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
              (extraout_ECX,0x3e9,0x6b,0x96,0,unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = *(int *)(unaff_EBP + -0x10);
LAB_005886af:
    if (iVar2 != 0) {
      iStack_a4 = 0x5886bc;
      FUN_00403384();
    }
  }
  else {
    if (iVar2 == 1) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iStack_a4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_a8 = 0x58840e;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_a4 = 0x58841b;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_00402676();
      iStack_a4 = 0x588438;
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (iVar2 != 0) {
        FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_a4 = 0x58845e;
      FUN_00450382();
      iStack_a4 = 0;
      iStack_a8 = 0x96;
      iStack_ac = 0x6b;
      uStack_b0 = 1000;
      (**(code **)(**(int **)(extraout_ECX + 0xe4) + 0x20))(extraout_ECX);
      uVar3 = FUN_00679d86(unaff_EBP + -0x30,0xbb2);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_00419192(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_00402676();
      iVar2 = FUN_004029b9(0x578);
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_00450382(uVar3);
      (**(code **)(**(int **)(extraout_ECX + 0xec) + 0x20))
                (extraout_ECX,0x3e9,0xc4,0x96,0,unaff_EBP + -0x1c);
      FUN_0049f842();
      *(undefined4 *)(unaff_EBP + -0x68) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      *(undefined4 *)(unaff_EBP + -0x70) = 0xff000000;
      *(undefined4 *)(unaff_EBP + -0x5c) = 8;
      *(undefined4 *)(unaff_EBP + -100) = 1;
      iVar2 = FUN_004029b9(0xb8);
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_004a0726();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      FUN_0045e196(uVar3);
      (**(code **)(**(int **)(extraout_ECX + 0xfc) + 8))
                (extraout_ECX,0x3eb,0x82,0x67,0x96,0xf,unaff_EBP + -0x8c);
      iStack_a4 = 0x588580;
      FUN_008164fd();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_0045c14e();
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 != 3) goto LAB_005886bd;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        *(undefined4 *)(unaff_EBP + -0x1c) = 1;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        iStack_a4 = unaff_EBP + -0x24;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iStack_a8 = 0x58813f;
        FUN_00679d86();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iStack_a4 = 0x58814c;
        FUN_00419192();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00402676();
        iStack_a4 = 0x588169;
        iVar2 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x20) = iVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (iVar2 != 0) {
          FUN_0044f3fa();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iStack_a4 = 0x58818f;
        FUN_00450382();
        iStack_a4 = 0;
        iStack_a8 = 0x96;
        iStack_ac = 0x84;
        uStack_b0 = 1000;
        (**(code **)(**(int **)(extraout_ECX + 0xe4) + 0x20))(extraout_ECX);
        uVar3 = FUN_00679d86(unaff_EBP + -0x40,0xbb2);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_00419192(uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00402676();
        iVar2 = FUN_004029b9(0x578);
        *(int *)(unaff_EBP + -0x20) = iVar2;
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
                  (extraout_ECX,0x3e9,0xd4,0x96,0,unaff_EBP + -0x1c);
        uVar3 = FUN_00679d86(unaff_EBP + -0x44,0xbb3);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        FUN_00419192(uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00402676();
        iVar2 = FUN_004029b9(0x578);
        *(int *)(unaff_EBP + -0x20) = iVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_0044f3fa();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00450382(uVar3);
        (**(code **)(**(int **)(extraout_ECX + 0xec) + 0x20))
                  (extraout_ECX,0x3ea,0x2f,0x96,0,unaff_EBP + -0x1c);
        FUN_0049f842();
        *(undefined4 *)(unaff_EBP + -0x68) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        *(undefined4 *)(unaff_EBP + -0x70) = 0xff000000;
        *(undefined4 *)(unaff_EBP + -0x5c) = 8;
        *(undefined4 *)(unaff_EBP + -100) = 1;
        iVar2 = FUN_004029b9(0xb8);
        *(int *)(unaff_EBP + -0x20) = iVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_004a0726();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_0045e196(uVar3);
        (**(code **)(**(int **)(extraout_ECX + 0xfc) + 8))
                  (extraout_ECX,0x3eb,0x82,0x67,0x96,0xf,unaff_EBP + -0x8c);
        iStack_a4 = 0x58832c;
        FUN_008164fd();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_0045c14e();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar2 = *(int *)(unaff_EBP + -0x10);
        goto LAB_005886af;
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iStack_a4 = unaff_EBP + -0x34;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_a8 = 0x58836b;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_a4 = 0x588378;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_00402676();
      iStack_a4 = 0x588393;
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      if (iVar2 != 0) {
        FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_a4 = 0x5883b9;
      FUN_00450382();
      iStack_a4 = 0;
      iStack_a8 = 0x96;
      iStack_ac = 0xa2;
      uStack_b0 = 1000;
      (**(code **)(**(int **)(extraout_ECX + 0xe4) + 0x20))(extraout_ECX);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    FUN_00402676();
  }
LAB_005886bd:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


