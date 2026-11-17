/* FUN_007fc3ec - 0x007fc3ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_007fc3ec(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007f17d4();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x238) != 0)) {
    *(int *)(param_1 + 0x244) = *(int *)(param_1 + 0x244) + iVar1;
    if (0x59 < *(int *)(param_1 + 0x244)) {
      *(int *)(param_1 + 0x244) = *(int *)(param_1 + 0x244) + -0x5a;
      return 0x5a;
    }
  }
  return 0;
}


