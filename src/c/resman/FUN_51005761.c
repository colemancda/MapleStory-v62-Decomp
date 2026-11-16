/* FUN_51005761 - 0x51005761 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __thiscall FUN_51005761(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x20))
                    (this,param_2,*param_3,param_3[1],param_3[2],param_3[3],&param_3);
  if (iVar1 < 0) {
    FUN_51005828(iVar1,this,&DAT_510080d8);
  }
  *param_1 = param_3;
  return;
}


