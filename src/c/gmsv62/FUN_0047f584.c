/* FUN_0047f584 - 0x0047f584 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047f584(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  
  if (0xf < param_2) {
    uVar1 = param_2 >> 4;
    do {
      param_2 = param_2 - 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 7;
  }
  return;
}


