/* FUN_51404453 - 0x51404453 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __fastcall FUN_51404453(void *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_51405373(param_1,0,*(int *)((int)param_1 + 0xc));
  if (*(int *)((int)param_1 + 0x10) == 0) {
    *(uint *)((int)param_1 + 0xc) = uVar1;
    *(uint *)((int)param_1 + 0x10) = uVar1;
    return;
  }
  uVar1 = -(uint)(uVar1 != 0) & uVar1 - 0x10;
  *(uint *)((-(uint)(*(int *)((int)param_1 + 0xc) != 0) & *(int *)((int)param_1 + 0xc) - 0x10U) + 8)
       = uVar1;
  *(uint *)((int)param_1 + 0xc) = -(uint)(uVar1 != 0) & uVar1 + 0x10;
  return;
}


