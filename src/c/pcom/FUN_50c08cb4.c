/* FUN_50c08cb4 - 0x50c08cb4 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 __thiscall FUN_50c08cb4(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0xc))(this,&local_8);
  if (iVar1 < 0) {
    FUN_50c101d2(iVar1,this,&DAT_50c17380);
  }
  FUN_50c05e8d();
  return param_1;
}


