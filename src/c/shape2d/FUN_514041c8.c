/* FUN_514041c8 - 0x514041c8 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int __thiscall FUN_514041c8(void *this,int param_1,int param_2)

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


