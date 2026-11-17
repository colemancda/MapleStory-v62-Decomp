/* FUN_00445b70 - 0x00445b70 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00445b70(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + puVar2[-1] * 5;
    for (; puVar2 < puVar1; puVar2 = puVar2 + 5) {
      (**(code **)*puVar2)(0);
    }
    FUN_00402b41(*param_1 + -4);
    *param_1 = 0;
  }
  return;
}


