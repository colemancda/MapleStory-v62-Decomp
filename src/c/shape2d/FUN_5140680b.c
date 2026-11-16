/* FUN_5140680b - 0x5140680b in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void ** __fastcall FUN_5140680b(int *param_1)

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


