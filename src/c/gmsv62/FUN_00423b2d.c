/* FUN_00423b2d - 0x00423b2d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00423b2d(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  uint uVar6;
  
  FUN_00879bb8();
  uVar6 = *(uint *)(extraout_ECX + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (uVar6 != 0) {
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    do {
      iVar3 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
      uVar5 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(uVar6 + 4);
      FUN_00424fdb();
      uVar4 = puVar1[1];
      uVar2 = *puVar1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = (*DAT_0097b57c)(*(int *)(unaff_EBP + -0x10) + 0x20,uVar2,uVar4);
      if (iVar3 != 0) {
        iVar3 = *(int *)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (iVar3 != *(int *)(unaff_EBP + 0x10)) {
          if (iVar3 != 0) {
            FUN_0042500e(0);
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + 0x10) != 0) {
            FUN_0042500e(0);
          }
          uVar4 = 1;
          goto LAB_00423bbc;
        }
        if (iVar3 != 0) {
          FUN_0042500e(0);
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
        }
        break;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_0042500e(0);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      uVar6 = uVar5;
    } while (uVar5 != 0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_0042500e(0);
  }
  uVar4 = 0;
LAB_00423bbc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


