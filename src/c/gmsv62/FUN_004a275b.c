/* FUN_004a275b - 0x004a275b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004a275b(void)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *extraout_ECX;
  int iVar6;
  int unaff_EBP;
  int iVar7;
  int iStack_5c;
  undefined4 local_50;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x28) = extraout_ECX[0x18] + *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + 8) = &local_50;
  iVar6 = 0;
  local_50 = 0;
  FUN_00414f8b();
  (**(code **)(*extraout_ECX + 0x20))();
  pcVar1 = *(char **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    *(char **)(unaff_EBP + -0x1c) = pcVar1;
    *(char **)(unaff_EBP + -0x10) = pcVar1;
    iStack_5c = 0x4a27b7;
    uVar2 = (*DAT_0097b584)();
    *(uint *)(unaff_EBP + -0x18) = uVar2;
    if (*(uint *)(unaff_EBP + -0x10) < uVar2) {
      *(int **)(unaff_EBP + -0x20) = extraout_ECX + 0x1a;
      do {
        iStack_5c = 0x4a27d3;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
        iStack_5c = unaff_EBP + -0x3c;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          iStack_5c = 0x4a27ed;
          FUN_00878dfb();
        }
        iVar7 = *(int *)(unaff_EBP + -0x10) - *(int *)(unaff_EBP + -0x1c);
        iStack_5c = *(int *)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_5c = (*DAT_0097b584)();
        iStack_5c = iStack_5c - *(int *)(unaff_EBP + -0x1c);
        FUN_0045e053(unaff_EBP + -0x24,iVar7);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_5c = 0x4a2820;
        uVar4 = FUN_00449713();
        *(int **)(unaff_EBP + 8) = &iStack_5c;
        FUN_00448a17(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_0044974c();
        uVar2 = FUN_00448ebb();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_5c = 0x4a285b;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_5c = 0x4a2866;
          FUN_00878dfb();
        }
        iStack_5c = 0x4a2870;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
        iStack_5c = unaff_EBP + -0x4c;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          iStack_5c = 0x4a288a;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iStack_5c = iVar7;
        FUN_0045e053(unaff_EBP + -0x2c,0);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iStack_5c = 0x4a28ab;
        uVar4 = FUN_00449713();
        *(int **)(unaff_EBP + 8) = &iStack_5c;
        FUN_00448a17(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_0044974c();
        iVar3 = FUN_00448ebb();
        *(bool *)(unaff_EBP + 0xb) = *(uint *)(unaff_EBP + -0x28) < iVar3 + (uVar2 >> 1);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_5c = 0x4a28eb;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_5c = 0x4a28f6;
          FUN_00878dfb();
        }
        if (*(char *)(unaff_EBP + 0xb) != '\0') {
          iVar6 = *(int *)(unaff_EBP + -0x10) - *(int *)(unaff_EBP + -0x1c);
          goto LAB_004a291d;
        }
        uVar2 = *(uint *)(unaff_EBP + -0x18);
        *(uint *)(unaff_EBP + -0x10) = uVar2;
        iStack_5c = 0x4a2908;
        uVar5 = (*DAT_0097b584)();
        *(uint *)(unaff_EBP + -0x18) = uVar5;
      } while (uVar2 < uVar5);
    }
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      iVar6 = *(int *)(*(int *)(unaff_EBP + -0x14) + -4);
    }
  }
LAB_004a291d:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar6;
}


