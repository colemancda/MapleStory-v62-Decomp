/* FUN_51405a4b - 0x51405a4b in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __thiscall FUN_51405a4b(void *this,undefined4 param_1,ushort *param_2)

{
  int iVar1;
  
  if (param_2 == (ushort *)0x0) {
    param_2 = this;
  }
  if ((this != param_2) || ((short)param_1 != *(short *)this)) {
    iVar1 = FUN_51405842(this,param_2,0,param_1);
    if (iVar1 < 0) {
      FUN_5140ac47(iVar1);
    }
  }
  return;
}


