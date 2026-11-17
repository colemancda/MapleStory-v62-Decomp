/* FUN_004a667b - 0x004a667b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a667b(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int *piVar5;
  int unaff_EBP;
  int iStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iVar6;
  
  FUN_00879bb8();
  FUN_00498b1f();
  piVar5 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar5 == (int *)0x0) {
    FUN_00878dfb();
    piVar5 = *(int **)(unaff_EBP + -0x10);
  }
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(int **)(unaff_EBP + -0x18) = piVar5;
  iVar2 = (**(code **)(*piVar5 + 0x8c))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  piVar5 = *(int **)(unaff_EBP + -0x10);
  if (piVar5 == (int *)0x0) {
    FUN_00878dfb();
    piVar5 = *(int **)(unaff_EBP + -0x10);
  }
  uVar3 = *(undefined4 *)(unaff_EBP + 8);
  *(int **)(unaff_EBP + 0xc) = piVar5;
  iVar2 = (**(code **)(*piVar5 + 0x8c))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  *(int **)(unaff_EBP + 8) = *(int **)(unaff_EBP + -0x10);
  iStack_e0 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x8c))();
  if (iStack_e0 < 0) {
    iStack_dc = *(int *)(unaff_EBP + 8);
    uStack_e4 = 0x4a677b;
    FUN_00878e09();
  }
  iStack_dc = unaff_EBP + -0x14;
  iVar6 = 1;
  iStack_e0 = 0x4a6786;
  FUN_007d4a9a();
  iVar2 = *(int *)(extraout_ECX + 0x54);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    iStack_dc = *(int *)(extraout_ECX + 0x40);
    *(int **)(unaff_EBP + 8) = &iStack_e8;
    iStack_e8 = iVar6;
    uStack_e4 = uVar3;
    iStack_e0 = iVar1;
    FUN_0046fc23(unaff_EBP + -0x10);
    FUN_007d32d4();
  }
  else {
    iVar2 = *(int *)(extraout_ECX + 0x58);
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    if (iVar2 != 0) {
      do {
        iVar6 = *(int *)((-(uint)(iVar2 != 0) & iVar2 - 0x10U) + 4);
        *(uint *)(unaff_EBP + -0x18) = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
        iStack_dc = 0x4a67f2;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_dc = 0x4a6801;
        iStack_e0 = FUN_00449713();
        *(int **)(unaff_EBP + 0xc) = &iStack_dc;
        uStack_e4 = 0x4a680d;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_e0 = 0x4a6819;
        FUN_0044974c();
        iStack_e0 = 0x4a6820;
        uVar3 = FUN_00448ebb();
        *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
        iVar6 = unaff_EBP + -0x6c;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_dc = 0x4a6830;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_dc = 0x4a683b;
          FUN_00878dfb();
          iVar6 = extraout_ECX_00;
        }
        iStack_dc = *(int *)(iVar2 + 8);
        uStack_e4 = *(undefined4 *)(unaff_EBP + 8);
        *(int **)(unaff_EBP + -0x1c) = &iStack_e8;
        iStack_e8 = iVar6;
        iStack_e0 = iVar1;
        FUN_0046fc23(unaff_EBP + -0x10);
        FUN_007d32d4();
        iVar6 = *(int *)(iVar2 + 4);
        if (iVar6 == 0x800) {
          iStack_dc = 0x4a69ee;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_dc = 0x4a69fb;
          FUN_00403191();
          iStack_dc = unaff_EBP + -0x7c;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iStack_e0 = 0x4a6a12;
          iStack_e0 = FUN_00449749();
          uStack_e4 = 0x4a6a1a;
          iStack_e8 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + 0xc) = &uStack_e4;
          uStack_e4 = extraout_ECX_03;
          FUN_00448a17();
          iStack_e8 = iVar1 + 2;
          iVar6 = *(int *)(unaff_EBP + 8) + 5;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_004115d9(iVar6);
          FUN_00448e3a(iVar6);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_dc = 0x4a6a51;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            iStack_dc = 0x4a6a5c;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_004a6a66:
          iStack_dc = 0x4a6a6c;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            iStack_dc = 0x4a6a77;
            FUN_00878dfb();
          }
        }
        else {
          if (iVar6 == 0x801) {
            iStack_dc = 0x4a6936;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
            iStack_dc = unaff_EBP + -0x5c;
            iStack_e0 = 0x4a6940;
            iVar6 = FUN_00402e32();
            if (iVar6 < 0) {
              iStack_dc = 0x4a694c;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 7;
            iStack_dc = 0x4a695a;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
            iStack_dc = unaff_EBP + -0x4c;
            iStack_e0 = 0x4a6964;
            iVar6 = FUN_00402e32();
            if (iVar6 < 0) {
              iStack_dc = 0x4a6970;
              FUN_00878dfb();
            }
            iStack_dc = unaff_EBP + -0x4c;
            *(undefined1 *)(unaff_EBP + -4) = 8;
            iStack_e0 = 0x4a6984;
            iStack_e0 = FUN_00449749();
            uStack_e4 = 0x4a698c;
            iStack_e8 = FUN_00449713();
            *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_e4;
            uStack_e4 = extraout_ECX_02;
            FUN_00448a17();
            iStack_e8 = iVar1 + 2;
            iVar6 = (*(int *)(iVar2 + 8) - *(int *)(unaff_EBP + 0xc)) / 2 + *(int *)(unaff_EBP + 8);
            *(undefined1 *)(unaff_EBP + -4) = 8;
            FUN_004115d9(iVar6);
            FUN_00448e3a(iVar6);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            iStack_dc = 0x4a69cb;
            iVar6 = FUN_00402bc3();
            if (iVar6 < 0) {
              iStack_dc = 0x4a69d6;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 1;
            goto LAB_004a6a66;
          }
          if (iVar6 == 0x802) {
            iStack_dc = 0x4a6881;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
            iStack_dc = unaff_EBP + -0x3c;
            iStack_e0 = 0x4a688b;
            iVar6 = FUN_00402e32();
            if (iVar6 < 0) {
              iStack_dc = 0x4a6897;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 10;
            iStack_dc = 0x4a68a5;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
            iStack_dc = unaff_EBP + -0x2c;
            iStack_e0 = 0x4a68af;
            iVar6 = FUN_00402e32();
            if (iVar6 < 0) {
              iStack_dc = 0x4a68bb;
              FUN_00878dfb();
            }
            iStack_dc = unaff_EBP + -0x2c;
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            iStack_e0 = 0x4a68cf;
            iStack_e0 = FUN_00449749();
            uStack_e4 = 0x4a68d7;
            iStack_e8 = FUN_00449713();
            *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_e4;
            uStack_e4 = extraout_ECX_01;
            FUN_00448a17();
            iStack_e8 = iVar1 + 2;
            iVar6 = *(int *)(iVar2 + 8);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            iVar6 = (iVar6 - *(int *)(unaff_EBP + 0xc)) + -6 + *(int *)(unaff_EBP + 8);
            FUN_004115d9(iVar6);
            FUN_00448e3a(iVar6);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            iStack_dc = 0x4a6915;
            iVar6 = FUN_00402bc3();
            if (iVar6 < 0) {
              iStack_dc = 0x4a6920;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 1;
            goto LAB_004a6a66;
          }
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(iVar2 + 8);
        if (*(int *)(unaff_EBP + -0x18) == 0) break;
        iVar2 = *(int *)(unaff_EBP + -0x18);
      } while( true );
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_dc = 0x4a6a98;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_dc = 0x4a6aa9;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


