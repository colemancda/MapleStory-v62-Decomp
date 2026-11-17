/* ptr_005b2867 - 0x005b2867 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall ptr_005b2867(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_005b752b(param_2,param_3);
  if ((iVar1 != *(int *)(param_1 + 0x1bc)) && (*(int *)(param_1 + 0x1c0) != 0)) {
    FUN_005b950f();
  }
  return 0;
}


