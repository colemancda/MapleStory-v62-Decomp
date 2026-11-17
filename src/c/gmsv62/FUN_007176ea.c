/* FUN_007176ea - 0x007176ea in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007176ea(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00979174;
  *(int *)(DAT_00979174 + 0x70) = param_1 * 10000;
  *(int *)(iVar1 + 0x74) = param_1 * 10000 + 9999;
  *(undefined4 *)(iVar1 + 0x6c) = 1;
  return;
}


