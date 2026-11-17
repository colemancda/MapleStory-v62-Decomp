/* FUN_00839aab - 0x00839aab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00839aab(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 100) == 0) {
    iVar1 = FUN_00839ac5();
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


