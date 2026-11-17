/* FUN_00475195 - 0x00475195 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00475195(int param_1)

{
  FUN_00475946();
  if (*(SOCKET *)(param_1 + 8) != 0xffffffff) {
    closesocket(*(SOCKET *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  return;
}


