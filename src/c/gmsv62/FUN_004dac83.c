/* FUN_004dac83 - 0x004dac83 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004dac83(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc0) == 0) {
    iVar1 = (*DAT_0097b704)();
    if (20000 < iVar1 - *(int *)(param_1 + 0x744)) {
      FUN_004daa95();
    }
  }
  return;
}


