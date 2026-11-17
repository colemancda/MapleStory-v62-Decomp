/* FUN_00881a55 - 0x00881a55 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00881a55(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0098077c != (code *)0x0) {
    iVar1 = (*DAT_0098077c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


