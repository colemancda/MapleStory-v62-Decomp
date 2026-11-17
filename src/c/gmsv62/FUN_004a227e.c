/* FUN_004a227e - 0x004a227e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004a227e(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*DAT_0097b584)(param_1);
    iVar1 = iVar1 - param_1;
  }
  return iVar1;
}


