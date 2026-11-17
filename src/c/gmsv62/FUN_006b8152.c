/* FUN_006b8152 - 0x006b8152 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006b8152(int *param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_0097b704)();
  if (param_1[0x30] < iVar1) {
    (**(code **)(*param_1 + 0x34))(2);
  }
  return;
}


