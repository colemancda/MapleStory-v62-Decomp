/* FUN_004aa2be - 0x004aa2be in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_004aa2be(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(char **)(param_1 + 0x34) != (char *)0x0) && (**(char **)(param_1 + 0x34) != '\0')) {
    iVar2 = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x34);
    iVar1 = (*DAT_0097b580)(*(int *)(param_1 + 0x34),iVar2);
    return iVar2 - iVar1;
  }
  return 0;
}


