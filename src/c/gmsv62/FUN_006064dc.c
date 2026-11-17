/* FUN_006064dc - 0x006064dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006064dc(int param_1)

{
  *(uint *)(param_1 + 0x20) = (uint)(*(int *)(param_1 + 0x20) == 0);
  FUN_006090f8();
  FUN_008161f1(0);
  return;
}


