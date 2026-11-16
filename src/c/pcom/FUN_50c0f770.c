/* FUN_50c0f770 - 0x50c0f770 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __cdecl FUN_50c0f770(short *param_1)

{
  if (param_1 != (short *)0x0) {
    if (*param_1 != 0x5c) goto LAB_50c0f7a5;
    if (param_1[1] != 0x5c) goto LAB_50c0f7a5;
    for (param_1 = param_1 + 2; (*param_1 != 0 && (*param_1 != 0x5c)); param_1 = param_1 + 1) {
    }
    if (*param_1 != 0x5c) goto LAB_50c0f7a5;
    while( true ) {
      param_1 = param_1 + 1;
LAB_50c0f7a5:
      if (*param_1 == 0) break;
      if (*param_1 == 0x5c) {
        *param_1 = 0x2f;
      }
    }
  }
  return;
}


