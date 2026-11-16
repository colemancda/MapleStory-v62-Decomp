/* FUN_50011f0e - 0x50011f0e in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall
FUN_50011f0e(void *this,ZIStream *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  ZIStream *pZVar1;
  
  if (param_2 == 0) {
    pZVar1 = ZLZCreateInflator(param_3,param_1,param_4);
  }
  else {
    pZVar1 = ZLZCreateDeflator(param_3,param_1,param_5);
  }
  *(ZIStream **)((int)this + 4) = pZVar1;
  return;
}


