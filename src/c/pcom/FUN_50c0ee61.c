/* FUN_50c0ee61 - 0x50c0ee61 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


bool __thiscall FUN_50c0ee61(void *this,int *param_1)

{
  int iVar1;
  
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = *(int **)*param_1;
  }
  iVar1 = FUN_50c0dcc3((void *)((int)this + 0x24),&param_1,(void *)0x0);
  return iVar1 != 0;
}


