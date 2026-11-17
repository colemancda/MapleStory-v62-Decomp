/* FUN_004a5622 - 0x004a5622 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004a5622(int param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_0097b704)();
  if ((*(int *)(param_1 + 0xb8) != 0) &&
     (iVar1 != *(int *)(param_1 + 0xbc) && -1 < iVar1 - *(int *)(param_1 + 0xbc))) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
    FUN_004b3daf();
  }
  FUN_004a0cd1();
  return;
}


