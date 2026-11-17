/* FUN_004ba5de - 0x004ba5de in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_004ba5de(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -4) != 0)) {
    return iVar1 + -8 + *(int *)(iVar1 + -4) * 8;
  }
  return 0;
}


