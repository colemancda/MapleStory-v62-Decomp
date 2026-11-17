/* FUN_0049e176 - 0x0049e176 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0049e176(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0049e8e1();
  FUN_00414edd(param_1,0xffffffff);
  *(undefined4 *)(iVar1 + 4) = param_2;
  return;
}


