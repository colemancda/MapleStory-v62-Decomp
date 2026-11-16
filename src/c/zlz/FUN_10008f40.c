/* FUN_10008f40 - 0x10008f40 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void ** __fastcall FUN_10008f40(int *param_1)

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


