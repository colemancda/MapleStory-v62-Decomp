/* FUN_007055a4 - 0x007055a4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007055a4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (param_1 / 100) % 10 + -1;
  if ((((iVar2 < 0) || (4 < iVar2)) || (param_1 % 10 < 0)) || (2 < param_1 % 10)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00705489(param_1);
  }
  return uVar1;
}


