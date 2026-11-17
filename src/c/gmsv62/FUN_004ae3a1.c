/* FUN_004ae3a1 - 0x004ae3a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ae3a1(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int unaff_EBP;
  int *piVar4;
  undefined4 uStack_c4;
  int iStack_c0;
  int *piStack_bc;
  
  FUN_00879bb8();
  FUN_00498b1f();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  piVar4 = *(int **)(unaff_EBP + -0x10);
  iVar1 = (**(code **)(*piVar4 + 0x8c))();
  if (iVar1 < 0) {
    uStack_c4 = 0x4ae404;
    iStack_c0 = iVar1;
    piStack_bc = piVar4;
    FUN_00878e09();
  }
  if (*(int *)(extraout_ECX + 0x38) == 0) {
    FUN_004125e6();
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    while ((iVar1 = *(int *)(extraout_ECX + 0x5c), iVar1 != 0 &&
           (*(uint *)(unaff_EBP + -0x14) < *(uint *)(iVar1 + -4)))) {
      piVar4 = (int *)(*(int *)(unaff_EBP + -0x18) + iVar1);
      piStack_bc = (int *)0x4ae449;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_bc = (int *)0x4ae456;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      piStack_bc = (int *)(unaff_EBP + -0x6c);
      iStack_c0 = 0x4ae478;
      iStack_c0 = FUN_00449749();
      uStack_c4 = 0x4ae481;
      uVar2 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_c4;
      FUN_00448a17(uVar2);
      iVar1 = piVar4[3] + -1 + *(int *)(unaff_EBP + 0xc);
      iVar3 = *(int *)(unaff_EBP + 8) + piVar4[2];
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_004115d9(iVar3,iVar1);
      FUN_00448e3a(iVar3,iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_bc = (int *)0x4ae4bf;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_bc = (int *)0x4ae4ca;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_bc = (int *)0x4ae4da;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_bc = (int *)0x4ae4e5;
        FUN_00878dfb();
      }
      if ((*piVar4 < 0) || (*(int *)(extraout_ECX + 0x34) != *piVar4)) {
        piStack_bc = (int *)0x4ae663;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
        piStack_bc = (int *)(unaff_EBP + -0x5c);
        iStack_c0 = 0x4ae66d;
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          piStack_bc = (int *)0x4ae679;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 10;
        piStack_bc = (int *)0x4ae687;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
        piStack_bc = (int *)(unaff_EBP + -0x3c);
        iStack_c0 = 0x4ae691;
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          piStack_bc = (int *)0x4ae69d;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_bc = (int *)(unaff_EBP + -0x3c);
        iStack_c0 = 0x4ae6bc;
        iStack_c0 = FUN_00449749();
        uStack_c4 = 0x4ae6c5;
        uVar2 = FUN_00449713();
        *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_c4;
        uStack_c4 = extraout_ECX_02;
        FUN_00448a17(uVar2);
        iVar1 = piVar4[3] + -1 + *(int *)(unaff_EBP + 0xc);
        iVar3 = *(int *)(unaff_EBP + 8) + piVar4[2];
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_004115d9(iVar3,iVar1);
        FUN_00448e3a(iVar3,iVar1);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        piStack_bc = (int *)0x4ae703;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          piStack_bc = (int *)0x4ae70e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_004ae715:
        piStack_bc = (int *)0x4ae71b;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          piStack_bc = (int *)0x4ae726;
          FUN_00878dfb();
        }
      }
      else {
        piStack_bc = (int *)0x4ae504;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_bc = (int *)0x4ae511;
        FUN_00403191();
        piStack_bc = (int *)(unaff_EBP + -0x7c);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iStack_c0 = 0x4ae528;
        iStack_c0 = FUN_00449749();
        uStack_c4 = 0x4ae531;
        uVar2 = FUN_00449713();
        *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_c4;
        uStack_c4 = extraout_ECX_00;
        FUN_00448a17(uVar2);
        iVar1 = piVar4[3] + -1 + *(int *)(unaff_EBP + 0xc);
        iVar3 = *(int *)(unaff_EBP + 8) + piVar4[2];
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_004115d9(iVar3,iVar1);
        FUN_00448e3a(iVar3,iVar1);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_bc = (int *)0x4ae56f;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          piStack_bc = (int *)0x4ae57a;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        piStack_bc = (int *)0x4ae58a;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          piStack_bc = (int *)0x4ae595;
          FUN_00878dfb();
        }
        if (*(int *)(extraout_ECX + 0x50) != 0) {
          piStack_bc = (int *)0x4ae5a9;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
          piStack_bc = (int *)(unaff_EBP + -0x2c);
          iStack_c0 = 0x4ae5b3;
          iVar1 = FUN_00402e32();
          if (iVar1 < 0) {
            piStack_bc = (int *)0x4ae5bf;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          piStack_bc = (int *)0x4ae5cd;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
          piStack_bc = (int *)(unaff_EBP + -0x4c);
          iStack_c0 = 0x4ae5d7;
          iVar1 = FUN_00402e32();
          if (iVar1 < 0) {
            piStack_bc = (int *)0x4ae5e3;
            FUN_00878dfb();
          }
          piStack_bc = (int *)(unaff_EBP + -0x4c);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iStack_c0 = 0x4ae5f7;
          iStack_c0 = FUN_00449749();
          uStack_c4 = 0x4ae600;
          uVar2 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_c4;
          uStack_c4 = extraout_ECX_01;
          FUN_00448a17(uVar2);
          iVar1 = piVar4[3] + -1 + *(int *)(unaff_EBP + 0xc);
          iVar3 = *(int *)(unaff_EBP + 8) + 1 + piVar4[2];
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_004115d9(iVar3,iVar1);
          FUN_00448e3a(iVar3,iVar1);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          piStack_bc = (int *)0x4ae642;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            piStack_bc = (int *)0x4ae64d;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          goto LAB_004ae715;
        }
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x18;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_bc = (int *)0x4ae743;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


