/* FUN_004f108d - 0x004f108d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004f108d(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 0) {
LAB_004f111b:
    uVar3 = 0;
  }
  else {
    uVar5 = *(uint *)(extraout_ECX + 0x18);
    while (uVar5 != 0) {
      iVar2 = *(int *)(uVar5 + 4);
      iVar1 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
      uVar5 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      *(int *)(unaff_EBP + -0x10) = iVar2;
      piVar4 = (int *)0x0;
      if (iVar2 != 0) {
        InterlockedIncrement((LONG *)(iVar2 + 4));
        piVar4 = *(int **)(unaff_EBP + -0x10);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar2 = 0;
      if (piVar4 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar4 + 4))(*(undefined4 *)(unaff_EBP + 8));
        if (iVar2 == 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            FUN_004f192c(0);
          }
          goto LAB_004f111b;
        }
        iVar2 = *(int *)(unaff_EBP + -0x10);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (iVar2 != 0) {
        FUN_004f192c(0);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
    }
    uVar3 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


