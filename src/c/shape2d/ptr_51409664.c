/* ptr_51409664 - 0x51409664 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


bool __thiscall ptr_51409664(void *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)((int)param_1 + 0x10) == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_51409688(param_1,param_2,param_3,param_4);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}


