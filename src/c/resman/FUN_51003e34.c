/* FUN_51003e34 - 0x51003e34 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __fastcall FUN_51003e34(void *param_1)

{
  int *piVar1;
  uint uVar2;
  
  FUN_51001ce1((undefined4 *)
               (-(uint)(**(int **)((int)param_1 + 0x10) != 0) &
               **(int **)((int)param_1 + 0x10) - 0x10U));
  piVar1 = (int *)((int)param_1 + 0xc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    **(undefined4 **)((int)param_1 + 0x10) =
         (*(undefined4 **)((int)param_1 + 0x10))[*(int *)((int)param_1 + 0xc)];
    *(undefined4 *)
     ((-(uint)(**(int **)((int)param_1 + 0x10) != 0) & **(int **)((int)param_1 + 0x10) - 0x10U) + 4)
         = 0;
    uVar2 = 0;
    do {
      uVar2 = FUN_51004ae0(param_1,uVar2);
    } while (uVar2 != 0);
  }
  return;
}


