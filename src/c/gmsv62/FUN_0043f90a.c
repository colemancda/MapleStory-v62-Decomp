/* FUN_0043f90a - 0x0043f90a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0043f90a(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0043f986(*(undefined4 *)(param_1 + 0x4b4),param_2);
  iVar2 = FUN_0043f6fe();
  if (-1 < iVar2) {
    uVar1 = FUN_0043f6fe();
  }
  return uVar1;
}


