/* FUN_006a7cb3 - 0x006a7cb3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_006a7cb3(int param_1)

{
  if (*(int *)(param_1 + 0x90) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x48);
  }
  return 0;
}


