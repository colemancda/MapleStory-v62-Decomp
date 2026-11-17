/* FUN_004526dc - 0x004526dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004526dc(int param_1,int param_2)

{
  *(int *)(param_1 + 0x2c) = param_2;
  if ((param_2 == 1) && (*(int *)(param_1 + 0x13c) == 0)) {
    (*DAT_0097b534)(*(undefined4 *)(param_1 + 0x14),5);
    (*DAT_0097b530)(*(undefined4 *)(param_1 + 0x14));
  }
  else {
    (*DAT_0097b534)(*(undefined4 *)(param_1 + 0x14),0);
  }
  return;
}


