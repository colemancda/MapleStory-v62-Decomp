/* FUN_5000f49b - 0x5000f49b in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int * __thiscall FUN_5000f49b(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    piVar2 = *(int **)((int)this + 0xc);
  }
  else {
    piVar2 = (int *)(-(uint)(*(int *)(param_2 + -0xc) != 0) & *(int *)(param_2 + -0xc) + 0x10U);
  }
  if (piVar2 != (int *)0x0) {
    do {
      if (*piVar2 == *param_1) {
        return piVar2;
      }
      iVar1 = *(int *)((-(uint)(piVar2 != (int *)0x0) & (uint)(piVar2 + -4)) + 4);
      piVar2 = (int *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
    } while (piVar2 != (int *)0x0);
  }
  return (int *)0x0;
}


