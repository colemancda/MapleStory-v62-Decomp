/* FUN_51005424 - 0x51005424 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __thiscall FUN_51005424(void *this,undefined4 param_1,ushort *param_2)

{
  int iVar1;
  
  if (param_2 == (ushort *)0x0) {
    param_2 = this;
  }
  if ((this != param_2) || ((short)param_1 != *(short *)this)) {
    iVar1 = FUN_51004e5e(this,param_2,0,param_1);
    if (iVar1 < 0) {
      FUN_5100581a(iVar1);
    }
  }
  return;
}


