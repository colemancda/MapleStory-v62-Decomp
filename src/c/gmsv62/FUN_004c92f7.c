/* FUN_004c92f7 - 0x004c92f7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004c92f7(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  uint uVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = DAT_00978368;
  iVar1 = FUN_004becbc(0x1e,0);
  if (iVar1 != 0) {
    iVar1 = **(int **)(unaff_EBP + 8);
    iVar3 = (*(int **)(unaff_EBP + 8))[1];
    *(int *)(unaff_EBP + -0x34) = iVar1 + -0x19;
    *(int *)(unaff_EBP + -0x30) = iVar3 + -0x32;
    *(int *)(unaff_EBP + -0x2c) = iVar1 + 0x19;
    *(int *)(unaff_EBP + -0x28) = iVar3 + 10;
    uVar2 = FUN_007d1e08();
    uVar5 = *(uint *)(extraout_ECX + 0x2c);
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
LAB_004c934f:
    if (uVar5 != 0) {
      iVar1 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
      uVar4 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(uVar5 + 4);
      FUN_004cd4d5();
      iVar3 = *(int *)(unaff_EBP + -0x18);
      iVar1 = *(int *)(iVar3 + 0x30);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uVar5 = uVar4;
      if (iVar1 == 0) {
        iVar1 = FUN_005545a2(*(undefined4 *)(iVar3 + 0x34));
        if (iVar1 != 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_004cd4f2();
          goto LAB_004c934f;
        }
        iVar3 = *(int *)(unaff_EBP + -0x18);
      }
      if ((((*(int *)(unaff_EBP + -0x14) - *(int *)(iVar3 + 0x40) < 15000) &&
           (*(int *)(iVar3 + 0x28) != 0)) &&
          (((*(int *)(iVar3 + 0x2c) == 0 &&
            (*(int *)(iVar3 + 0x24) != *(int *)(*(int *)(unaff_EBP + -0x10) + 0x2088))) ||
           ((*(int *)(iVar3 + 0x2c) == 1 &&
            (*(int *)(iVar3 + 0x24) != *(int *)(*(int *)(unaff_EBP + -0x10) + 0x2b40))))))) ||
         ((*(char *)(iVar3 + 0x1d) == '\0' ||
          ((*(int *)(iVar3 + 0x48) != 3 ||
           (*(int *)(unaff_EBP + -0x14) - *(int *)(iVar3 + 0x54) < 3000)))))) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        uVar2 = FUN_0045e2eb();
        *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
        uVar2 = FUN_0045e2eb();
        iVar1 = (*DAT_0097b57c)(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + -0x24),uVar2);
        if (iVar1 != 0) {
          FUN_00834895(*(undefined4 *)(unaff_EBP + 8),
                       *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x20));
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x54) = *(undefined4 *)(unaff_EBP + -0x14);
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            FUN_004cd5da(0);
          }
          goto LAB_004c947d;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = *(int *)(unaff_EBP + -0x18);
      }
      if (iVar3 != 0) {
        FUN_004cd5da(0);
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      goto LAB_004c934f;
    }
  }
LAB_004c947d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


