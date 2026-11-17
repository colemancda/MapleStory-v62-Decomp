/* FUN_007d7ac7 - 0x007d7ac7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007d7ac7(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  int *local_28;
  
  FUN_00879bb8();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 == (int *)0x0) {
    local_28 = (int *)0x80004003;
    FUN_00878dfb();
  }
  local_28 = (int *)0x7d7af3;
  uVar3 = FUN_0040e48b();
  iVar4 = (uVar3 >> 8) + 1;
  *(int *)(unaff_EBP + -0x20) = iVar4;
  if (piVar1 == (int *)0x0) {
    local_28 = (int *)0x80004003;
    FUN_00878dfb();
  }
  local_28 = (int *)0x7d7b11;
  uVar3 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar5 = (uVar3 >> 8) + 1;
  if (iVar4 != 0) {
    do {
      if (iVar5 != 0) {
        iVar4 = *(int *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        *(int *)(unaff_EBP + -0x1c) = iVar5;
        do {
          if (piVar1 == (int *)0x0) {
            local_28 = (int *)0x80004003;
            FUN_00878dfb();
          }
          local_28 = *(int **)(unaff_EBP + -0x18);
          FUN_007d7bb4(unaff_EBP + -0x14,iVar4 << 8);
          local_28 = *(int **)(unaff_EBP + -0x14);
          piVar2 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          *(int ***)(unaff_EBP + -0x24) = &local_28;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 4))(piVar2);
          }
          FUN_007d793d();
          local_28 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (local_28 != (int *)0x0) {
            (**(code **)(*local_28 + 8))();
          }
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x100;
          piVar2 = (int *)(unaff_EBP + -0x1c);
          *piVar2 = *piVar2 + -1;
        } while (*piVar2 != 0);
        iVar4 = *(int *)(unaff_EBP + -0x20);
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    } while (*(int *)(unaff_EBP + -0x10) < iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    local_28 = piVar1;
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


