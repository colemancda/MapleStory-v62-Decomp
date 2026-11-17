/* ptr_006e2cd4 - 0x006e2cd4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_006e2cd4(int param_1,int param_2)

{
  if ((param_2 == 0) && (-1 < *(int *)(param_1 + 0x34))) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4 + *(int *)(param_1 + 0x34) * 8) + 0x10) =
         1;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    FUN_004b3daf();
  }
  return;
}


