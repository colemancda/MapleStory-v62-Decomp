/* FUN_00449446 - 0x00449446 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined2 * __thiscall FUN_00449446(undefined2 *param_1,undefined8 param_2,short param_3)

{
  if (param_3 == 5) {
LAB_00449464:
    if (param_3 != 7) {
      *param_1 = 5;
      goto LAB_00449477;
    }
  }
  else if (param_3 != 7) {
    FUN_00878dfb(0x80070057);
    goto LAB_00449464;
  }
  *param_1 = 7;
LAB_00449477:
  *(undefined8 *)(param_1 + 4) = param_2;
  return param_1;
}


