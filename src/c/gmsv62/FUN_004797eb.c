/* FUN_004797eb - 0x004797eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004797eb(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x70) == 0)) {
    *(undefined4 *)(param_1 + 0x70) = 1;
    iVar1 = (*DAT_0097b704)();
    *(int *)(param_1 + 0x74) = iVar1 + *(int *)(param_1 + 0x78) * 1000;
  }
  return;
}


