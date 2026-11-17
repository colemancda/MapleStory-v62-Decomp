/* FUN_0071770f - 0x0071770f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0071770f(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00979174;
  *(undefined4 *)(DAT_00979174 + 0x70) = param_1;
  *(undefined4 *)(iVar1 + 0x74) = param_2;
  *(undefined4 *)(iVar1 + 0x6c) = 1;
  return;
}


