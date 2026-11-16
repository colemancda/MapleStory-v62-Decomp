/* ptr_50006b93 - 0x50006b93 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 ptr_50006b93(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0x80004003;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0x80004005;
  }
  else {
    *param_2 = *(int *)(param_1 + 0x10);
    uVar1 = 0;
  }
  return uVar1;
}


