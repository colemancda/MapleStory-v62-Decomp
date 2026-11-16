/* ptr_5001132b - 0x5001132b in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __thiscall ptr_5001132b(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_3;
  while( true ) {
    if (iVar2 == 0) {
      return param_3;
    }
    iVar1 = (**(code **)(*param_1 + 8))(param_2,iVar2);
    if (iVar1 == 0) break;
    param_2 = param_2 + iVar1;
    iVar2 = iVar2 - iVar1;
  }
  return param_3 - iVar2;
}


