/* FUN_00683d41 - 0x00683d41 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00683d41(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = (*DAT_0097b704)();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}


