/* FUN_50c08363 - 0x50c08363 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c08363(void *this,undefined4 param_1,ushort *param_2)

{
  int iVar1;
  
  if (param_2 == (ushort *)0x0) {
    param_2 = this;
  }
  if ((this != param_2) || ((short)param_1 != *(short *)this)) {
    iVar1 = FUN_50c08394(this,param_2,0,param_1);
    if (iVar1 < 0) {
      FUN_50c101c4(iVar1);
    }
  }
  return;
}


