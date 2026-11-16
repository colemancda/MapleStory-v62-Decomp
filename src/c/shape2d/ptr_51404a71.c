/* ptr_51404a71 - 0x51404a71 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


bool ptr_51404a71(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar3 = 0;
  uVar2 = uVar1;
  if (param_2 != 0) {
    do {
      uVar2 = 0;
      if (uVar1 == 0) break;
      uVar1 = *(int *)(uVar1 - 0xc) + 0x10U & -(uint)(*(int *)(uVar1 - 0xc) != 0);
      uVar3 = uVar3 + 1;
      uVar2 = uVar1;
    } while (uVar3 < param_2);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  return uVar3 != param_2;
}


