/* FUN_504081bc - 0x504081bc in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __cdecl FUN_504081bc(char param_1)

{
  if (('/' < param_1) && (param_1 < ':')) {
    return param_1 + -0x30;
  }
  if (('@' < param_1) && (param_1 < '[')) {
    return param_1 + -0x37;
  }
  if (('`' < param_1) && (param_1 < '{')) {
    return param_1 + -0x57;
  }
  if (param_1 == '.') {
    return 0x26;
  }
  if (param_1 != ':') {
    return 0x24;
  }
  return 0x25;
}


