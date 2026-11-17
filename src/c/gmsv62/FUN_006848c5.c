/* FUN_006848c5 - 0x006848c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006848c5(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xc) != 0) {
    uVar2 = *(uint *)(extraout_ECX + 0x10);
    while (uVar2 != 0) {
      iVar1 = *(int *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 4);
      uVar4 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      iVar1 = *(int *)(uVar2 + 4);
      *(int *)(unaff_EBP + -0x10) = iVar1;
      iVar3 = 0;
      if (iVar1 != 0) {
        InterlockedIncrement((LONG *)(iVar1 + 4));
        iVar3 = *(int *)(unaff_EBP + -0x10);
      }
      iVar1 = *(int *)(iVar3 + 0x20);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar1 == *(int *)(unaff_EBP + 0xc)) {
        FUN_006869a6(uVar2);
        iVar3 = *(int *)(unaff_EBP + -0x10);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uVar2 = uVar4;
      if (iVar3 != 0) {
        FUN_006868f7(0);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
    }
    FUN_00684df7();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


