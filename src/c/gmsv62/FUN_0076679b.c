/* FUN_0076679b - 0x0076679b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0076679b(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00978368;
  if (*(int *)(DAT_00978358 + 0xd78) == *(int *)(param_1 + 0x61c)) {
    *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(DAT_00978368 + 0x3308);
    *(undefined4 *)(param_1 + 0x694) = *(undefined4 *)(iVar1 + 0x330c);
    *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(iVar1 + 0x3310);
    FUN_008161f1(0);
  }
  return;
}


