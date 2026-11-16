/* FUN_50c1175f - 0x50c1175f in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c1175f(void *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_50c11b71(param_1,0,*(int *)((int)param_1 + 0xc));
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


