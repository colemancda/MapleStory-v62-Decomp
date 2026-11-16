/* FUN_51409777 - 0x51409777 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __thiscall FUN_51409777(void *this,undefined8 *param_1)

{
  *(undefined8 *)this = *param_1;
  *(undefined8 *)((int)this + 8) = param_1[1];
  return;
}


