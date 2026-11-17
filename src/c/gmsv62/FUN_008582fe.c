/* FUN_008582fe - 0x008582fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_008582fe(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x2cac) != 0) && (*(int *)(param_1 + 0x2cd2) != 0)) {
    iVar1 = FUN_004ea869(*(undefined4 *)(param_1 + 0x2088));
    if ((-1 < iVar1) && (*(int *)(*(int *)(param_1 + 0x2cbc) + 0x21 + iVar1 * 0x25) == 1)) {
      return 1;
    }
  }
  return 0;
}


