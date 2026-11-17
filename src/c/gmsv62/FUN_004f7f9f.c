/* FUN_004f7f9f - 0x004f7f9f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_004f7f9f(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -4) != 0)) {
    return iVar1 + -0xc + *(int *)(iVar1 + -4) * 0xc;
  }
  return 0;
}


