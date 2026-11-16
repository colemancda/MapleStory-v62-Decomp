/* FUN_51804844 - 0x51804844 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51804844(void *this,undefined4 param_1,ushort *param_2)

{
  int iVar1;
  
  if (param_2 == (ushort *)0x0) {
    param_2 = this;
  }
  if ((this != param_2) || ((short)param_1 != *(short *)this)) {
    iVar1 = FUN_51804875(this,param_2,0,param_1);
    if (iVar1 < 0) {
      FUN_5180e990(iVar1);
    }
  }
  return;
}


