/* FUN_510058c7 - 0x510058c7 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined2 * __thiscall FUN_510058c7(void *this,int param_1,short param_2)

{
  if (param_2 == 3) {
LAB_510058ec:
    if (param_2 != 10) {
      if (param_2 == 0xb) {
        *(undefined2 *)this = 0xb;
        *(ushort *)((int)this + 8) = -(ushort)(param_1 != 0);
        return this;
      }
      *(undefined2 *)this = 3;
      goto LAB_51005915;
    }
  }
  else if (param_2 != 10) {
    if (param_2 != 0xb) {
      FUN_5100581a(0x80070057);
    }
    goto LAB_510058ec;
  }
  *(undefined2 *)this = 10;
LAB_51005915:
  *(int *)((int)this + 8) = param_1;
  return this;
}


