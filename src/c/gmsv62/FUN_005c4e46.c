/* FUN_005c4e46 - 0x005c4e46 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_005c4e46(int param_1)

{
  return *(undefined4 *)
          ((-(uint)(*(int *)(param_1 + 0xf0) != 0) & *(int *)(param_1 + 0xf0) - 0xcU) + 0x18);
}


