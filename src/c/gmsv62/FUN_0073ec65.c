/* FUN_0073ec65 - 0x0073ec65 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0073ec65(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(int *)(param_1 + 0xc68) == 3) && (*(int *)(DAT_009784c0 + 0x9b4) == 9)) {
    if (*(int *)(param_1 + 0xb30) == -1) {
      *(undefined4 *)(param_1 + 0xb30) = param_3;
    }
    *(undefined4 *)(param_1 + 0xb34) = 1;
    FUN_008180db(-(uint)(param_1 != 0) & param_1 + 4U);
  }
  return;
}


