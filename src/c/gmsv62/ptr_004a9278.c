/* ptr_004a9278 - 0x004a9278 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall ptr_004a9278(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0xc4) != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xc4) + 4) + 0x10))
              (param_2 - *(int *)(param_1 + 0x90),param_3,param_4);
  }
  return 1;
}


