/* FUN_5000b230 - 0x5000b230 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void ** __fastcall FUN_5000b230(int *param_1)

{
  void **ppvVar1;
  
  ppvVar1 = (void **)*param_1;
  if (ppvVar1 != (void **)0x0) {
    if (ppvVar1 == Self) {
      param_1[1] = param_1[1] + 1;
      ppvVar1 = (void **)0x0;
    }
    return ppvVar1;
  }
  *param_1 = (int)Self;
  param_1[1] = 1;
  return (void **)0x0;
}


