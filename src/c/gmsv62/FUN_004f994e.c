/* FUN_004f994e - 0x004f994e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004f994e(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_2 + 4);
  iVar3 = *(int *)(param_3 + 4);
  if (iVar2 < iVar1) {
    if (iVar2 <= iVar3) {
      if (iVar1 <= iVar3) {
        return param_1;
      }
      return param_3;
    }
  }
  else {
    if (iVar3 < iVar1) {
      return param_1;
    }
    if (iVar3 < iVar2) {
      return param_3;
    }
  }
  return param_2;
}


