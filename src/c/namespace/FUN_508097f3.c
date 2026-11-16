/* FUN_508097f3 - 0x508097f3 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_508097f3(undefined4 *param_1)

{
  if ((int *)param_1[4] != (int *)0x0) {
    FUN_508040b6((int *)param_1[4]);
    param_1[4] = 0;
  }
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 3)) = &PTR_LAB_5081793c;
  *param_1 = &PTR_LAB_508177bc;
  return;
}


