/* FUN_004343c5 - 0x004343c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004343c5(short *param_1,undefined4 param_2)

{
  if (*param_1 == 8) {
    return *(undefined4 *)(param_1 + 4);
  }
  return param_2;
}


