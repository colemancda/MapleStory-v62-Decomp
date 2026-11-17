/* FUN_0076a1a9 - 0x0076a1a9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0076a1a9(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2c74);
  FUN_0085cd50();
  if (*piVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*piVar1 + -4);
}


