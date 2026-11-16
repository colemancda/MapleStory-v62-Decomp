/* FUN_50405839 - 0x50405839 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined2 * __thiscall FUN_50405839(void *this,int param_1,short param_2)

{
  if (param_2 == 3) {
LAB_5040585e:
    if (param_2 != 10) {
      if (param_2 == 0xb) {
        *(undefined2 *)this = 0xb;
        *(ushort *)((int)this + 8) = -(ushort)(param_1 != 0);
        return this;
      }
      *(undefined2 *)this = 3;
      goto LAB_50405887;
    }
  }
  else if (param_2 != 10) {
    if (param_2 != 0xb) {
      FUN_5042a358(0x80070057);
    }
    goto LAB_5040585e;
  }
  *(undefined2 *)this = 10;
LAB_50405887:
  *(int *)((int)this + 8) = param_1;
  return this;
}


