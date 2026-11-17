/* ptr_0061d3e8 - 0x0061d3e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall ptr_0061d3e8(int *param_1)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  *(int **)(unaff_EBP + -8) = param_1;
  if (iVar4 == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = *(undefined4 *)(iVar4 + -4);
  }
  iVar4 = *(int *)(unaff_EBP + 8);
  if (iVar4 == -1) {
    iVar4 = *(int *)(unaff_EBP + -4);
  }
  FUN_0061ec57(*(int *)(unaff_EBP + -4) + 1,2,unaff_EBP + 0xb);
  iVar1 = iVar4 * 0x10;
  iVar2 = (iVar4 + 1) * 0x10;
  FUN_0087a3a0(*param_1 + iVar2,iVar1 + *param_1,
               (iVar4 * 0xfffffff + *(int *)(unaff_EBP + -4)) * 0x10);
  iVar4 = **(int **)(unaff_EBP + -8);
  for (uVar3 = iVar1 + iVar4; uVar3 < (uint)(iVar2 + iVar4); uVar3 = uVar3 + 0x10) {
    FUN_0061f176(uVar3);
  }
  return iVar1 + **(int **)(unaff_EBP + -8);
}


