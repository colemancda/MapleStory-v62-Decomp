/* FUN_006f290f - 0x006f290f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006f290f(int *param_1,int param_2)

{
  if (param_2 != param_1[0x16a]) {
    param_1[0x2be] = 0;
  }
  param_1[0x16a] = param_2;
  param_1[0x2c0] = 8000;
  (**(code **)(*param_1 + 0x20))(2);
  return;
}


