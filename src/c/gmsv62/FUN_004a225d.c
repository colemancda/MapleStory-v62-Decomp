/* FUN_004a225d - 0x004a225d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_004a225d(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(char **)(param_1 + 0x34) != (char *)0x0) && (**(char **)(param_1 + 0x34) != '\0')) {
    iVar2 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x34);
    iVar1 = (*DAT_0097b584)(iVar2);
    return iVar1 - iVar2;
  }
  return 0;
}


