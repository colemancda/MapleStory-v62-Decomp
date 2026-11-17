/* FUN_00673add - 0x00673add in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void * __fastcall FUN_00673add(int *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    if (pvVar1 == Self) {
      param_1[1] = param_1[1] + 1;
      pvVar1 = (void *)0x0;
    }
    return pvVar1;
  }
  *param_1 = (int)Self;
  param_1[1] = 1;
  return (void *)0x0;
}


