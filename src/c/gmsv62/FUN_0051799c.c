/* FUN_0051799c - 0x0051799c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0051799c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_008eaf38;
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar3 = piVar1[4];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar3 < 0) || (1 < iVar3)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
LAB_00517ad0:
    if (*(int *)(unaff_EBP + -0x10) != 0) goto LAB_00517b11;
  }
  else {
    uVar5 = *(uint *)(*(int *)(unaff_EBP + 0xc) + 0xc);
    if (uVar5 != 0) {
      do {
        iVar3 = *(int *)(uVar5 + 4);
        iVar2 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
        uVar5 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
        *(int *)(unaff_EBP + -0x14) = iVar3;
        piVar4 = (int *)0x0;
        if (iVar3 != 0) {
          InterlockedIncrement((LONG *)(iVar3 + 4));
          piVar4 = *(int **)(unaff_EBP + -0x14);
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (piVar4 == (int *)0x0) {
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        else {
          if (piVar4[3] == 0) {
            iVar3 = (**(code **)(*piVar4 + 0xc))();
            *(int *)(unaff_EBP + 8) = iVar3;
            if ((iVar3 == -1) ||
               (iVar3 = (**(code **)(*piVar1 + 0xc))(), *(int *)(unaff_EBP + 8) != iVar3))
            goto LAB_00517a9c;
            if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x10) == piVar1[4]) {
              *(int **)(unaff_EBP + -0x1c) = piVar1;
              if (piVar1 != (int *)0x0) {
                InterlockedIncrement(piVar1 + 1);
              }
              *(undefined1 *)(unaff_EBP + -4) = 2;
              FUN_00518b6c();
              FUN_00518a6b(unaff_EBP + -0x20);
              *(undefined1 *)(unaff_EBP + -4) = 1;
              if (*(int *)(unaff_EBP + -0x1c) != 0) {
                FUN_00518aa4(0);
                *(undefined4 *)(unaff_EBP + -0x1c) = 0;
              }
              *(undefined4 *)(unaff_EBP + -0x10) = 1;
            }
          }
          else {
LAB_00517a9c:
            FUN_00518b6c();
            FUN_00518a6b(unaff_EBP + -0x18);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            FUN_00518aa4(0);
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
          }
        }
      } while (uVar5 != 0);
      goto LAB_00517ad0;
    }
  }
  *(int **)(unaff_EBP + -0x1c) = piVar1;
  if (piVar1 != (int *)0x0) {
    InterlockedIncrement(piVar1 + 1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00518b6c();
  FUN_00518a6b(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_00518aa4(0);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
LAB_00517b11:
  FUN_00518baa();
  FUN_005189bc(unaff_EBP + -0x34);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_008eaf38;
  FUN_00518baa();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


