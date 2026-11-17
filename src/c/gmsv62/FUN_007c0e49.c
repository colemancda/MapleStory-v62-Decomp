/* FUN_007c0e49 - 0x007c0e49 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007c0e49(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  uint uVar3;
  int unaff_EBP;
  uint uVar4;
  int iVar5;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 8) != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(*(int *)(*(int *)(extraout_ECX + 8) + 0x1744) + 4 + iVar5) == 0) break;
      FUN_006141db(unaff_EBP + -0x24);
      iVar1 = (*DAT_0097b57c)(unaff_EBP + -0x24,**(undefined4 **)(unaff_EBP + 8),
                              (*(undefined4 **)(unaff_EBP + 8))[1]);
      if (iVar1 != 0) {
        uVar2 = *(undefined4 *)(extraout_ECX + 8);
        goto LAB_007c0f6f;
      }
      iVar5 = iVar5 + 8;
    } while (iVar5 < 0x18);
  }
  uVar4 = *(uint *)(extraout_ECX + 0x30);
  while (uVar4 != 0) {
    iVar5 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
    uVar3 = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
    iVar5 = *(int *)(uVar4 + 4);
    *(int *)(unaff_EBP + -0x10) = iVar5;
    iVar1 = 0;
    if (iVar5 != 0) {
      InterlockedIncrement((LONG *)(iVar5 + 4));
      iVar1 = *(int *)(unaff_EBP + -0x10);
    }
    iVar5 = *(int *)(*(int *)(iVar1 + 0x10) + 0x524);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar5 == 0) {
      iVar5 = 0;
      do {
        if (*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x1744) + 4 + iVar5) == 0) break;
        FUN_006141db(unaff_EBP + -0x24);
        iVar1 = (*DAT_0097b57c)(unaff_EBP + -0x24,**(undefined4 **)(unaff_EBP + 8),
                                (*(undefined4 **)(unaff_EBP + 8))[1]);
        if (iVar1 != 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          uVar2 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x10);
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            FUN_004f6e32(0);
          }
          goto LAB_007c0f6f;
        }
        iVar1 = *(int *)(unaff_EBP + -0x10);
        iVar5 = iVar5 + 8;
      } while (iVar5 < 0x18);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar4 = uVar3;
    if (iVar1 != 0) {
      FUN_004f6e32(0);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
  }
  uVar2 = 0;
LAB_007c0f6f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


