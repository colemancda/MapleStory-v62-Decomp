/* ptr_005c3c50 - 0x005c3c50 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall ptr_005c3c50(int param_1)

{
  return *(undefined4 *)
          ((-(uint)(*(int *)(param_1 + 0xe8) != 0) & *(int *)(param_1 + 0xe8) - 0xcU) + 300);
}


