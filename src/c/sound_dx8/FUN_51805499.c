/* FUN_51805499 - 0x51805499 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void ** __fastcall FUN_51805499(int *param_1)

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


