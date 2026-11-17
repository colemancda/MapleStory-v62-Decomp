/* FUN_00413fab - 0x00413fab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00413fab(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 3;
  do {
    iVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 * 0x20 + 1 + iVar1;
  } while (iVar3 != 0);
  return iVar2;
}


