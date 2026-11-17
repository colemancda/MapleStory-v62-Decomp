/* ptr_004b09cc - 0x004b09cc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall ptr_004b09cc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x48) = param_2;
  if (1 < *(int *)(param_1 + 0x34)) {
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar2 = 0;
      uVar1 = FUN_004b0b80(param_2);
      FUN_004b0c15(uVar1,uVar2);
    }
    FUN_004b3daf();
  }
  return 0;
}


