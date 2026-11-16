/* FUN_51404b7d - 0x51404b7d in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __fastcall FUN_51404b7d(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5140c7e8;
  param_1[0xb] = &PTR_LAB_5140c7e4;
  param_1[1] = 1;
  InterlockedDecrement(&DAT_51411574);
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0xb)) =
       &PTR_LAB_5140c828;
  FUN_51404bba();
  return;
}


