/* FUN_006582f1 - 0x006582f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006582f1(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*DAT_0097b704)();
  iVar1 = *(int *)(param_1 + 0x564);
  if ((iVar1 != 0) && (iVar2 != iVar1 && -1 < iVar2 - iVar1)) {
    FUN_0074d6fb();
  }
  FUN_008162ff();
  return;
}


