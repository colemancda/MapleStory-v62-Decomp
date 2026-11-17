/* FUN_004aaac3 - 0x004aaac3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004aaac3(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar8;
  int iStack_58;
  
  FUN_00879bb8();
  uVar4 = *(uint *)(extraout_ECX + 0x34);
  *(int *)(unaff_EBP + -0x24) = *(int *)(extraout_ECX + 0x60) + *(int *)(unaff_EBP + 8);
  iVar2 = *(int *)(extraout_ECX + 0x7c);
  *(uint *)(unaff_EBP + -0x10) = uVar4;
  uVar1 = *(int *)(unaff_EBP + 0xc) / iVar2 + *(int *)(extraout_ECX + 0x48);
  if (uVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(uVar4 - 4);
  }
  *(uint *)(unaff_EBP + -0x14) = iVar2 + uVar4;
  if ((*(int *)(extraout_ECX + 0x44) == 0) ||
     (uVar8 = uVar4, *(int *)(*(int *)(extraout_ECX + 0x44) + -4) != 1)) {
    iVar2 = 0;
    if (*(int *)(extraout_ECX + 0x44) != 0) {
      iVar2 = *(int *)(*(int *)(extraout_ECX + 0x44) + -4);
    }
    if (iVar2 - 1U < uVar1) {
      if (*(int *)(extraout_ECX + 0x34) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(extraout_ECX + 0x34) + -4);
      }
      goto LAB_004aacec;
    }
    iVar2 = 0;
    if (*(int *)(extraout_ECX + 0x44) != 0) {
      iVar2 = *(int *)(*(int *)(extraout_ECX + 0x44) + -4);
    }
    iVar5 = *(int *)(*(int *)(extraout_ECX + 0x44) + uVar1 * 4);
    if (uVar1 == iVar2 - 1U) {
      uVar8 = iVar5 + uVar4;
    }
    else {
      uVar8 = iVar5 + uVar4;
      *(uint *)(unaff_EBP + -0x14) = *(int *)(*(int *)(extraout_ECX + 0x44) + 4 + uVar1 * 4) + uVar4
      ;
    }
  }
  *(uint *)(unaff_EBP + 8) = uVar8;
  uVar1 = (*DAT_0097b584)();
  *(uint *)(unaff_EBP + 0xc) = uVar1;
  if (uVar8 < uVar1) {
    do {
      if (*(uint *)(unaff_EBP + -0x14) <= *(uint *)(unaff_EBP + 8)) break;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
      iStack_58 = 0x4aab93;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar2 = *(int *)(unaff_EBP + 8) - uVar8;
      *(int *)(unaff_EBP + -0x1c) = iVar2;
      iStack_58 = 0x4aabb8;
      iStack_58 = (*DAT_0097b584)();
      iStack_58 = iStack_58 - uVar8;
      FUN_0045e053(unaff_EBP + -0x18,iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_58 = 0x4aabd3;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x20) = &iStack_58;
      FUN_00448a17(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0044974c();
      uVar4 = FUN_00448ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(uint *)(unaff_EBP + -0x20) = uVar4 >> 1;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_58 = 0x4aac12;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_58 = 0x4aac1d;
        FUN_00878dfb();
      }
      iStack_58 = 0x4aac27;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
      iStack_58 = unaff_EBP + -0x48;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_58 = 0x4aac41;
        FUN_00878dfb();
      }
      iStack_58 = *(int *)(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -4) = 3;
      FUN_0045e053(unaff_EBP + -0x28,0);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_58 = 0x4aac68;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x1c) = &iStack_58;
      FUN_00448a17(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_0044974c();
      iVar5 = FUN_00448ebb();
      iVar2 = *(int *)(unaff_EBP + -0x20);
      uVar4 = *(uint *)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_58 = 0x4aacaa;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_58 = 0x4aacb5;
        FUN_00878dfb();
      }
      if (uVar4 < (uint)(iVar5 + iVar2)) {
        iVar2 = *(int *)(unaff_EBP + 8) - *(int *)(unaff_EBP + -0x10);
        goto LAB_004aacec;
      }
      uVar1 = *(uint *)(unaff_EBP + 0xc);
      *(uint *)(unaff_EBP + 8) = uVar1;
      iStack_58 = 0x4aacc6;
      uVar7 = (*DAT_0097b584)();
      uVar4 = *(uint *)(unaff_EBP + -0x10);
      *(uint *)(unaff_EBP + 0xc) = uVar7;
    } while (uVar1 < uVar7);
  }
  iVar2 = *(int *)(unaff_EBP + -0x14);
  if (*(char *)(iVar2 + -1) == '\r') {
    iVar2 = (iVar2 - uVar4) + -1;
  }
  else {
    iVar2 = iVar2 - uVar4;
  }
LAB_004aacec:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


