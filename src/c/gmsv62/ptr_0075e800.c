/* ptr_0075e800 - 0x0075e800 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0075e800(void)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint extraout_ECX;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_EDI;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  
  do {
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      iStack_8 = 0x75e811;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_8 = 0x75e81e;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_8 = 0x75e829;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_8 = 0x75e836;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_8 = 0x75e841;
      FUN_00878dfb();
    }
    iVar4 = *(int *)(unaff_EBX + 0x78);
    unaff_EDI = unaff_EDI + 1;
    if (((*(int *)(iVar4 + 0x38) + 5 <= (int)unaff_EDI) || (*(int *)(unaff_EBX + 0x7c) == 0)) ||
       (*(uint *)(*(int *)(unaff_EBX + 0x7c) + -4) <= unaff_EDI)) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        iStack_8 = 0x75e864;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    if (unaff_EDI == *(uint *)(unaff_EBX + 0x84)) {
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar4 + 0x38);
      piVar1 = *(int **)(unaff_EBP + 8);
      if (piVar1 == (int *)0x0) {
        iStack_8 = 0x75e6c3;
        FUN_00878dfb();
        piVar1 = *(int **)(unaff_EBP + 8);
      }
      iStack_8 = 0xd;
      iStack_c = 0x8a;
      uStack_10 = (unaff_EDI - *(int *)(unaff_EBP + -0x10)) * 0xe + 0xc;
      *(int **)(unaff_EBP + -0x14) = piVar1;
      iVar4 = (**(code **)(*piVar1 + 0x8c))(*(undefined4 *)(unaff_EBP + 8),10);
      if (iVar4 < 0) {
        iStack_8 = *(undefined4 *)(unaff_EBP + -0x14);
LAB_0075e752:
        uStack_10 = 0x75e758;
        iStack_c = iVar4;
        FUN_00878e09();
      }
    }
    else if (unaff_EDI == *(uint *)(unaff_EBX + 0x80)) {
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar4 + 0x38);
      piVar1 = *(int **)(unaff_EBP + 8);
      if (piVar1 == (int *)0x0) {
        iStack_8 = 0x75e71b;
        FUN_00878dfb();
        piVar1 = *(int **)(unaff_EBP + 8);
      }
      iStack_8 = 0xd;
      iStack_c = 0x8a;
      uStack_10 = (unaff_EDI - *(int *)(unaff_EBP + -0x14)) * 0xe + 0xc;
      *(int **)(unaff_EBP + -0x10) = piVar1;
      iVar4 = (**(code **)(*piVar1 + 0x8c))(*(undefined4 *)(unaff_EBP + 8),10);
      if (iVar4 < 0) {
        iStack_8 = *(undefined4 *)(unaff_EBP + -0x10);
        goto LAB_0075e752;
      }
    }
    iStack_8 = 0x75e761;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_8 = 0x75e76e;
    FUN_00403191();
    iStack_8 = unaff_EBP + -0x2c;
    uStack_10 = unaff_EBP - 0x1c;
    iStack_c = 1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_c = 0x75e792;
    iStack_c = FUN_00449749();
    uStack_10 = unaff_EDI;
    puVar2 = (uint *)FUN_00537b54();
    uStack_10 = *puVar2;
    iVar4 = unaff_EBP + -0x18;
    FUN_0048b97b(iVar4);
    FUN_0045a1d8(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_10 = 0x75e7b9;
    uVar3 = FUN_00449713();
    *(uint **)(unaff_EBP + -0x14) = &uStack_10;
    uStack_10 = extraout_ECX;
    FUN_00448a17(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_005afea1();
    iVar4 = FUN_005af3ee();
    iVar4 = (unaff_EDI - iVar4) * 0xe + 0xc;
    uVar3 = 10;
    FUN_004115d9(10,iVar4);
    FUN_00448e3a(uVar3,iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
  } while( true );
}


