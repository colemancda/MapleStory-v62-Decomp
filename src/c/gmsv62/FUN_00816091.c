/* FUN_00816091 - 0x00816091 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00816091(int param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 0x58) != 0)) {
    FUN_00817f6e(*(int *)(param_1 + 0x58) + 4);
    if (*(int *)(DAT_00978364 + 0x80) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return 1;
}


