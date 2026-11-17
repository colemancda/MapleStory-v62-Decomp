/* ptr_005e915e - 0x005e915e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall ptr_005e915e(int param_1)

{
  return *(undefined4 *)
          ((-(uint)(*(int *)(param_1 + 0x7c) != 0) & *(int *)(param_1 + 0x7c) - 0xcU) + 300);
}


