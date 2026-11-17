/* FUN_004aa550 - 0x004aa550 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004aa550(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_004aa461();
  if (param_2 == 4) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + uVar2 * 4);
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      goto LAB_004aa5e8;
    }
    *(int *)(param_1 + 0x40) =
         *(int *)(param_1 + 0x40) + (*(int *)(*(int *)(param_1 + 0x44) + uVar2 * 4 + -4) - iVar1);
    if (*(int *)(param_1 + 0x40) < iVar1) goto LAB_004aa5e8;
    *(int *)(param_1 + 0x40) = iVar1 + -1;
  }
  if (param_2 == 5) {
    iVar1 = *(int *)(param_1 + 0x44);
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + -4);
    }
    if (uVar2 == iVar3 - 1U) {
      if (*(int *)(param_1 + 0x34) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x34) + -4);
      }
    }
    else {
      iVar3 = 0;
      if (*(int *)(param_1 + 0x44) != 0) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x44) + -4);
      }
      if (uVar2 < iVar3 - 2U) {
        iVar3 = *(int *)(iVar1 + 8 + uVar2 * 4);
      }
      else {
        if (*(int *)(param_1 + 0x34) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x34) + -4);
        }
        iVar3 = iVar3 + 1;
      }
      *(int *)(param_1 + 0x40) =
           *(int *)(param_1 + 0x40) +
           (*(int *)(iVar1 + 4 + uVar2 * 4) - *(int *)(iVar1 + uVar2 * 4));
      if (*(int *)(param_1 + 0x40) < iVar3) goto LAB_004aa5e8;
      iVar3 = iVar3 + -1;
    }
    *(int *)(param_1 + 0x40) = iVar3;
  }
LAB_004aa5e8:
  FUN_004aa5f9(0,0,0);
  return;
}


