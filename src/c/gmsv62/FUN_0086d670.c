/* FUN_0086d670 - 0x0086d670 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0086d670(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((*param_1 != '\0') && (param_2 != (undefined4 *)0x0)) {
    uVar1 = FUN_00873de0();
    *param_2 = uVar1;
    uVar1 = FUN_00873dd0();
    return uVar1;
  }
  return 0;
}


