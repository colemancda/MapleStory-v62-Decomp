/* FUN_5000ee07 - 0x5000ee07 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int * __cdecl FUN_5000ee07(void *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)param_1 + 0xc);
  while (piVar2 != (int *)0x0) {
    if (*piVar2 == param_2) {
      return piVar2;
    }
    if (param_2 <= *piVar2) break;
    iVar1 = *(int *)((-(uint)(piVar2 != (int *)0x0) & (uint)(piVar2 + -4)) + 4);
    piVar2 = (int *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
  }
  if (param_3 != 0) {
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_5000f66e(param_1);
    }
    else {
      piVar2 = (int *)FUN_5000f6ac(param_1,(int)piVar2);
    }
    *piVar2 = param_2;
    return piVar2;
  }
  return (int *)0x0;
}


