/* FUN_00685284 - 0x00685284 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00685284(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xc) != 0) {
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
      iVar1 = *(int *)(iVar2 + 0x20);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar1 == *(int *)(unaff_EBP + 8)) {
        FUN_0068666f(*(undefined4 *)(unaff_EBP + 0xc));
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          FUN_006868f7(0);
        }
        break;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (iVar2 != 0) {
        FUN_006868f7(0);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


