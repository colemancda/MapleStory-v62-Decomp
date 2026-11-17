/* FUN_004f1158 - 0x004f1158 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f1158(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) != 0) {
    uVar3 = *(uint *)(extraout_ECX + 0x6f8);
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
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = FUN_004f108d(*(undefined4 *)(unaff_EBP + 8));
        if (iVar1 != 0) {
          FUN_004f1132(*(undefined4 *)(unaff_EBP + 8));
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            FUN_004f18fe(0);
          }
          break;
        }
        iVar1 = *(int *)(unaff_EBP + -0x10);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (iVar1 != 0) {
        FUN_004f18fe(0);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


