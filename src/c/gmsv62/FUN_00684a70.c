/* FUN_00684a70 - 0x00684a70 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00684a70(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar3 = *(uint *)(extraout_ECX + 0x10);
  while (uVar3 != 0) {
    iVar1 = *(int *)(uVar3 + 4);
    iVar2 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    *(int *)(unaff_EBP + -0x10) = iVar1;
    iVar2 = 0;
    if (iVar1 != 0) {
      InterlockedIncrement((LONG *)(iVar1 + 4));
      iVar2 = *(int *)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(iVar2 + 0x20) != 0x4faa8e) {
      FUN_0068666f(*(int *)(iVar2 + 0x38) + -0x1e);
      iVar2 = *(int *)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (iVar2 != 0) {
      FUN_006868f7(0);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


