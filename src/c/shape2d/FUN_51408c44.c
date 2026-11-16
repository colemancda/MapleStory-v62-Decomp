/* FUN_51408c44 - 0x51408c44 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int * __thiscall FUN_51408c44(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_5140126a();
  puVar3 = *(undefined4 **)((int)this + 0x3c);
  do {
    if (puVar3 == (undefined4 *)0x0) {
      piVar1 = (int *)((int)this + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)((int)this + 0x14) = 0;
      }
      return (int *)0x0;
    }
    piVar1 = (int *)*puVar3;
    iVar2 = *(int *)((-(uint)(puVar3 != (undefined4 *)0x0) & (uint)(puVar3 + -4)) + 4);
    puVar3 = (undefined4 *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
    iVar2 = (**(code **)(*piVar1 + 4))();
  } while (iVar2 != param_1);
  return piVar1;
}


