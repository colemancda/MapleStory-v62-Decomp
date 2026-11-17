/* FUN_00674f76 - 0x00674f76 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00674f76(int *param_1)

{
  int iVar1;
  
  for (iVar1 = 0; (*param_1 != 0 && (iVar1 < 0x32)); iVar1 = iVar1 + 1) {
    (*DAT_0097b3ec)(100);
  }
  WSACleanup();
  return;
}


