/* FUN_51806288 - 0x51806288 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __thiscall FUN_51806288(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  while( true ) {
    if (iVar2 == 0) {
      return param_2;
    }
    iVar1 = (**(code **)(*(int *)this + 4))(param_1,iVar2);
    if (iVar1 == 0) break;
    param_1 = param_1 + iVar1;
    iVar2 = iVar2 - iVar1;
  }
  return param_2 - iVar2;
}


