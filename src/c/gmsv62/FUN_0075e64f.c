/* FUN_0075e64f - 0x0075e64f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0075e64f(void)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  int extraout_ECX;
  uint extraout_ECX_00;
  int unaff_EBP;
  uint uVar5;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  int *piStack_40;
  
  FUN_00879bb8();
  piStack_40 = *(int **)(unaff_EBP + 8);
  iStack_44 = 0x75e669;
  FUN_0081622a();
  piStack_40 = (int *)(unaff_EBP + 8);
  iStack_44 = 0x75e674;
  FUN_00448dc6();
  iVar1 = *(int *)(extraout_ECX + 0x78);
  uVar5 = *(uint *)(iVar1 + 0x38);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((int)uVar5 < (int)(uVar5 + 5)) {
    do {
      if ((*(int *)(extraout_ECX + 0x7c) == 0) ||
         (*(uint *)(*(int *)(extraout_ECX + 0x7c) + -4) <= uVar5)) break;
      if (uVar5 == *(uint *)(extraout_ECX + 0x84)) {
        *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar1 + 0x38);
        piVar2 = *(int **)(unaff_EBP + 8);
        if (piVar2 == (int *)0x0) {
          piStack_40 = (int *)0x80004003;
          iStack_44 = 0x75e6c3;
          FUN_00878dfb();
          piVar2 = *(int **)(unaff_EBP + 8);
        }
        piStack_40 = (int *)0xff5b7b9e;
        iStack_44 = 0xd;
        iStack_48 = 0x8a;
        uStack_4c = (uVar5 - *(int *)(unaff_EBP + -0x10)) * 0xe + 0xc;
        *(int **)(unaff_EBP + -0x14) = piVar2;
        iVar1 = (**(code **)(*piVar2 + 0x8c))(*(undefined4 *)(unaff_EBP + 8),10);
        if (iVar1 < 0) {
          iStack_44 = *(undefined4 *)(unaff_EBP + -0x14);
LAB_0075e752:
          piStack_40 = (int *)&DAT_00963cc8;
          uStack_4c = 0x75e758;
          iStack_48 = iVar1;
          FUN_00878e09();
        }
      }
      else if (uVar5 == *(uint *)(extraout_ECX + 0x80)) {
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar1 + 0x38);
        piVar2 = *(int **)(unaff_EBP + 8);
        if (piVar2 == (int *)0x0) {
          piStack_40 = (int *)0x80004003;
          iStack_44 = 0x75e71b;
          FUN_00878dfb();
          piVar2 = *(int **)(unaff_EBP + 8);
        }
        piStack_40 = (int *)0xffbbc9d9;
        iStack_44 = 0xd;
        iStack_48 = 0x8a;
        uStack_4c = (uVar5 - *(int *)(unaff_EBP + -0x14)) * 0xe + 0xc;
        *(int **)(unaff_EBP + -0x10) = piVar2;
        iVar1 = (**(code **)(*piVar2 + 0x8c))(*(undefined4 *)(unaff_EBP + 8),10);
        if (iVar1 < 0) {
          iStack_44 = *(undefined4 *)(unaff_EBP + -0x10);
          goto LAB_0075e752;
        }
      }
      piStack_40 = &DAT_00980690;
      iStack_44 = 0x75e761;
      FUN_00403191();
      piStack_40 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_44 = 0x75e76e;
      FUN_00403191();
      piStack_40 = (int *)(unaff_EBP + -0x3c);
      iStack_44 = unaff_EBP + -0x2c;
      uStack_4c = unaff_EBP - 0x1c;
      iStack_48 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_48 = 0x75e792;
      iStack_48 = FUN_00449749();
      uStack_4c = uVar5;
      puVar3 = (uint *)FUN_00537b54();
      uStack_4c = *puVar3;
      iVar1 = unaff_EBP + -0x18;
      FUN_0048b97b(iVar1);
      FUN_0045a1d8(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uStack_4c = 0x75e7b9;
      uVar4 = FUN_00449713();
      *(uint **)(unaff_EBP + -0x14) = &uStack_4c;
      uStack_4c = extraout_ECX_00;
      FUN_00448a17(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_005afea1();
      iVar1 = FUN_005af3ee();
      iVar1 = (uVar5 - iVar1) * 0xe + 0xc;
      uVar4 = 10;
      FUN_004115d9(10,iVar1);
      FUN_00448e3a(uVar4,iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_40 = (int *)0x75e800;
      FUN_00414ebb();
      piStack_40 = *(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piStack_40 != (int *)0x0) {
        iStack_44 = 0x75e811;
        (**(code **)(*piStack_40 + 8))();
      }
      piStack_40 = (int *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_44 = 0x75e81e;
      piStack_40 = (int *)FUN_00402bc3();
      if ((int)piStack_40 < 0) {
        iStack_44 = 0x75e829;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_40 = (int *)(unaff_EBP + -0x3c);
      iStack_44 = 0x75e836;
      piStack_40 = (int *)FUN_00402bc3();
      if ((int)piStack_40 < 0) {
        iStack_44 = 0x75e841;
        FUN_00878dfb();
      }
      iVar1 = *(int *)(extraout_ECX + 0x78);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(iVar1 + 0x38) + 5);
  }
  piStack_40 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_40 != (int *)0x0) {
    iStack_44 = 0x75e864;
    (**(code **)(*piStack_40 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


