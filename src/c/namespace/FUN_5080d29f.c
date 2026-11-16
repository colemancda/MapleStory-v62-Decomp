/* FUN_5080d29f - 0x5080d29f in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __fastcall FUN_5080d29f(int *param_1)

{
  uint *puVar1;
  
  if (param_1[1] == 0) {
    puVar1 = FUN_5080d2c9(*param_1);
    param_1[1] = (int)puVar1;
    if ((puVar1 == (uint *)0x0) && (*param_1 != 0)) {
      FUN_5080dfed(0x8007000e);
    }
  }
  return param_1[1];
}


