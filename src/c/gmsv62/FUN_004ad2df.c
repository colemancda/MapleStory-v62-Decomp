/* FUN_004ad2df - 0x004ad2df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_004ad2df(int param_1)

{
  int iVar1;
  
  if (((1 < *(int *)(param_1 + 0x3c)) && (*(int *)(param_1 + 0x40) != 100)) &&
     (*(int *)(param_1 + 0x40) != 0x69)) {
    iVar1 = (*DAT_0097b704)();
    if (0x32 < (uint)(iVar1 - *(int *)(param_1 + 0x44))) {
      *(int *)(param_1 + 0x44) = iVar1;
      return 1;
    }
  }
  return 0;
}


