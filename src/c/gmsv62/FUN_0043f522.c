/* FUN_0043f522 - 0x0043f522 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0043f522(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x484) / 10000;
  if ((iVar1 != 0xbe) && (iVar1 != 0xc1)) {
    return 0;
  }
  return 1;
}


