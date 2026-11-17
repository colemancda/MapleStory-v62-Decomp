/* FUN_0070cda4 - 0x0070cda4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0070cda4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0070e29f();
  *(undefined4 *)(param_1 + 0x84) = param_2;
  iVar2 = FUN_0070e29f();
  if (iVar1 == iVar2) {
    FUN_0070d29b();
  }
  else {
    FUN_0070dbd4();
  }
  return;
}


