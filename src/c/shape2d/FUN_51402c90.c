/* FUN_51402c90 - 0x51402c90 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int * __cdecl FUN_51402c90(wchar_t *param_1)

{
  size_t sVar1;
  int *piVar2;
  
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    piVar2 = (int *)(*DAT_51411890)(sVar1 * 2 + 6);
    if (piVar2 != (int *)0x0) {
      *piVar2 = sVar1 * 2;
      memcpy(piVar2 + 1,param_1,sVar1 * 2 + 2);
      return piVar2 + 1;
    }
  }
  return (int *)0x0;
}


