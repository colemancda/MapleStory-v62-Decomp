/* ptr_0046a777 - 0x0046a777 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_0046a777(int param_1)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x10) != -1) {
    uVar1 = (uint)(*(int *)(param_1 + 8) * *(int *)(param_1 + 0x10)) >> 7;
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  return;
}


