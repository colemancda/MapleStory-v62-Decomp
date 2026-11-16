/* ptr_5080aed7 - 0x5080aed7 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 ptr_5080aed7(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x40);
    if ((*(byte *)(*(int *)(param_1 + 0x1c) + 8) & 0x40) != 0) {
      iVar2 = iVar2 - *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
    }
    *param_2 = iVar2;
    uVar1 = 0;
  }
  return uVar1;
}


