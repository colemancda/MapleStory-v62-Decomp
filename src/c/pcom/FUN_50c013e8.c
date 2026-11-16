/* FUN_50c013e8 - 0x50c013e8 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __cdecl FUN_50c013e8(void *param_1,void *param_2)

{
  int iVar1;
  
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  if (param_2 != (void *)0x0) {
    iVar1 = 4;
    do {
      memcpy(param_1,param_2,4);
      param_1 = (void *)((int)param_1 + 4);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  memcpy(param_1,&DAT_50c130b0,0x10);
  return;
}


