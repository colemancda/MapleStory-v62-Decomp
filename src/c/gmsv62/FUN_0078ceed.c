/* FUN_0078ceed - 0x0078ceed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0078ceed(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int extraout_ECX;
  undefined4 uVar7;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar7 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(int **)(unaff_EBP + 0x14) == (int *)0x0) ||
     (iVar6 = **(int **)(unaff_EBP + 0x14), iVar6 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar6 + -4) >> 1;
  }
  if (uVar3 == 0) {
    FUN_00402fa6();
  }
  else {
    iVar6 = *(int *)(unaff_EBP + 0x1c);
    if (iVar6 != 0) {
      *(undefined4 *)(unaff_EBP + 0x1c) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar6 < 0x127a81) {
        if (iVar6 < 0x127a7f) {
          if (0x127a7a < iVar6) {
            if (iVar6 < 0x127a7d) {
              uVar7 = 2;
            }
            else if (iVar6 < 0x127a7f) {
              uVar7 = 1;
            }
          }
        }
        else {
          uVar7 = 3;
        }
      }
      else if ((0x12a18a < iVar6) && (iVar6 < 0x12a18d)) {
        uVar7 = 5;
      }
      if (*(int *)(extraout_ECX + 0x4c0) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00409205();
      }
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xa64);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00434e21(unaff_EBP + 0x1c,uVar1,uVar4,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      FUN_00432cfc(*(undefined4 *)(unaff_EBP + 0x1c));
      FUN_00408b49();
      FUN_00402fa6();
      *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_004030b1();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    }
    FUN_0079d862();
    **(undefined4 **)(extraout_ECX + 0x1e30) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(*(int *)(extraout_ECX + 0x1e30) + 4) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(*(int *)(extraout_ECX + 0x1e30) + 8) = *(undefined4 *)(unaff_EBP + 0x10);
    iVar6 = *(int *)(extraout_ECX + 0x1e30);
    FUN_00408b49();
    FUN_00402fa6();
    uVar7 = *(undefined4 *)(unaff_EBP + 0x18);
    *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(unaff_EBP + 0x14);
    iVar6 = FUN_004084c5(unaff_EBP + -0x14,uVar7);
    iVar6 = *(int *)(iVar6 + 4);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00412f17(0);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    if (iVar6 != 0) {
      if ((*(int **)(iVar6 + 0x38) == (int *)0x0) || (iVar2 = **(int **)(iVar6 + 0x38), iVar2 == 0))
      {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(iVar2 + -4) >> 1;
      }
      if (uVar3 != 0) {
        FUN_00402f41(iVar6 + 0x38);
      }
    }
    if (*(int *)(unaff_EBP + 0x14) != 0) {
      FUN_004030b1();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


