/* FUN_5140a0bb - 0x5140a0bb in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined2 * __thiscall FUN_5140a0bb(void *this,int param_1,short param_2)

{
  if (param_2 == 3) {
LAB_5140a0e0:
    if (param_2 != 10) {
      if (param_2 == 0xb) {
        *(undefined2 *)this = 0xb;
        *(ushort *)((int)this + 8) = -(ushort)(param_1 != 0);
        return this;
      }
      *(undefined2 *)this = 3;
      goto LAB_5140a109;
    }
  }
  else if (param_2 != 10) {
    if (param_2 != 0xb) {
      FUN_5140ac47(0x80070057);
    }
    goto LAB_5140a0e0;
  }
  *(undefined2 *)this = 10;
LAB_5140a109:
  *(int *)((int)this + 8) = param_1;
  return this;
}


