/* FUN_00782386 - 0x00782386 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00782386(int param_1)

{
  uint uVar1;
  
  uVar1 = (*DAT_0097b704)();
  if (*(int *)(param_1 + 0x638) + 180000U < uVar1) {
    FUN_0078232d();
    return 0;
  }
  return 1;
}


