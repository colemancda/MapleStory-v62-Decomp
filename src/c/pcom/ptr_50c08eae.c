/* ptr_50c08eae - 0x50c08eae in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __thiscall ptr_50c08eae(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_3;
  while( true ) {
    if (iVar2 == 0) {
      return param_3;
    }
    iVar1 = (**(code **)(*param_1 + 8))(param_2,iVar2);
    if (iVar1 == 0) break;
    param_2 = param_2 + iVar1;
    iVar2 = iVar2 - iVar1;
  }
  return param_3 - iVar2;
}


