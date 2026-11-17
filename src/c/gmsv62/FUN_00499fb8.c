/* FUN_00499fb8 - 0x00499fb8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00499fb8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x20))();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x48) = param_2;
    FUN_00499e9b();
  }
  return;
}


