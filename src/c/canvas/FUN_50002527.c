/* FUN_50002527 - 0x50002527 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl FUN_50002527(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int unaff_EBX;
  int iVar4;
  
  iVar4 = (param_1 + 4) * param_2;
  uVar2 = (*DAT_50081b7c)(0,iVar4 + 8);
  piVar3 = (int *)(*DAT_50081b74)(uVar2);
  *piVar3 = iVar4 + 4;
  piVar3[1] = 0;
  piVar3[2] = param_1;
  piVar3 = piVar3 + 3;
  while (unaff_EBX = unaff_EBX + -1, unaff_EBX != 0) {
    piVar1 = (int *)((int)piVar3 + param_1 + 4);
    *piVar3 = (int)piVar1;
    piVar1[-1] = param_1;
    piVar3 = piVar1;
  }
  *piVar3 = 0;
  return;
}


