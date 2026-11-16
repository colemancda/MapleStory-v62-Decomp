/* FUN_500069c0 - 0x500069c0 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined2 * __thiscall FUN_500069c0(void *this,int param_1,short param_2)

{
  if (param_2 == 3) {
LAB_500069e5:
    if (param_2 != 10) {
      if (param_2 == 0xb) {
        *(undefined2 *)this = 0xb;
        *(ushort *)((int)this + 8) = -(ushort)(param_1 != 0);
        return this;
      }
      *(undefined2 *)this = 3;
      goto LAB_50006a0e;
    }
  }
  else if (param_2 != 10) {
    if (param_2 != 0xb) {
      FUN_50012c97(0x80070057);
    }
    goto LAB_500069e5;
  }
  *(undefined2 *)this = 10;
LAB_50006a0e:
  *(int *)((int)this + 8) = param_1;
  return this;
}


