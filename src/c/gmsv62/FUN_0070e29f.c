/* FUN_0070e29f - 0x0070e29f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_0070e29f(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x84) / *(int *)(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x70) < iVar1) {
    iVar1 = *(int *)(param_1 + 0x70);
  }
  return iVar1;
}


