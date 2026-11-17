/* FUN_006fb663 - 0x006fb663 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_006fb663(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x588) < 0) || (*(int *)(param_1 + 0x58c) < 0)) {
    *(undefined4 *)(param_2 + 4) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 4) =
         *(undefined4 *)
          (*(int *)(param_1 + 0x5cc + *(int *)(param_1 + 0x588) * 4) + 4 +
          *(int *)(param_1 + 0x58c) * 8);
    FUN_00705dac();
  }
  return param_2;
}


