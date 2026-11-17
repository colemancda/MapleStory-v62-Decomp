/* FUN_005c4af4 - 0x005c4af4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_005c4af4(int param_1)

{
  int *piVar1;
  
  FUN_00402aba();
  if ((undefined4 *)(param_1 + 0x10) != (undefined4 *)0x0) {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  return *(undefined4 *)(param_1 + 0x1c);
}


