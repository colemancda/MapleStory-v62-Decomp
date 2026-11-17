/* FUN_006aab0c - 0x006aab0c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x006aab27) */

undefined4 __fastcall FUN_006aab0c(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x57c) != 0) && (*(int *)(param_1 + 0x5a0) != 0)) &&
     (iVar1 = FUN_00432a57(), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


