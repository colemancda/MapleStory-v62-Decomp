/* FUN_00673a63 - 0x00673a63 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_00673a63(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  _memset((void *)(param_1 + 0xc),0,0x10);
  _memset((void *)(param_1 + 0x1c),0,0x10);
  return param_1;
}


