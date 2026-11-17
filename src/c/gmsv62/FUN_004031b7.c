/* FUN_004031b7 - 0x004031b7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined2 * __thiscall FUN_004031b7(undefined2 *param_1,int param_2,short param_3)

{
  if (param_3 == 3) {
LAB_004031dc:
    if (param_3 != 10) {
      if (param_3 == 0xb) {
        *param_1 = 0xb;
        param_1[4] = -(ushort)(param_2 != 0);
        return param_1;
      }
      *param_1 = 3;
      goto LAB_00403205;
    }
  }
  else if (param_3 != 10) {
    if (param_3 != 0xb) {
      FUN_00878dfb(0x80070057);
    }
    goto LAB_004031dc;
  }
  *param_1 = 10;
LAB_00403205:
  *(int *)(param_1 + 4) = param_2;
  return param_1;
}


