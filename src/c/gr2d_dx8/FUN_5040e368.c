/* FUN_5040e368 - 0x5040e368 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __thiscall FUN_5040e368(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  *(undefined4 *)this = 0;
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_504354d8,this);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return *(int *)this;
}


