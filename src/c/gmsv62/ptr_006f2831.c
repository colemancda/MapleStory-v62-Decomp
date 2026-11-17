/* ptr_006f2831 - 0x006f2831 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_006f2831(int *param_1)

{
  int *piVar1;
  
  if ((param_1[0x169] == 0) && (param_1[0x16f] != 0)) {
    piVar1 = param_1 + 0x2c0;
    *piVar1 = *piVar1 + -0x28;
    if (*piVar1 < 0) {
      (**(code **)(*param_1 + 0x20))(3);
    }
  }
  return;
}


