/* FUN_00785f67 - 0x00785f67 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00785f67(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 4) == 0) {
    iVar1 = DAT_00980dfc;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = DAT_00980dfc;
  }
  iVar1 = FUN_008858f0(iVar2,iVar1);
  return -1 < iVar1;
}


