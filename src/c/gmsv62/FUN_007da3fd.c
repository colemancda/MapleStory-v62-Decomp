/* FUN_007da3fd - 0x007da3fd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_007da3fd(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0xa0) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xa0) + -4);
  }
  iVar1 = (uint)(iVar1 * 0xe) / 0x14 + 1;
  if (iVar1 == 1) {
    iVar1 = 2;
  }
  return iVar1;
}


