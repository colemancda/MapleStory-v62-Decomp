/* FUN_007839d0 - 0x007839d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_007839d0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -4) != 0)) {
    return *(int *)(iVar1 + -4) * 0x44 + -0x44 + iVar1;
  }
  return 0;
}


