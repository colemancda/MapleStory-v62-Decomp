/* FUN_50c0896f - 0x50c0896f in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 __cdecl FUN_50c0896f(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  char local_408 [1024];
  undefined4 local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  uVar4 = 0;
  do {
    iVar2 = (**(code **)(*piVar1 + 0x14))((int)&param_2 + 3,1);
    if (iVar2 != 1) {
      param_1 = 0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_50c15658);
    }
    if ((param_2._3_1_ == '\r') || (param_2._3_1_ == '\n')) break;
    local_408[uVar4] = param_2._3_1_;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x400);
  iVar2 = (*DAT_50c21060)(0,0,local_408,uVar4,0,0);
  puVar3 = FUN_50c06063(0,iVar2 << 1);
  (*DAT_50c21060)(0,0,local_408,uVar4,puVar3,0x3fffffff);
  FUN_50c05e8d();
  return param_1;
}


